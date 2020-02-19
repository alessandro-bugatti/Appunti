<?php

namespace Model;

class Utente
{
    private ?int $id;
    private string $nome;
    private string $cognome;
    private array $libri;
     /**
      * Costruttore del libro.
      * @param $id
      * @param $titolo
      * @param $cognome
      */
        public function __construct($id, $nome, $cognome)
        {
            $this->id = $id;
            $this->nome = $nome;
            $this->cognome = $cognome;
        }

    /**
     * @return int
     */
    public function getId() : ?int
    {
        return $this->id;
    }

    /**
     */
    public function setId(int $id) : void
    {
        $this->id = $id;
    }



    /**
     * @return string
     */
    public function getNome() : string
    {
        return $this->nome;
    }

    /**
     */
    public function setNome(string $nome) : void
    {
        $this->nome = $nome;
    }

    /**
     * @return string
     */
    public function getCognome() : string
    {
        return $this->cognome;
    }

    public function setLibriInPrestito(array $libri) : void
    {
        $this->libri = $libri;
    }

    public function getLibriInPrestito() : array
    {
        return $this->libri;
    }

    public function aggiungiPrestito(Libro $libro) : void
    {
        $this->libri[] = $libro;
    }
}
