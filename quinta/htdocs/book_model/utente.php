<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prove sulla classe Utente</title>
</head>
<body>
    <?php
    spl_autoload_register(function ($class_name) {
    include_once __DIR__ . '/' . str_replace('\\','/', $class_name) . '.php';
    });

    use Model\UtenteRepository;
    use Model\Utente;

    $repo = new UtenteRepository();
    $utente = $repo->getUtenteByID($_GET['ID']);
    if ($utente !== null)
    {
        echo "<p>Utente: " .
            $utente->getNome() . " " . $utente->getCognome()
            . "</p>";
        $libri = $utente->getLibriInPrestito();
        echo "<p>Elenco dei libri presi in prestito</p>";
        echo "<ul>";
        foreach($libri as $libro)
            echo '<li>' . $libro->getTitolo(). ' '  . $libro->getAutore() . '</li>';
        echo "</ul>";
    }
    else
        echo "Non è presente l'utente";
    ?>
    <h2>Form per l'inserimento di un nuovo utente</h2>
    <form action="inserisciUtente.php" method="post">
        Nome <input type="text" name="nome"><br>
        Cognome <input type="text" name="cognome"><br>
        <input type="submit">
    </form>
</body>
</html>
