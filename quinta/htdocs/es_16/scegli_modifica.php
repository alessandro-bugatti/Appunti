<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Risultati delle ricerca</title>
</head>
<body>
    <h1>Libri trovati</h1>
<?php
    require_once('config.php');
    $sql = 'SELECT * FROM libro';
    $stmt = $pdo->query($sql);
    if ($stmt->rowCount() == 0)
    {
        echo "<p>Non sono presenti libri per questa richiesta</p>";
    }
    else {
        echo '<table>';
        while ($row = $stmt->fetch())
        {
            echo '<tr><td>' . $row['ISBN'] . '</td><td>' . $row['titolo'] . '</td><td><a href="modifica.php?id=' . $row['id'] . '">Modifica</a></td></tr>';
        }
        echo '</table>';
    }
?>
</body>
</html>
