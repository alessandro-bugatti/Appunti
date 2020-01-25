<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
    <pre>
    <?php
        require_once('config.php');
        //var_dump($_POST);
        //var_dump($_COOKIE);
        $ISBN = $_POST['ISBN'];
        $titolo = htmlspecialchars($_POST['titolo']);
        $lingua = $_POST['lingua'];
        $anno = $_POST['anno'];
        $prezzo = $_POST['prezzo'];
        $id_editore = $_POST['id_editore'];
        $id = $_COOKIE['id'];
        $sql = 'UPDATE libro SET ISBN =:ISBN, titolo = :titolo, lingua =:lingua, anno = :anno, prezzo = :prezzo, id_editore = :id_editore WHERE id = :id';
        $stmt = $pdo->prepare($sql);
        $stmt->execute(
            [
                'ISBN' => $ISBN,
                'titolo' => $titolo,
                'lingua' => $lingua,
                'anno' => $anno,
                'prezzo' => $prezzo,
                'id_editore' => $id_editore,
                'id' => $id
            ]
        );
        //Altra possibilità per chiudere l'operazione
        //Ridirezione verso una pagina che mostra
        //l'elenco
        //header("Location: /es_16/lista_libri.php");

        if ($stmt->rowCount() == 1)
            echo '<p>Il libro è stato modificato con successo </p>';
        else {
            echo '<p>Il libro non è stato modificato, contatta l\'amministratore</p>';
        }
     ?>
     </pre>
</body>
</html>
