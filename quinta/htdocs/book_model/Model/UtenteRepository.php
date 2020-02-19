<?php

namespace Model;

use Util\Connection;
use PDO;

class UtenteRepository
{
    public function getUtenteByID(int $id) : ?Utente
    {
        $pdo = Connection::getInstance();
        $stmt = $pdo->prepare('SELECT * FROM utente WHERE utente.ID = :id');
        $stmt->execute([
            'id' => $id
        ]);
        if ($row = $stmt->fetch())
        {
            $utente = new Utente($row['ID'],$row['nome'], $row['cognome']);
            $stmt = $pdo->prepare('SELECT *, libro.ID AS libro_id  FROM utente, prestito, libro WHERE utente.ID = :id AND utente.ID = prestito.ID_utente AND libro.ID = prestito.ID_libro');
            $stmt->execute([
                'id' => $id
            ]);
            $libri = array();
            while($row = $stmt->fetch())
                $libri[] = new Libro($row['libro_id'], $row['titolo'], $row['autore']);
            $utente->setLibriInPrestito($libri);
            return $utente;
        }
        else
            return null;
    }

    public function getUtenti() : array
    {
        $pdo = Connection::getInstance();
        $stmt = $pdo->query('SELECT * FROM utente ORDER BY cognome');
        $result = array();
        foreach ($stmt as $row)
            $result[] = new Utente($row['ID'],$row['nome'], $row['cognome']);
        return $result;
    }


    public function salva(Utente $utente) : ?Utente
    {
        $pdo = Connection::getInstance();
        if ($utente->getId() === null)
        {
            $sql = 'INSERT INTO utente (nome, cognome) VALUES(:nome,:cognome)';
            $stmt = $pdo->prepare($sql);
            $stmt->execute([
                'nome' => $utente->getNome(),
                'cognome' => $utente->getCognome()
            ]);
            $utente->setId($pdo->lastInsertId());
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
            return $utente;
        return null;

    }
}
