<?php
    require 'vendor/autoload.php';

    use League\Plates\Engine;
    // Create new Plates instance
    $templates = new Engine('./View','tpl');

    spl_autoload_register(function ($class_name) {
    include_once __DIR__ . '/' . str_replace('\\','/', $class_name) . '.php';
    });

    use Model\UtenteRepository;
    use Model\Utente;
    use Model\LibroRepository;
    use Model\Libro;

    $id_utente = $_POST['utente'];
    $id_libro = $_POST['libro'];

    $repo = new UtenteRepository();
    $utente = $repo->getUtenteByID($id_utente);
    $repo = new LibroRepository();
    $libro = $repo->getLibroByID($id_libro);
    $utente->aggiungiPrestito($libro);

    //Al template può essere passata qualsiasi cosa, valori singoli, vettori, oggetti ...
    //Qualsiasi cosa passata sarà poi utilizzata nel template con il nome che si è scelto di darle
    echo $templates->render('registraPrestito',
    [
        'nome' => $utente->getNome(),
        'cognome' => $utente->getCognome(),
        'libri' => $utente->getLibriInPrestito()

    ]);
