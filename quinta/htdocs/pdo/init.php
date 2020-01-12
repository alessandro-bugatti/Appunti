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

$sql = "TRUNCATE TABLE studenti";

$pdo->query($sql);

$sql =
"INSERT INTO `studenti` (`id`, `nome`, `cognome`, `sesso`, `nascita`, `password`) VALUES
(1, 'Alessandro', 'Bugatti', 'm', '1971-06-19', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(2, 'Cristina', 'Trevisani', 'f', '1975-06-22', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(3, 'Manfredo', 'Guildini', 'm', '1978-12-12', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(4, 'Alonso', 'Finn', 'm', '1900-12-02', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(5, 'Francesco', 'Giannino', 'm', '1983-10-21', 'd012f68144ed0f121d3cc330a17eec528c2e7d59')";

$pdo->query($sql);
