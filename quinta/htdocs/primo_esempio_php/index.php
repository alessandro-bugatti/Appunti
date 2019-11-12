<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Primo esempio php</title>
</head>
<body>
    <h1>Primo esempio di PHP</h1>
    <?php
    echo "<p>Oggi è il " . date("d-m-Y")."</p>";
    $a = 4.2;
    $a = $a + 7 ;
    echo "<p>" . $a . "</p>";
    ?>
</body>
</html>
