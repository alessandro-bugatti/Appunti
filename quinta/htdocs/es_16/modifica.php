<?php
    $id = $_GET['id'];
    setcookie("id", $id);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<?php
    require_once('config.php');

    function scegli_anno($anno)
    {
        $selected = "";
        for ($i = 1900; $i <= 2020; $i++)
        {
            if ($i == $anno)
                $selected = "selected";
            echo "<option value=\"" .$i ."\" " . $selected . ">" . $i . "</option>\n";
            $selected = "";
        }
    }

    function scegli_editore($pdo, $id_editore)
    {
        $stmt = $pdo->query('SELECT ragione_sociale, id FROM editore ORDER BY ragione_sociale');
        $selected = "";
        while ($row = $stmt->fetch())
        {
            if ($row['id'] == $id_editore)
                $selected = "selected";
            echo '<option value="' . $row['id']. '"'. $selected . '>' . $row['ragione_sociale'] . '</option>';
            $selected = "";
        }
    }
?>
<body>
    <h1>Modifica libro</h1>
    <?php
        $sql = 'SELECT * FROM libro WHERE id = :id';
        $stmt = $pdo->prepare($sql);
        $stmt->execute(
            [ 'id' => $id]
        );
        $row = $stmt->fetch();
        $ISBN = $row['ISBN'];
        $titolo = $row['titolo'];
        $lingua = $row['lingua'];
        $anno = $row['anno'];
        $prezzo = $row['prezzo'];
        $id_editore = $row['id_editore'];
    ?>
    <form action="aggiorna_libro.php" method="post">
    <!-- Ci si limita ai primi tre campi per brevità -->
        ISBN <input type="text" name="ISBN" value="<?php echo $ISBN ?>"><br>
        Titolo <input type="text" name="titolo" value="<?php echo $titolo ?>"> <br>
        Lingua <input type="text" name="lingua" value="<?php echo $lingua ?>"><br>
        Anno <select name = "anno">
        <?php
            scegli_anno($anno);
        ?>
    </select><br>
        Prezzo <input type="text" name="prezzo" value="<?php echo $prezzo ?>"><br>
    Editore <select name="id_editore">
        <?php scegli_editore($pdo, $id_editore); ?>
    </select><br>
    <input type="submit" value="Modifica i dati del libro">
    </form>
</body>
</html>
