<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Calcolo del preventivo</title>
</head>
<body>
    <h1>Complimenti!</h1>
    <?php
    $costo_base = [
        "fotografica" =>
        ["descrizione" => "Libro con copertina fotografica",
        "costi" =>
        ["A5" => 14.95,
        "A4" => 14.95*2,
        "A3" => 14.95*4]],
        "pelle" =>
        ["descrizione" => "Libro in pelle",
         "costi" =>
        ["A5" => 19.95,
        "A4" => 19.95*2,
        "A3" => 19.95*4]],
        "finestra" =>
        ["descrizione" => "Libro con finestra",
        "costi" =>
        ["A5" => 24.95,
        "A4" => 24.95*2,
        "A3" => 24.95*4]]
    ];
    echo "<pre>";
    var_dump($costo_base);
    echo "</pre>";
    $tipo = $_POST["tipo"];
    $formato = $_POST["formato"];
    $aggiuntive = $_POST["pagine_aggiuntive"];
    $dedica = $_POST["dedica"];
    echo "<p>Costo base: " . $costo_base[$tipo]["costi"][$formato] . "</p>";
    echo "<p>Il tipo di libro è: " . $costo_base[$tipo]["descrizione"] . "</p>";

    $costo_pagine = ["A4" => 1,
                    "A3" => 2,
                    "A5" => 0.5];
    var_dump($costo_pagine);
    $costo_pagine_aggiuntive = 10 * ($aggiuntive/50) *
                        $costo_pagine[$formato];
    echo "<p>Il costo delle pagine aggiuntive è :" .
    $costo_pagine_aggiuntive . "</p>";

    ?>

</body>
</html>
