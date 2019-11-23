<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo di checkbox</title>
</head>
<body>
    <h1>Open day scelti</h1>
    <?php
        if (isset($_POST["linguaggi"]))
        {
            $vettore = $_POST["linguaggi"];
            //var_dump($_POST);
            $messaggio = "I linguaggi che conosci sono: ";
            foreach ($vettore as $key => $value) {
                $messaggio .= $key . ",";
            }
            echo $messaggio;
        }
        else {
            echo "Ma che razza di programmatore sei?";
        }
    ?>
</body>
</html>
