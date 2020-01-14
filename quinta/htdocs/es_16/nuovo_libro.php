<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<?php
    require_once('config.php');
?>
<body>
    <h1>Inserimento nuovo libro</h1>
    <form action="inserimento_libro.php" method="post">
        ISBN <input type="text" name="ISBN"><br>
        Titolo <input type="text" name="titolo"><br>
        Lingua <input type="text" name="lingua"><br>
        Anno <select name="anno">
        <?php
            for ($i = 1900; $i <= 2020; $i++)
                echo "<option>" . $i . "</option>";
        ?>
    </select><br>
        Prezzo <input type="text" name="prezzo"><br>
        Editore <select name="id_editore">
        <?php
            $stmt = $pdo->query('SELECT ragione_sociale, id FROM editore ORDER BY ragione_sociale');
            while ($row = $stmt->fetch())
            {
                echo '<option value="' . $row['id']. '">' . $row['ragione_sociale'] . '</option>';
            }
        ?>
    </select><br>
    Copertina <select name="tipo_copertina">
        <option>morbida</option>
        <option>rigida</option>
    </select>
    <input type="submit" value="Inserisci il libro">
    </form>
</body>
</html>
