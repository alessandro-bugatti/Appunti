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
    $inizio = $_POST['inizio'];
    $fine = $_POST['fine'];
    $sql = 'SELECT * FROM libro WHERE anno >= :inizio AND anno <= :fine ORDER BY titolo';
    $stmt = $pdo->prepare($sql);
    $stmt->execute(
        [
            'inizio' => $inizio,
            'fine' => $fine
        ]
    );
    if ($stmt->rowCount() == 0)
    {
        echo "<p>Non sono presenti libri per questa richiesta</p>";
    }
    else {
        echo '<table>';
        while ($row = $stmt->fetch())
        {
            echo '<tr><td>' . $row['ISBN'] . '</td><td>' . $row['titolo'] . '</td></tr>';
        }
        echo '</table>';
    }
?>
</body>
</html>
