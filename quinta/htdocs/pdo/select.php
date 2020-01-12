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


//Modo corretto se la query è costante
$stmt = $pdo->query('SELECT nome FROM studenti');
while ($row = $stmt->fetch())
{
    echo $row['nome'] . "<br>";
}


//Prepared statement
$id = 3;
$sql = "SELECT * FROM studenti WHERE ID > :id";
$stmt = $pdo->prepare($sql);
$stmt->execute(['id' => $id]);
echo '<hr>';
foreach($stmt as $row)
{
    echo $row['nome'] . "<br>";
}
