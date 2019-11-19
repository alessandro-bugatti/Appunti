<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo di un menù a discesa</title>
</head>
<body>
    <h1>Inserimento di un voto</h1>
    <form action="lista.php" method="post">
        <p>Studente <input type="text" name="studente" placeholder="Cognome e nome"></p>
        <p>Voto:
            <select name="voto">
                <?php
                    for ($i = 1; $i <= 10; $i++)
                        echo "<option>" . $i . "</option>";
                ?>
            </select>
        </p>
        <input type="submit" value="Invia il voto">

    </form>

</body>
</html>
