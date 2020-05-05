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
//Attenzione che nel file php.ini il percorso dove sono salvate le sessioni
//sia corretto, nel mio caso ho dovuto metterlo a posto a mano in questo modo
//session.save_path = "F:\xampp_7_4_1\tmp"
session_start();

//Verifica se la richiesta arriva dalla pagina di login
if (isset($_POST["username"])){
    //Controlla se le credenziali sono corrette
    $username = $_POST["username"];
    $password = $_POST["password"];
    //Lo username è un campo di tipo UNIQUE, quindi la riga di risposta è unica
    //oppure non è presente
    $sql = "SELECT * FROM studenti WHERE username = :username";
    $stmt = $pdo->prepare($sql);
    $stmt->execute(['username'=>$username]);
    $recordUtente = $stmt->fetch();
    //Se c'è l'utente selezionato e la password è corretta allora tutti i suoi
    //dati vengono registrati nella sessione
    //Siccome si usa password_verify per verificare la correttezza della password
    //per memorizzarla nel database bisogna usare password_hash
    if ($recordUtente && password_verify($password, $recordUtente["password"]))
        $_SESSION["utente"] = $recordUtente;
}
//Qua si può entrare se nel passaggio precedente sono stati
//salvati i dati di sessioni
//oppure se c'è già una sessione in corso
//Vengono create alcune variabili che verranno usate in seguito
if (isset($_SESSION["utente"]))
{
    $utente_autenticato = true;
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
            echo '<div class="card warning fluid">Ciao ' . $nome . ' ' . $cognome . ' <strong>ID di sessione</strong> ' . session_id() . '</div>';

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
