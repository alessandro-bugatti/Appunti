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

        //Invio di una query non costante nel modo non corretto
        $id = $_GET['id'];
        $sql = 'SELECT * FROM studenti WHERE id > ' . $id;
        echo "<p>La query non costante è <strong>" . $sql . "</strong></p>";
        $stmt = $pdo->query($sql);

        //Visualizzazione dell'elenco degli studenti
        echo "<p><h4>Elenco degli studenti</h4><ul>";
        //Itera su ogni riga della tabella
        while($row = $stmt->fetch())
        {
            echo "\t\t<li>" . $row['nome'] . ', ' . $row['cognome'] . '</li>' . "\n" ;
        }
        echo "</ul></p>";

        //Invio di una query non costante nel modo corretto

        $stmt = $pdo->prepare('SELECT * FROM studenti WHERE id > :id_scelto');

        $stmt->execute(['id_scelto' => $id]);
        $sql = 'SELECT * FROM studenti WHERE id > ' . $id;
        echo "<p>La query non costante è <strong>" . $sql . "</strong></p>";

        //Visualizzazione dell'elenco degli studenti
        echo "<p><h4>Elenco degli studenti</h4><ul>";
        //Itera su ogni riga della tabella
        while($row = $stmt->fetch())
        {
            echo "\t\t<li>" . $row['nome'] . ', ' . $row['cognome'] . '</li>' . "\n" ;
        }
        echo "</ul></p>";

        //Invio di una query non costante nel modo corretto
        //Stesso esempio con più parametri
        $stmt = $pdo->prepare('SELECT * FROM studenti WHERE id > :id1 AND id < :id2');
        $id2 = $_GET['id2'];

        $stmt->execute(['id1' => $id, 'id2' => $id2]);
        $sql = 'SELECT * FROM studenti WHERE id > ' . $id . ' AND id < ' . $id2;
        echo "<p>La query non costante è <strong>" . $sql . "</strong></p>";

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
