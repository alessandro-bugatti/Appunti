<?php

session_start();

//Elimina tutte le variabili di sessione, è utile se
//poi nello stesso script venisse fatto ancora riferimento
//alla variabile $_SESSION
$_SESSION = array();

//Viene distrutto il cookie di sessione lato client
//in modo che non possa più essere continuata la stessa sessione
if (isset($_COOKIE[session_name()])) {
    //Viene distrutto il cookie settando un tempo nel passato,
    //funziona se il client ha un tempo ragionevolmente simile al server
   setcookie(session_name(), '', time()-42000, '/');
}

//Distrugge la sessione lato server, in genere è un file nella cartella
//impostata in php.ini
session_destroy();

header("Location: saluti.php");
?>
