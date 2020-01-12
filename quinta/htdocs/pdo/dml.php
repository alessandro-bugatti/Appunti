<?php

function allStudents($pdo, $header)
{
    //Modo corretto se la query è costante
    $stmt = $pdo->query('SELECT nome, cognome FROM studenti');
    echo '<h2>' . $header . '</h2>';
    while ($row = $stmt->fetch())
    {
        echo $row['nome'] . ' ' . $row['cognome'] . "<br>";
    }
    echo '<hr>';

}

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

allStudents($pdo, "Tabella originale");
//INSERT statement

$sql = "INSERT INTO studenti (nome, cognome) VALUES (:nome, :cognome)";
$pdo->prepare($sql)->execute(['nome'=>'Perfengo', 'cognome' => 'Istrusi']);
allStudents($pdo, "Inserimento di uno studente");

//INSERT statement con controllo delle righe implicate
$sql = "INSERT INTO studenti (nome, cognome) VALUES (:nome, :cognome)";
$stmt = $pdo->prepare($sql);
$stmt->execute(['nome'=>'Perfengo', 'cognome' => 'Istrusi']);
allStudents($pdo, "Inserimento di uno studente");
echo "Righe inserite: " . $stmt->rowCount();

//Update statement
$sql = "UPDATE studenti SET nome = :nome WHERE cognome = :cognome";
$stmt = $pdo->prepare($sql);
$stmt->execute(['nome'=>'Perfello', 'cognome' => 'Istrusi']);
allStudents($pdo, "Modifica del nome di Istrusi");

//DELETE statement
$sql = "DELETE FROM studenti WHERE cognome = :cognome";
$stmt = $pdo->prepare($sql);
$stmt->execute(['cognome' => 'Istrusi']);
allStudents($pdo, "Eliminazione di Istrusi");
echo "Righe cancellate: " . $stmt->rowCount();
