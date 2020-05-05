-- phpMyAdmin SQL Dump
-- version 5.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Mag 03, 2020 alle 17:44
-- Versione del server: 10.4.11-MariaDB
-- Versione PHP: 7.4.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `accesso`
--
CREATE DATABASE IF NOT EXISTS `accesso` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `accesso`;

-- --------------------------------------------------------

--
-- Struttura della tabella `studenti`
--

CREATE TABLE `studenti` (
  `id` int(10) UNSIGNED NOT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `cognome` varchar(20) DEFAULT NULL,
  `sesso` char(1) DEFAULT NULL,
  `nascita` date DEFAULT NULL,
  `username` varchar(50) NOT NULL,
  `password` varchar(255) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `studenti`
--

INSERT INTO `studenti` (`id`, `nome`, `cognome`, `sesso`, `nascita`, `username`, `password`) VALUES
(1, 'Alessandro', 'Bugatti', 'm', '1971-06-19', 'Alessandro', '$2y$10$4nwadIApKwq6WmU4jKhQiO6GdGd.H.HCxiEsWBuv/qrbxuPJu5Z0K'),
(2, 'Cristina', 'Trevisani', 'f', '1975-06-22', 'Cristina', '$2y$10$4nwadIApKwq6WmU4jKhQiO6GdGd.H.HCxiEsWBuv/qrbxuPJu5Z0K'),
(3, 'Manfredo', 'Guildini', 'm', '1978-12-12', 'Manfredo', '$2y$10$4nwadIApKwq6WmU4jKhQiO6GdGd.H.HCxiEsWBuv/qrbxuPJu5Z0K'),
(4, 'Alonso', 'Finn', 'm', '1900-12-02', 'Alonso', '$2y$10$4nwadIApKwq6WmU4jKhQiO6GdGd.H.HCxiEsWBuv/qrbxuPJu5Z0K'),
(5, 'Francesco', 'Giannino', 'm', '1983-10-21', 'Francesco', '$2y$10$4nwadIApKwq6WmU4jKhQiO6GdGd.H.HCxiEsWBuv/qrbxuPJu5Z0K');

-- --------------------------------------------------------

--
-- Struttura della tabella `voti`
--

CREATE TABLE `voti` (
  `codstudente` int(11) NOT NULL DEFAULT 0,
  `data` date NOT NULL DEFAULT '0000-00-00',
  `voto` int(11) NOT NULL DEFAULT 0
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `voti`
--

INSERT INTO `voti` (`codstudente`, `data`, `voto`) VALUES
(1, '2005-01-23', 7),
(1, '2005-02-13', 5),
(3, '2005-02-13', 8),
(4, '2005-03-01', 4),
(4, '2005-01-23', 6);

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `studenti`
--
ALTER TABLE `studenti`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `username_unique` (`username`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `studenti`
--
ALTER TABLE `studenti`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
