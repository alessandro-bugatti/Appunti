<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Inserimento libro</title>
</head>
<body>
    <?php
        require_once('config.php');
        $ISBN = $_POST['ISBN'];
        $titolo = $_POST['titolo'];
        $lingua = $_POST['lingua'];
        $anno = $_POST['anno'];
        $prezzo = $_POST['prezzo'];
        $id_editore = $_POST['id_editore'];
        $tipo_copertina = $_POST['tipo_copertina'];
        $sql = 'INSERT INTO libro (ISBN, titolo, lingua, anno, prezzo, id_editore, tipo_copertina) VALUES(:ISBN, :titolo,
        :lingua, :anno, :prezzo, :id_editore, :tipo_copertina)';
        $stmt = $pdo->prepare($sql);
        $stmt->execute(
            [
                'ISBN' => $ISBN,
                'titolo' => $titolo,
                'lingua' => $lingua,
                'anno' => $anno,
                'prezzo' => $prezzo,
                'id_editore' => $id_editore,
                'tipo_copertina' => $tipo_copertina
            ]
        );
        if ($stmt->rowCount() == 1)
            echo '<p>Il libro è stato inserito con successo </p>';
        else {
            echo 'Il libro non è stato inserito, contatta l\'amministratore';
        }
    ?>
</body>
</html>
