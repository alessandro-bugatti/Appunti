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

    $repo = new UtenteRepository();
    $utente = $repo->getUtenteByID($_GET['ID']);
    //Al template può essere passata qualsiasi cosa, valori singoli, vettori, oggetti ...
    //Qualsiasi cosa passata sarà poi utilizzata nel template con il nome che si è scelto di darle
    if ($utente !== null)
        echo $templates->render('utente', ['nome' => $utente->getNome(), 'cognome' => $utente->getCognome(),
        'libri' => $utente->getLibriInPrestito()]);
