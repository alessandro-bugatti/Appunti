<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo del menù a tendina</title>
</head>
<body>
    <h1>Inserimento voto</h1>
    <?php
        $studente = $_POST["studente"];
        $voto = $_POST["voto"];
        echo "<p>Lo studente " . $studente . " ha preso " . $voto . "</p>";
    ?>
</body>
</html>
