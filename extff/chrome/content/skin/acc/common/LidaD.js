
/* Script para abrir o frame inicial no tamanho adequado */

function init() 
{
	if(RunningInsideTutorial)
		return;

	//se usamos tela inteira ou nao
	var fullscreen = CPref.fullscreen();
	if(fullscreen)
	{
	   window.locationbar.visible=false;
	   window.toolbar.visible=false;
	   window.personalbar.visible=false;
	   window.statusbar.visible=false;
	   window.menubar.visible=false;
	   //tem que ter timeout para funcionar, nao pergunte porque
	   setTimeout("window.fullScreen = true;",1);
	}
	else
	{
		// Force resolution
		var larg = 800;
		var alt = 600;
		if(!CPref.interfaceRes())
		{
			larg = 1024;
			alt = 768;
		}


		if(window.innerWidth < larg)
			window.innerWidth = larg;
		if(window.innerHeight < alt)
			window.innerHeight = alt;
	   // Force resolution
	   //document.documentElement.setAttribute("width", "1024");
	   //document.documentElement.setAttribute("height", "768");
		//	   document.documentElement.setAttribute("width", screen.availWidth);
		//	   document.documentElement.setAttribute("height", screen.availHeight);
	}
}


/* ESTABELECE O MOUSE OVER E OUT DOS BOTÕES DA TOOLBAR DE CIMA - COMANDOS */

function changeSrc(wich,aImg, mode){
	//alert(aImg);
	
	if (mode == 'a'){
		oriSrc = aImg.split(".")[0];
		imageSrc = oriSrc + "_on.gif";
		document.getElementById(wich).image = imageSrc;
	}
	if (mode == 'b'){
		oriSrc = aImg.split("_")[0];
		imageSrc =  oriSrc + ".gif";
		document.getElementById(wich).image = imageSrc;
	}
}
		