//gerenciamento da soletração
//eventListener deve implementar EVTSPChange(numero do item ativo)
function CSpell(node, eventListener)
{
	this._EventListener = eventListener;
	this._init(node);
}

//quem escuta os nossos eventos
CSpell.prototype._EventListener = null;
//item ativo
CSpell.prototype._activeIndex = -1;
//gerenciador dos limites
CSpell.prototype._textLimits = null;
//a voz que vamos usar
CSpell.prototype.voiceid = "";
//se navegamos automaticamente
CSpell.prototype.autonav = false;

//nossa lista de letras adicionais (fora as letras, inclusive acentuadas)
CSpell_letters = "0123456789@#$%&*()-+={}[]/\\§¶©®™";


//se é um separador
CSpell_IsSeparator = function(letter)
{
	if(CSpell_letters.indexOf(letter) >= 0)
		return false;
	
	if(letter.toString().toLowerCase() != letter.toString().toUpperCase())
		return false;

	//o resto é separador
	return true;	
}


//efetivamente incializa
CSpell.prototype._init = function(node)
{
	this._node = node;

	//nossos limites
	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.SpellEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.SpellStart());
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, node.toString() == "");
	
	
	//temos 2 textos, um com o texto de fala e outro com o texto de soletracao
	//o teto de tela é o mesmo da soletracao
	
	//se passarem um texto para a gente, simplesmente processamos como strings
	//se tiver um no, fazemos o seguinte: eles ficam diferentes onde existe uma abreviatura
	//nesses pontos, processamos diferentemente
	var spell = "";
	var speak = "";
	var spellabbr = null;
	var speakabbr = null;

	try
	{
		//tiramos uma copia do cara
		var spellnode = node.cloneNode(true);
		var speaknode = node.cloneNode(true);

		//guardamos o array de elementos
		spellabbr = spellnode.getElementsByTagName("abbr");
		speakabbr = speaknode.getElementsByTagName("abbr");
		
		//subistituimos tdoos eles
		//note que os dois tem o mesmo nro de itens
		for(var i = 0; i < spellabbr.length; i++)
		{
			//somente processamos se tiver um atributo title, se nao tiver fica com o texto original
			var noteitem = spellabbr.item(i);
			if(noteitem.attributes)
			if(noteitem.attributes.getNamedItem("title"))
			{
				noteitem.attributes.getNamedItem("title").value = noteitem.textContent;
				noteitem.textContent = "1";

				noteitem = speakabbr.item(i);
				noteitem.textContent = "2";
			}
		}
		

		spell = spellnode.textContent;
		speak = speaknode.textContent;
	}
	catch(e)
	{
		//qualquer erro que der, processamos via o texto
		//como os dois ficam iguais, nao precisa das variaveis que tem as tags
		spell = node.toString();
		speak = spell;
	}


	//agora vamos dividir os textos
	this._speakarr = new Array();
	this._spellarr = new Array();
	
	//a palavra que estamos montando agora
	var palavra = "";
	//se estamos processando um separador agora
	var separador = true;
	//o indice no array de abreviaturas que estamos usando
	var indice_abbr = 0;
	
	//note que os dois textos (spell e speak) possuem o mesmo tamanho
	for(var i = 0; i < spell.length; i++)
	{
		var letra = spell.charAt(i);
		var processou = false;

		//se for uma abreviatura, processa diferente
		if(letra != speak.charAt(i))
		{
			//vamos ver se tem alguma coisa errada, tipo se as abreviaturas efetivamente existem
			if(indice_abbr < spellabbr.length)
			if(speakabbr.length == spellabbr.length)
			{
			
				//guardamos a palavra sendo processada
				//se estiver rodando um separador, tem que colocar uma palavra
				if(palavra != "" || separador)
				{
					this._speakarr.push(palavra);
					this._spellarr.push(palavra);
					separador = !separador;
					palavra = "";
				}
				
				//se for um separador, tem que passar ele
				if(separador)
				{
					this._speakarr.push(palavra);
					this._spellarr.push(palavra);
					separador = !separador;
					palavra = "";
				}
				
				//agora salva a palavra e a pronuncia
				var noteitem = spellabbr.item(indice_abbr);
				palavra = "";
				if(noteitem.attributes)
				if(noteitem.attributes.getNamedItem("title"))
					palavra = noteitem.attributes.getNamedItem("title").value;
				this._speakarr.push(palavra);

				noteitem = speakabbr.item(indice_abbr);
				palavra = "";
				if(noteitem.attributes)
				if(noteitem.attributes.getNamedItem("title"))
					palavra = noteitem.attributes.getNamedItem("title").value;
				this._spellarr.push(palavra);

				separador = !separador;
				palavra = "";
				
				
				//proximo indice
				indice_abbr++;
				processou = true;
			}
		}
		
		
		if(!processou)
		{
			//nao é uma abreviatura, processamento normal
			var este_separa = CSpell_IsSeparator(letra);
			
			//separadores especiais: ponto, virgula, dois pontos, hifen
			//se tiver somente ponto, nao é separador. se tiver ponto espaco, é separador
			//o mesmo para os outros especiais
			if(letra == "." || letra == "," || letra == ":" || letra == "-")
			{
				este_separa = true;
				
				//se tiver proxima letra
				if(i + 1 < spell.length)
				//se for letra repetida, é separador
				if(letra != spell.charAt(i+1))
				//se nao tiver uma abreviatura na proxima letra
				if(spell.charAt(i+1) == speak.charAt(i+1))
				{
					//e se a proxima letra for outro separador
					if(!CSpell_IsSeparator(spell.charAt(i+1)))
					{
						//este cara não é separador
						este_separa = false;
					}
				}
			}
			
			if(este_separa != separador)
			{
				//salvamos a palavra
				this._speakarr.push(palavra);
				this._spellarr.push(palavra);
				separador = !separador;
				palavra = "";
			}
			
			//salva a letra
			palavra += letra;
		}
	}

	//salvamos a ultima palavra	
	this._speakarr.push(palavra);
	this._spellarr.push(palavra);
}


