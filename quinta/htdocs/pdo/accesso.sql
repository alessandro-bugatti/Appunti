-- phpMyAdmin SQL Dump
-- version 4.0.4.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generato il: Apr 09, 2015 alle 18:08
-- Versione del server: 5.5.32
-- Versione PHP: 5.4.19

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `accesso`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `studenti`
--

CREATE TABLE IF NOT EXISTS `studenti` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(20) DEFAULT NULL,
  `cognome` varchar(20) DEFAULT NULL,
  `sesso` char(1) DEFAULT NULL,
  `nascita` date DEFAULT NULL,
  `password` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=6 ;

--
-- Dump dei dati per la tabella `studenti`
--

INSERT INTO `studenti` (`id`, `nome`, `cognome`, `sesso`, `nascita`, `password`) VALUES
(1, 'Alessandro', 'Bugatti', 'm', '1971-06-19', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(2, 'Cristina', 'Trevisani', 'f', '1975-06-22', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(3, 'Manfredo', 'Guildini', 'm', '1978-12-12', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(4, 'Alonso', 'Finn', 'm', '1900-12-02', 'd012f68144ed0f121d3cc330a17eec528c2e7d59'),
(5, 'Francesco', 'Giannino', 'm', '1983-10-21', 'd012f68144ed0f121d3cc330a17eec528c2e7d59');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
