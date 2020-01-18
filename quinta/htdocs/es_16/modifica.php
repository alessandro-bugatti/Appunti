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
    <h1>Modifica libro</h1>
    <?php
        $id = $_GET['id'];
        setcookie("id", $id);
        $sql = 'SELECT * FROM libro WHERE id = :id';
        $stmt = $pdo->prepare($sql);
        $stmt->execute(
            [ 'id' => $id]
        );
        $row = $stmt->fetch();
        $ISBN = $row['ISBN'];
        $titolo = $row['titolo'];
        $lingua = $row['lingua'];
    ?>
    <form action="aggiorna_libro.php" method="post">
    <!-- Ci si limita ai primi tre campi per brevità -->
        ISBN <input type="text" name="ISBN" value="<?php echo $ISBN ?>"><br>
        Titolo <input type="text" name="titolo" value="<?php echo $titolo ?>"> <br>
        Lingua <input type="text" name="lingua" value="<?php echo $lingua ?>"><br>
        <input type="hidden" name="id" value="<?php echo $id ?>">

    <input type="submit" value="Modifica i dati del libro">
    </form>
</body>
</html>
