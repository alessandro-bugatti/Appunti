<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Lista dei libri</title>
</head>
<body>
    <h2>Lista dei libri </h2>
    <ul>
        <?php foreach($libri as $libro): ?>
            <li><?=$libro['titolo'];?>,<strong>
                <?=$libro['autore'];?></strong></li>
        <?php endforeach; ?>
    </ul>
</body>
</html>
