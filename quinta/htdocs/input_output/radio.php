<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo dei radio button</title>
</head>
<body>
    <h1>Scegli il tuo libro preferito</h1>
    <?php
        if (isset($_GET["libro"]))
        {
            $libro = $_GET["libro"];
            echo "</p>Il tuo libro preferito è " . $libro ."</p>";
        }
    ?>
</body>
</html>
