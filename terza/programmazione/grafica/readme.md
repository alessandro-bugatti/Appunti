#Programmi grafici con libreria VSGL2

Si ricorda che tutti i programmi presenti in  questa sezione per funzionare hanno bisogno di essere spostati nella cartella myApps all'interno della cartella della libreria VSGL2 scaricata da GitHub e installata secondo le istruzioni presenti qua sotto.

## Installazione VSGL2
* Andare sul sito [della libreria](https://github.com/alessandro-bugatti/vsgl2)
* Scegliere Download ZIP dal menù Clone or download
* Scompattare il file zip in una destinazione a scelta
* Se si vuole creare un nuovo progetto spostarsi nella cartella **lessons**
* Tornare nel sito [GitHub](https://github.com/alessandro-bugatti/vsgl2) e spostarsi in basso dove viene spiegato il processo di installazione. Nella sezione Windows andare sul secondo modo (Second one). Scaricare il package che si trova nel link [this package](http://www.imparando.net/software/SDL_package.zip).
* Aprire la cartella di installazione di CodeBlocks e spostarsi nella sottocartella *MinGW/include* e copiare la cartella *SDL2*, che si trova nel package zippato, al suo interno.
* Tornare nella cartella *MinGW* e spostarsi nella cartella *lib*, copiare al suo interno tutti i file contenuti nella cartella *lib* che si trova nel package scaricato.
* Tornare nella radice del filesystem (C:) e entrare nella cartella *Windows/SysWOW64* e copiare al suo interno i file che si trovano nella cartella *bin* all'interno del solito package scaricato.
* A questo punto dobbiamo verificare che tutto funzioni
* Tornare nella cartella lessons e scegliere un progetto, ad esempio **0000_window_creation** e aprirlo facendo doppio click sul progetto, non sul main.
* Provare a compilarlo, se viene mostrata una finestra di dimensioni 512 x 512 bianca allora siete a posto, altrimenti...