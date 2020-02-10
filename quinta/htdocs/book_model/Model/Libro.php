<?php

namespace Model;

class Libro
{
    private ?int $id;
    private string $titolo;
    private string $autore;
     /**
      * Costruttore del libro.
      * @param $id
      * @param $titolo
      * @param $autore
      */
        public function __construct($id, $titolo, $autore)
        {
            $this->id = $id;
            $this->titolo = $titolo;
            $this->autore = $autore;
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
    public function getTitolo() : string
    {
        return $this->titolo;
    }

    /**
     */
    public function setTitolo(string $titolo) : void
    {
        $this->titolo = $titolo;
    }

    /**
     * @return string
     */
    public function getAutore() : string
    {
        return $this->autore;
    }
}
