<?php

require 'vendor/autoload.php';

use League\Plates\Engine;
// Create new Plates instance
$templates = new Engine('./View','tpl');

$libri = [
    ['titolo' => 'I Malavoglia',
    'autore' => 'Verga'],
    ['titolo' => 'La coscienza di Zeno',
    'autore' => 'Svevo']
];

// Render a template
echo $templates->render('list', ['libri' => $libri]);
