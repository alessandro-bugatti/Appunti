<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempi di vettori in PHP</title>
</head>
<body>
    <h2>Dichiarazione di un vettore</h2>
    <pre>
        //Utilizzo esplicito di una funzione
        $v = array();
        var_dump($v);
        //Per assegnamento
        $r = [6,9,318];
        var_dump($r);
    </pre>
    <?php
        //Utilizzo esplicito di una funzione
        $v = array();
        var_dump($v);
        //Per assegnamento
        $r = [6,9,318];
        var_dump($r);
    ?>
    <h2>Utilizzo del foreach</h2>
    <pre>
        foreach ($r as $key => $value)
        {
            echo "&ltli&gt" . $key . " => " . $value . "&lt/li&gt";
        }
    </pre>

    <ul>
    <?php
        foreach ($r as $key => $value) {
            echo "<li>" . $key . " => " . $value . "</li>";
        }
    ?>
    </ul>
    <h2>Utilizzo del for</h2>
    <pre>
        for ($i = 0; $i < count($r); $i++)
        {
            echo "&ltli&gt" .  $v[$r] . "&lt/li&gt";
        }
    </pre>

    <ul>
    <?php
        for ($i = 0; $i < count($r); $i++) {
            echo "<li>" . $r[$i] . "</li>";
        }
    ?>
    </ul>
    <h2>Vettori come mappe associative</h2>

    <?php
        $frutta = ['mela' => 7, 'pera' => 4, 'banana' => 3];
        var_dump($frutta);

     ?>

<h2>Vettori di vettori</h2>
<?php
$itinerari = ["Brescia" =>
    [
        ["Milano",11.20],
        ["Bergamo",7.8],
        ["Verona",9.8]
    ],
    "Bergamo" =>
        [
            ["Brescia",7.8],
            ["Mantova",12.8]
        ]

];
echo "<pre>";
var_dump($itinerari);
echo "</pre>";
echo "<h3>Elenco delle città con cui è collegata Brescia<br>";
foreach ($itinerari["Bergamo"] as $value) {
    foreach ($value as $v) {
        echo $v . " ";
    }
    echo "<br>";
}
 ?>

 <?php
    $r[] = 256;

    $r[7] = 258;
    var_dump($r);
  ?>

</body>
</html>
