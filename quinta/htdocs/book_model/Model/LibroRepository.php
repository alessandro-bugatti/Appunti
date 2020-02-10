<?php

namespace Model;

use Util\Connection;
use PDO;

class LibroRepository
{
    public function getLibroByID(int $id) : ?Libro
    {
        $pdo = Connection::getInstance();
        $stmt = $pdo->prepare('SELECT * FROM libro WHERE ID = :id');
        $stmt->execute([
            'id' => $id
        ]);
        if ($stmt->rowCount() == 1)
        {
            $row = $stmt->fetch();
            return new Libro($row['ID'],$row['titolo'], $row['autore']);
        }
        return null;
    }

    public function getLibri() : array
    {
        $pdo = Connection::getInstance();
        $stmt = $pdo->query('SELECT * FROM libro ORDER BY titolo LIMIT 0,10'); //Il LIMIT serve solo per l'esempio
        $result = array();
        foreach ($stmt as $row)
            $result[] = new Libro($row['ID'],$row['titolo'], $row['autore']);
        return $result;
    }

    public function salva(Libro $libro) : ?libro
    {
        $pdo = Connection::getInstance();
        if ($libro->getId() === null)
        {
            $sql = 'INSERT INTO libro (titolo, autore) VALUES(:titolo,:autore)';
            $stmt = $pdo->prepare($sql);
            $stmt->execute([
                'titolo' => $libro->getTitolo(),
                'autore' => $libro->getAutore()
            ]);
            $libro->setId($pdo->lastInsertId());
        }
        else
        {
            $sql = 'UPDATE libro SET titolo = :titolo, autore = :autore WHERE ID = :id';
            $stmt = $pdo->prepare($sql);
            $stmt->execute([
                'titolo' => $libro->getTitolo(),
                'autore' => $libro->getAutore(),
                'id' => $libro->getId()
            ]);
        }
        if ($stmt->rowCount() == 1)
            return $libro;
        return null;

    }
}
