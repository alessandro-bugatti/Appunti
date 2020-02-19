<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prestito</title>
</head>
<body>
<form action="registraPrestito.php" method="post">
    <h2>Elenco degli utenti</h2>
    <?php foreach($utenti as $utente): ?>
        <input type="radio" name="utente" value="<?=$utente->getID()?>">
        <?=$utente->getCognome() . " " . $utente->getNome()?>
        <br>
    <?php endforeach?>

    <h2>Elenco dei libri</h2>

    <?php foreach($libri as $libro): ?>
        <input type="radio" name="libro" value="<?=$libro->getID()?>">
        <?=$libro->getTitolo() . ", " . $libro->getAutore()?>
        <br>
    <?php endforeach?>
    <input type="submit" value="Inserisci il prestito">


</form>
</body>
</html>
