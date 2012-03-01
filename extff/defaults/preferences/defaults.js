//global preferences
pref("extensions.lidad.skin", "default");
//empty, let firefox decide
pref("extensions.lidad.language", "");

//if we show up fullscreen
pref("extensions.lidad.fullscreen", true);
//force 800x600
pref("extensions.lidad.interfaceRes800", false);
//show error messages if there are any localization issues
pref("extensions.lidad.debugLocalization", false);

//o fontsize é um int referente à porcentagem do tamanho css da fonte
//os valores são steps de  25
pref("extensions.lidad.fontsize", 100);

//max number of history entries
pref("extensions.lidad.maxhistoryentries", 100);
//max number of search history entries
pref("extensions.lidad.maxsearchhistentries", 40);

//if we use extendid edit
pref("extensions.lidad.extendededit", true);

//navigate automatically on lists
pref("extensions.lidad.listautonav", true);

//system voice (and default for new books)
pref("extensions.lidad.voice.system", "");
pref("extensions.lidad.voice.speed", 0);
pref("extensions.lidad.voice.volume", 100);

//if we echo when the user types
pref("extensions.lidad.echotyping", true);
//if we confirm on audio the commands
pref("extensions.lidad.echocommands", true);

//if we beep when reading and go over a bookmark
pref("extensions.lidad.bookmarkbeep", true);

//if the application speaks
pref("extensions.lidad.voice.voiceon", true);

//-1: use system default
pref("extensions.lidad.audio.volume", -1);

//if not set, do not use it
pref("extensions.lidad.bookfolder", "");

//when opening a new book, use this navigation level
pref("extensions.lidad.defaultlevel", 2);

//refers to password
pref("extensions.lidad.pass.number", 0);

//how many phrases to export with anotations
pref("extensions.lidad.exportphrases", 3);

//se a migracao das preferecias de antes de 20110228 foi feita
pref("extensions.lidad.migrate20110228", false);

