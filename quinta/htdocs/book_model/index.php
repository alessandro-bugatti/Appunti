<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Esempio di utilizzo del modello libro</title>
</head>
<body>
    <h1>Esempio di utilizzo del Modello libro</h1>
    <h2>Lista dei libri</h2>
    <?php
    spl_autoload_register(function ($class_name) {
    include_once __DIR__ . '/' . str_replace('\\','/', $class_name) . '.php';
    });

        use Model\Libro ;
        use Model\LibroRepository;

        $repo = new LibroRepository();
        $libri = $repo->getLibri();
        foreach ($libri as $libro):?>
        <li> Titolo: <?php echo $libro->getTitolo() ?></li>
        <?php
        endforeach;
    ?>
    <h2>Selezione di un libro tramite ID (esempio ID = 50)</h2>
    <?php
        $id = 50;
        $libro = $repo->getLibroByID($id);
        if ($libro !== null)
            echo "<p>Libro con ID = 50: " . $libro->getTitolo() . "</p>";
        else
            echo "Non è presente un libro con ID = " . $id;
    ?>
    <h2>Selezione di un libro non presente ID (esempio ID = 5000)</h2>
    <?php
        $id = 5000;
        $libro = $repo->getLibroByID($id);
        if ($libro !== null)
            echo "<p>Libro con ID = 50: " . $libro->getTitolo() . "</p>";
        else
            echo "Non è presente un libro con ID = " . $id;
    ?>
    <h2>Inserimento di un nuovo libro</h2>
    <?php
        $libro = new Libro(null, "Il vangelo secondo Gesù Cristo", "Josè Samarago");
        if (($libroInserito = $repo->salva($libro)) !== null)
            echo "<p>Libro inserito con successo</p>";
        else
            echo "<p>Il libro non è stato inserito</p>";
    ?>
    <h2>Var_dump del libro appena inserito</h2>
    <pre>
        <?php var_dump($libroInserito); ?>
    </pre>
    <h2>Modifica del libro appena inserito</h2>
    <?php
        $libroInserito->setTitolo("Lisbona");
        $repo->salva($libroInserito);
    ?>
    <h2>Var_dump del libro modificato</h2>
    <pre>
        <?php var_dump($libroInserito); ?>
    </pre>

</body>
</html>
