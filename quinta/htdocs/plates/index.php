<?php

require 'vendor/autoload.php';

use League\Plates\Engine;
// Create new Plates instance
$templates = new Engine('./View','tpl');

// Render a template
echo $templates->render('test', ['name' => 'Daniele']);
