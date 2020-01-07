<!DOCTYPE html>
<html lang="it">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
    <?php
        $host = 'localhost';
        $dbname = 'accesso';
        $user = 'root';
        $pass = '';
        $charset = 'utf8';

        $dsn = "mysql:host=$host;dbname=$dbname;charset=$charset";
        echo "<p>Stringa DSN >>> <strong>" . $dsn . "</strong></p>";
        //Creazione della connessione
        $pdo = new PDO($dsn, $user, $pass);
        //Invio di una query costante
        $stmt = $pdo->query('SELECT * FROM studenti');

        //Visualizzazione dell'elenco degli studenti
        echo "<p><h4>Elenco degli studenti</h4><ul>";
        //Itera su ogni riga della tabella
        while($row = $stmt->fetch())
        {
            echo "\t\t<li>" . $row['nome'] . ', ' . $row['cognome'] . '</li>' . "\n" ;
        }
        echo "</ul></p>";

    ?>
</body>
</html>
