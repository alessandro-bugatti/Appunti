-- phpMyAdmin SQL Dump
-- version 4.3.11
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Gen 14, 2020 alle 12:16
-- Versione del server: 5.6.24
-- PHP Version: 5.6.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `libreria`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `editore`
--

CREATE TABLE IF NOT EXISTS `editore` (
  `id` int(10) unsigned NOT NULL,
  `ragione_sociale` varchar(50) NOT NULL,
  `citta` varchar(50) NOT NULL,
  `indirizzo` varchar(50) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `editore`
--

INSERT INTO `editore` (`id`, `ragione_sociale`, `citta`, `indirizzo`) VALUES
(1, 'Bompiani', 'Milano', 'Via Tal dei Tali 33');

-- --------------------------------------------------------

--
-- Struttura della tabella `libro`
--

CREATE TABLE IF NOT EXISTS `libro` (
  `id` int(10) unsigned NOT NULL,
  `ISBN` varchar(20) NOT NULL,
  `titolo` varchar(100) NOT NULL,
  `lingua` varchar(30) NOT NULL,
  `anno` int(11) NOT NULL,
  `prezzo` float NOT NULL,
  `id_editore` int(10) unsigned NOT NULL,
  `tipo_copertina` enum('rigida','morbida','','') NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `libro`
--

INSERT INTO `libro` (`id`, `ISBN`, `titolo`, `lingua`, `anno`, `prezzo`, `id_editore`, `tipo_copertina`) VALUES
(1, '98482377277', 'IL Signore degli Anelli', 'italiano', 2007, 22.3, 1, 'rigida');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `editore`
--
ALTER TABLE `editore`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `libro`
--
ALTER TABLE `libro`
  ADD PRIMARY KEY (`id`), ADD UNIQUE KEY `ISBN` (`ISBN`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `editore`
--
ALTER TABLE `editore`
  MODIFY `id` int(10) unsigned NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT for table `libro`
--
ALTER TABLE `libro`
  MODIFY `id` int(10) unsigned NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=2;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
