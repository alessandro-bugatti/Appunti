<?php
ini_set('display_errors', 1);
ini_set('log_errors', 0);

$host = 'localhost';
$db   = 'accesso';
$user = 'root';
$pass = '';
$charset = 'utf8';

$dsn = "mysql:host=$host;dbname=$db;charset=$charset";
$opt = [
PDO::ATTR_ERRMODE            => PDO::ERRMODE_EXCEPTION,
PDO::ATTR_DEFAULT_FETCH_MODE => PDO::FETCH_ASSOC,
PDO::ATTR_EMULATE_PREPARES   => false,
];
$pdo = new PDO($dsn, $user, $pass, $opt);

//Questa istruzione indica al server di istanziare una
//sessione o di continuare con una già presente,
//senza di questa non funzionerebbe niente
session_start();

//Verifica se c'è un utente autenticato
if (isset($_SESSION["utente"]))
{
    $utente_autenticato = true;
    $id = $_SESSION["utente"]["id"];
    $nome = $_SESSION["utente"]["nome"];
    $cognome = $_SESSION["utente"]["cognome"];
}
else
    $utente_autenticato = false;
?>

<!DOCTYPE html>
<html lang="it">

<head>
    <meta charset="UTF-8">
    <title>Prova di autenticazione</title>
    <link rel="stylesheet" href="mini-default.min.css">
</head>


<body>

<header class="sticky">
  <a href="saluti.php" role="button">Home</a>
  <!--Il menù viene diversificato se è attivo un utente o no-->
  <?php if ($utente_autenticato): ?>
      <a href="voti.php" role="button">I miei voti</a>
      <a href="logout.php" role="button">Logout</a>
  <?php else: ?>
      <a href="login.php" role="button">Login</a>
  <?php endif; ?>
</header>
<br />
<div class="container">
  <div class="row">
    <div class="col-sm">
    <!--Questa parte serve a far vedere che c'è una sessione attiva-->
    <?php
        if ($utente_autenticato)
        {
            //Vengono recuperati i voti dell'utente, interessante
            //notare che l'id utente viene recuperato dai dati di sessione
            //non viene passato dall'utente
            $sql = 'SELECT * FROM voti WHERE codstudente = :id';
            $stmt = $pdo->prepare($sql);
            $stmt->execute(['id' => $id]);
            $voti = $stmt->fetchAll();
            echo '<div class="card warning fluid">Ciao ' . $nome . ' ' . $cognome . ' <strong>I tuoi voti</strong> ';
            if (count($voti) > 0)
                foreach($voti as $voto)
                    echo $voto['voto'] . '<br>';
            else
                    echo 'Non ci sono voti presenti';
            echo  '</div>';
        }

    ?>
    <div class="card fluid">Questo esempio di autenticazione molto semplice usa
        PHP base per mostrare come funzionano le sessioni e come
        si può gestire il passaggio da una pagina a un'altra. Non viene
        fatto nessun uso di routing, template e del modello MVC, per quello
        si può fare riferimento all'applicazione ASK_MVC.
        Se in questa pagina vedi una card di benvenuto qua sopra vuol dire che
        sei all'interno di una sessione, altrimenti devi passare attraverso
        la pagina di login. I dati di login già nel DB sono:<br>
        <p>username: <mark>Alessandro</mark></p>
        <p>username: <mark>Cristina</mark></p>
        <p>username: <mark>Manfredo</mark></p>
        <p>Per tutti la password è <mark>pippo</mark></p>
    </div>




    </div>
  </div>
</div>
<footer>
    <p>Esempio di autenticazione</p>
</footer>

</body>
</html>
