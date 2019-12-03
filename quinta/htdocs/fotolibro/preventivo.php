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
        ["A5" => 14.95,
        "A4" => 14.95*2,
        "A3" => 14.95*4],
        "pelle" =>
        ["A5" => 19.95,
        "A4" => 19.95*2,
        "A3" => 19.95*4],
        "finestra" =>
        ["A5" => 24.95,
        "A4" => 24.95*2,
        "A3" => 24.95*4]
    ];
    echo "<pre>";
    var_dump($costo_base);
    echo "</pre>";
    $tipo = $_POST["tipo"];
    $formato = $_POST["formato"];
    $aggiuntive = $_POST["pagine_aggiuntive"];
    $dedica = $_POST["dedica"];
    echo "<p>Costo base: " . $costo_base[$tipo][$formato] . "</p>";

    ?>

</body>
</html>
