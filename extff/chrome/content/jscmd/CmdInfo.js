//controle da tela de infs do livro

var CmdInfo = 
{

listInfoItems:null,

//para ativar o nosso modo
activate:function()
{
	CSpeak.stopAndClear();
	
	//nos marcamos como ativos
	CmdMain.setMode(this);
	
	//ativa a tela de inicio
	CmdMain.activateStart();
	
	CSkin.CmdInfo_activate();
	
	//comecamos a falar
	CSpeak.stopAndClear();
	if(listInfoItems != null);
		CSpeak.playArray(listInfoItems, null);
},


//atualizar os dados na tela
update:function()
{
	if(RunningInsideExercises)
		return;


	//nota: se alterar a opcoa de tocar mp3 ou tts, tem que reconstruir aqui

	var home = CSkin.PegarBaseInfo();

	
	if(!CmdMain.OPFpresent())
	{
		//limpar todos os textos da tela
		home.getElementById("livroTitulo").innerHTML = "";
		home.getElementById("livroAutor").innerHTML = "";
		home.getElementById("livroEditora").innerHTML = "";


		//imagem da capa
			//nao tem capa, voltamos para o padrao
			var capa = CUtils.GetExtensionFolder();
			capa.append("chrome");
			capa.append("skin");
			capa.append("comm");
			capa.append("capalivro.jpg");
			home.getElementById("livroCapaImg").src = "file:///" + capa.target;
		
		
		//ultima leitura
		home.getElementById("livroUltimaLeitura").textContent = CMsgIface.NotAvailable();

		//se armazenou ponto de leitura
		home.getElementById("livroPonto").style.visibility = "hidden";

		return;
	}
		
	//agora acertamos a tela
	//mostramos os divs que devem estar na tela
	
	//montamos os dados do livro
	listInfoItems = new CTextArray();

	//titulo
	var item = new CTextItem();
	item.SetText_string(CMsgIface.BookTitle());
	listInfoItems.CTIarray.push(item);
	//o titulo
	item = CmdMain.OPFGetMeta(CmdMain.OPFGet().opffile.metadata_tagTitle, false);
	listInfoItems.CTIarray = listInfoItems.CTIarray.concat(item.CTIarray);
	//transfere para a tela
	home.getElementById("livroTitulo").innerHTML = item.toCommas();

	//autor
	item = new CTextItem();
	item.SetText_string(CMsgIface.BookAuthor());
	listInfoItems.CTIarray.push(item);
	//o titulo
	item = CmdMain.OPFGetMeta(CmdMain.OPFGet().opffile.metadata_tagAuthor, false);
	listInfoItems.CTIarray = listInfoItems.CTIarray.concat(item.CTIarray);
	//transfere para a tela
	home.getElementById("livroAutor").innerHTML = item.toCommas();

	//editora
	item = new CTextItem();
	item.SetText_string(CMsgIface.BookPublisher());
	listInfoItems.CTIarray.push(item);
	//temos 2 fontes, procura em qq uma delas
	item = CmdMain.OPFGetMeta("x-metadata/dtb:sourcePublisher", true);
	if(item == null)
		item = CmdMain.OPFGetMeta("dc-metadata/dc:Publisher", false);
	listInfoItems.CTIarray = listInfoItems.CTIarray.concat(item.CTIarray);
	//transfere para a tela
	home.getElementById("livroEditora").innerHTML = item.toCommas();

	//imagem da capa
	//devemos fazer de uma forma padrao; por enquanto, só fucnioa com os nossos livros
	var capa = CUtils.ResolveURL("capalivro.jpg", CmdMain.OPFGet().opffile.path);
	if(CUtils.FileExist(capa))
	{
		home.getElementById("livroCapaImg").src = capa;
	}
	else
	{
		//nao tem capa, voltamos para o padrao
		capa = CUtils.GetExtensionFolder();
		capa.append("chrome");
		capa.append("skin");
		capa.append("comm");
		capa.append("capalivro.jpg");
		home.getElementById("livroCapaImg").src = "file:///" + capa.target;
	}
	
	
	//ultima leitura
	if(CmdMain.OPFGet().opffile.marks.getLastReadDate() == null)
		home.getElementById("livroUltimaLeitura").textContent = CMsgIface.NotAvailable();
	else
	{
		home.getElementById("livroUltimaLeitura").textContent = CMsg.DateToScreenString(CmdMain.OPFGet().opffile.marks.getLastReadDate());
		item = new CTextItem();
		item.SetText_string(CMsgIface.LastReading() + CMsg.DateToScreenString(CmdMain.OPFGet().opffile.marks.getLastReadDate()));
		listInfoItems.CTIarray.push(item);
	}
	

	//se armazenou ponto de leitura
	if(CmdMain.OPFGet().opffile.marks.openedWithLastMark)
	{
		home.getElementById("livroPonto").style.visibility = "visible";
		item = new CTextItem();
		item.SetText_string(CMsgIface.ReadingPointStoredSpeak());
		listInfoItems.CTIarray.push(item);
	}
	else
		home.getElementById("livroPonto").style.visibility = "hidden";
}

}

