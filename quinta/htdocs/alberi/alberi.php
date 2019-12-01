<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Simulazione del compito degli alberi</title>
</head>
<body>
    <?php
    $metratura = $_POST["metratura"];
    $tipo = $_POST["tipo"];
    $densita = $_POST["densita"];

    $prezzi = ["pino" => 10,
            "cipresso" => 12,
            "abete" => 7];
    $quanti = ["bassa" => 10,
                "media" => 15,
                "alta" => 20];
    //var_dump($tipo);
    //var_dump($prezzi);
    $numero_alberi = $metratura/100 * $quanti[$densita];
    $numero_alberi = (int)$numero_alberi;
    $costo = $prezzi[$tipo]*$numero_alberi;
    if ($numero_alberi == 0)
        echo "<p>Non è possibile piantare alberi.</p>";
    else
        echo "<p>Il costo per piantare " . $numero_alberi . " piante di tipo " . $tipo . " con densità " . $densita . " è " . $costo . " euro. </p>";
    ?>
</body>
</html>
