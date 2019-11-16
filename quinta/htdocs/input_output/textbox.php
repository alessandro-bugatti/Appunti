<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di textbox</title>
</head>
<body>
    <h1>Calcolo della somma</h1>
    <?php
        $a = $_POST["num1"];
        $b = $_POST["num2"];
        $c = $a + $b;
        echo "<p>Il risultato della somma tra " . $a
            . " e " . $b . " è " . $c . "</p>";
     ?>
</body>
</html>
