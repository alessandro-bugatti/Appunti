<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Salvataggio utente</title>
</head>
<body>
    <?php
    spl_autoload_register(function ($class_name) {
    include_once __DIR__ . '/' . str_replace('\\','/', $class_name) . '.php';
    });

    use Model\UtenteRepository;
    use Model\Utente;
        $utente = new Utente(null, $_POST['nome'],
        $_POST['cognome']);
        $repo = new UtenteRepository();
        $utenteSalvato = $repo->salva($utente);
        if ($utenteSalvato !== null)
        {
            echo "<h2>Utente salvato</h2><pre>";
            var_dump($utenteSalvato);
            echo "</pre>";
        }
        else
            echo "<h2>Problemi nel salvataggio</h2>";
    ?>
</body>
</html>
