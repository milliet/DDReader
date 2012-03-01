
//controle da tela de splash

var CmdSplash = 
{

//para ativar o nosso modo
activate:function()
{
	//paramos de falar
	CSpeak.stopAndClear();
	CSpeak.CommandEcho_localaudio("welcome.mp3");
	
	//nos marcamos como ativos
	CmdMain.setMode(this);

	//ativa a tela de inicio
	CmdMain.activateStart();
	
	CSkin.CmdSplash_activate();
},


//atualizar os dados na tela
update:function()
{
	//nao fazemos nada
}

//fim da variavel
}


