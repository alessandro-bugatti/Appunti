<?php


namespace Util;

use PDO;

class Connection
{
    //Impedisce la creazione di oggetti Connection
    private function __construct()
    {

    }

    private static PDO $pdo;

    public static function getInstance() : PDO
    {
        if (!isset($pdo))
        {
            /**
             * Per semplicità tutti i parametri di connessione si
             * trovano qua anzichè in un file di configurazione separato
             */
            $host = 'localhost';
            $db   = 'biblioteca';
            $user = 'root';
            $pass = '';
            $charset = 'utf8';

            $DSN = "mysql:host=$host;dbname=$db;charset=$charset";
            $pdo = new PDO($DSN, $user, $pass);
        }
        return $pdo;
    }

}