//o objeto original, pode ser uma arvore ou um texto
CSpell.prototype._node = "";
//o array de palavras a serem faladas, os indices pares nao sao falados, sao somente os separadores
CSpell.prototype._speakarr = null;
//o array de palavras a serem soletradas, os indices pares nao sao falados
CSpell.prototype._spellarr = null;

CSpell.prototype.GetSpeakarr = function()
{
	return this._speakarr;
}

CSpell.prototype.GetSpellarr = function()
{
	return this._spellarr;
}



//eventos dos limites
CSpell.prototype.TLevt_current = function()
{
	this._speakcurrent();
}


//quando terminar de falar o item atual, avancamos para o proximo item
CSpell.prototype.TLevt_next = function()
{
	//nenhum item
	if(this._speakarr.length == 0)
		return;

	//se ja esta no fim, nao vamos falar
	if(this._activeIndex + 1 >= parseInt(this._speakarr.length / 2) )
	{
		//avisamos que nao tem nada
		this._textLimits.TL_bottomlimit();
		return;
	}
	
	this._activeIndex++;
	this._speakcurrent();
}

//para voltar um item para tras
CSpell.prototype.TLevt_prev = function()
{
	//se ja estamos no comeco, nao subimos mais, só avisamos quem está em cima
	if(this._activeIndex <= 0)
	{
		//avisamos que estamos no fim da lista
		this._textLimits.TL_toplimit();
		return;
	}


	this._activeIndex--;
	this._speakcurrent();
}


//garante o limite
CSpell.prototype._ensureLimits = function(alwaysEvent)
{
	var prev = this._activeIndex;
	
	if(this._activeIndex >= parseInt(this._speakarr.length / 2) )
		this._activeIndex = parseInt(this._speakarr.length / 2) - 1;
	if(this._activeIndex < 0)
		this._activeIndex = 0;
	
	//evento
	if(alwaysEvent || prev != this._activeIndex)
	if(this._EventListener)
		this._EventListener.EVTSPChange(this, this._activeIndex);
}


//para falar
CSpell.prototype.speak = function()
{
	this._activeIndex = 0;
	this._speakcurrent();
}

//para falar
CSpell.prototype._speakcurrent = function()
{
	this._ensureLimits(true);
	if(this._speakarr.length == 0)
	{
		//avisamos que nao tem nada
		var msg = new CTextItem();
		msg.SetText_string( CMsg.SpellEmpty());
		CSpeak.playItem(msg, this._textLimits);
		return;
	}

	//lemos o item atual
	var msg = new CTextItem();
	var text = this._spellarr[this._activeIndex * 2 + 1];
	msg.SetText_string( text);
	
	//navegacao auto
	msg.listText = false;
	msg.autonav = this.autonav;
	msg.spell = false;
	
	msg.bookText = true;
	msg.bookVoice = this.voiceid;
	
	CSpeak.playItem(msg, this._textLimits);
	return;
}


//o texto a ser soletrado
CSpell.prototype.getTextSpell = function()
{
	this._ensureLimits(false);
	if(this._speakarr.length == 0)
	{
		//nao tem nada
		return "";
	}

	//lemos o item atual
	var text = this._speakarr[this._activeIndex * 2 + 1];
	return text;
}


