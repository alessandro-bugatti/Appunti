<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo di checkbox</title>
</head>
<body>
    <h1>Open day scelti</h1>
    <?php
        if (isset($_GET["dicembre"]))
            echo "<p>Hai scelto di venire in dicembre, grazie.</p>";
        if (isset($_GET["gennaio"]))
            echo "<p>Hai scelto di venire a gennaio, grazie.</p>";
    ?>
</body>
</html>
