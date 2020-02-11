<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prove sulla classe Utente</title>
</head>
<body>
<h2><?=$nome . " " . $cognome?></h2>
<h2>Elenco dei libri prestati</h2>
<ul>
    <?php foreach($libri as $libro): ?>
        <li>
            <?=$libro->getTitolo()?>,
            <strong><?=$libro->getAutore()?></strong>
        </li>
    <?php endforeach?>
</ul>
<a href="https://docs.google.com/presentation/d/1Fa0yjpHaY15Ati81XQzGHYc-01PIuqyxbocBDDxU6VY/edit?usp=sharing" target="_blank">Breve presentazione con le note essenziali su Plates</a>
</body>
</html>
