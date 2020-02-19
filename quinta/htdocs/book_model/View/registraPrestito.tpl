<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prestito</title>
</head>
<body>
<h2>Elenco dei prestiti di <?=$nome . " " . $cognome?></h2>
<ul>
    <?php foreach($libri as $libro): ?>
        <li><?=$libro->getTitolo()?></li>
    <?php endforeach?>
</ul>
</body>
</html>
