-- phpMyAdmin SQL Dump
-- version 5.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Feb 03, 2020 alle 09:15
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
-- Database: `biblioteca`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `libro`
--

CREATE TABLE `libro` (
  `ID` int(10) UNSIGNED NOT NULL,
  `cdd` varchar(15) CHARACTER SET utf8 DEFAULT NULL,
  `collocazione` varchar(15) CHARACTER SET utf8 DEFAULT NULL,
  `collocazione2` varchar(100) COLLATE utf8_unicode_ci DEFAULT NULL,
  `autore` varchar(75) CHARACTER SET utf8 DEFAULT NULL,
  `titolo` varchar(75) CHARACTER SET utf8 DEFAULT NULL,
  `note` varchar(255) COLLATE utf8_unicode_ci DEFAULT NULL,
  `ISBN` varchar(30) COLLATE utf8_unicode_ci DEFAULT NULL,
  `stato` enum('Non disponibile','Solo consultazione','Prestabile') COLLATE utf8_unicode_ci DEFAULT NULL,
  `casa_editrice` varchar(50) COLLATE utf8_unicode_ci DEFAULT NULL,
  `anno_consultazione` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dump dei dati per la tabella `libro`
--

INSERT INTO `libro` (`ID`, `cdd`, `collocazione`, `collocazione2`, `autore`, `titolo`, `note`, `ISBN`, `stato`, `casa_editrice`, `anno_consultazione`) VALUES
(4, '371.9 BUR', '3227', NULL, 'WELLINGTON, Jean', '\"Catttivo rendimento\" Problemi e linee di azione', NULL, NULL, NULL, NULL, NULL),
(5, '428.24 IRT', '17257', NULL, 'IRTI, Roselia', '\"I\" come inglese', NULL, NULL, NULL, NULL, NULL),
(7, '973.929 SET', '18046', NULL, '11 SETTEMBRE 2001', '11 settembre 2001', NULL, NULL, NULL, NULL, NULL),
(8, '515.076 FEL', '3689', NULL, 'FELDHOFER', '1200 esercizi di analisi matematica completamente risolti', NULL, NULL, NULL, NULL, NULL),
(9, '613.707 KOS', '3334', NULL, 'KOS, Bohumil', '1200 esercizi di ginnastica', NULL, NULL, NULL, NULL, NULL),
(10, '945.632 DEB', '16379', NULL, 'DEBENEDETTI, Giacomo', '16 ottobre 1943', NULL, NULL, NULL, NULL, NULL),
(11, '945.632 DEB', '16379', NULL, 'Ginzburg, Natalia', '16 ottobre 1943', NULL, NULL, NULL, NULL, NULL),
(12, '945.632 DEB', '16379', NULL, 'Moravia, Alberto', '16 ottobre 1943', NULL, NULL, NULL, NULL, NULL),
(13, '853.91408 SED', '14705', NULL, '16 RACCONTI ITALIANI', '16 Racconti Italiani', NULL, NULL, NULL, NULL, NULL),
(14, '853.91408 SED', '14705', NULL, 'Manenti, Lucia', '16 Racconti Italiani', NULL, NULL, NULL, NULL, NULL),
(15, '853.91408 SED', '14705', NULL, 'Zorat, Lidia', '16 Racconti Italiani', NULL, NULL, NULL, NULL, NULL),
(16, '853.91408 SED', '15345', NULL, '16 RACCONTI ITALIANI', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(17, '853.91408 SED', '15345', NULL, 'Manenti, Lucia', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(18, '853.91408 SED', '15345', NULL, 'Zorat, Lidia', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(19, '853.91408 SED', '15779', NULL, '16 RACCONTI ITALIANI', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(20, '853.91408 SED', '15779', NULL, 'Manenti, Lucia', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(21, '853.91408 SED', '15779', NULL, 'Zorat, Lidia', '16 Racconti italiani', NULL, NULL, NULL, NULL, NULL),
(22, '671.36 CON', '16761', NULL, 'CONVEGNO NAZIONALE TRATTAMENTI TERMICI, 16. Salsomaggiore, 1997', '16° Convegno nazionale trattamenti termici', NULL, NULL, NULL, NULL, NULL),
(23, '671.36 CON', '17558', NULL, 'CONVEGNO NAZIONALE TRATTAMENTI TERMICI, 17. Salsomaggiore, 1999', '17° Convegno nazionale trattamenti termici', NULL, NULL, NULL, NULL, NULL),
(24, '940.4 AUD', '17519', NULL, 'AUDOUIN-ROUZEAU, Stephane', '1914-1918', NULL, NULL, NULL, NULL, NULL),
(25, '940.4 AUD', '17519', NULL, 'Becker, Annette', '1914-1918', NULL, NULL, NULL, NULL, NULL),
(26, '947.084 WER', '17522', NULL, 'WERTH, Nicolas', '1917', NULL, NULL, NULL, NULL, NULL),
(27, '947.084 CAR', '678', NULL, 'CARR, Edward H.', '1917 Millenovecentodiciassette', NULL, NULL, NULL, NULL, NULL),
(28, '945.091 CHI', '541', NULL, 'CHICCO, Francesco', '1922-1945 Millenovecentoventidue-millenovecentoquarantacinque', NULL, NULL, NULL, NULL, NULL),
(29, '945.091 CHI', '541', NULL, 'LIVIO,Gigi', '1922-1945 Millenovecentoventidue-millenovecentoquarantacinque', NULL, NULL, NULL, NULL, NULL),
(30, '940.53 KEM', '16834', NULL, 'KEMP, Anthony', '1939-1945', NULL, NULL, NULL, NULL, NULL),
(31, '945.092 MIL', '950', NULL, 'MILLENOVECENTOQUARANTACINQUE-MILLENOVECENTO...', '1945-1975', NULL, NULL, NULL, NULL, NULL),
(32, '945.092 MIL', '631', NULL, '1945-1975', '1945-1975 Millenovecentoquarantacinque-Millenovecentosettantacinque', NULL, NULL, NULL, NULL, NULL),
(33, '945.092 MIL', '718', NULL, '1945-1975', '1945-1975 Millenovecentoquarantacinque-Millenovecentosettantacinque', NULL, NULL, NULL, NULL, NULL),
(34, '945.092 MIL', '742*', NULL, '1945-1975', '1945-1975 Millenovecentoquarantacinque-Millenovecentosettantacinque', NULL, NULL, NULL, NULL, NULL),
(35, '945.092 MIL', '743', NULL, '1945-1975', '1945-1975 Millenovecentoquarantacinque-Millenovecentosettantacinque', NULL, NULL, NULL, NULL, NULL),
(36, '341.2422 EUR', '4152', NULL, 'COMUNITA EUROPEA', '1978 il Parlamento europeo', NULL, NULL, NULL, NULL, NULL),
(37, '341.2422 EUR', '4152', NULL, 'EUROPA', '1978 il Parlamento europeo', NULL, NULL, NULL, NULL, NULL),
(38, '823.912 ORW', '18406', NULL, 'ORWELL, George', '1984', NULL, NULL, NULL, NULL, NULL),
(39, '823.912 ORW', '6850', NULL, 'ORWELL, George', '1984', NULL, NULL, NULL, NULL, NULL),
(40, '796.325 BRI', '13907', NULL, 'BRIGNOLE, G.', '230 Esercizi di riscaldamento e controllo dei fondamentali con il pallone', NULL, NULL, NULL, NULL, NULL),
(41, '796.325 BRI', '13907', NULL, 'Pardini, F.', '230 Esercizi di riscaldamento e controllo dei fondamentali con il pallone', NULL, NULL, NULL, NULL, NULL),
(42, '945.091 GRA', '12026', NULL, 'De Felice, Renzo', '25 Luglio quarant\'anni dopo', NULL, NULL, NULL, NULL, NULL),
(43, '945.091 GRA', '12026', NULL, 'GRANDI, Dino', '25 Luglio quarant\'anni dopo', NULL, NULL, NULL, NULL, NULL),
(44, '945.260927 VEN', '6773', NULL, 'Fondazione Clementina Calzari Trebeschi', '28 Maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(45, '945.260927 VEN', '6773', NULL, 'VENTOTTO MAGGIO: PIAZZA LOGGIA', '28 Maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(46, '945.260927 VEN', '962', NULL, 'Fondazione Calzari Trebeschi', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(47, '945.260927 VEN', '962', NULL, 'VENTOTTO MAGGIO: PIAZZA LOGGIA', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(48, '945.260927 VEN', '963', NULL, 'Fondazione Calzari Trebeschi', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(49, '945.260927 VEN', '963', NULL, 'VENTOTTO MAGGIO: PIAZZA LOGGIA', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(50, '945.260927 VEN', '964*', NULL, 'VENTOTTO MAGGIO: PIAZZA LOGGIA', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(51, '945.260927 VEN', '965*', NULL, 'VENTOTTO MAGGIO: PIAZZA LOGGIA', '28 maggio: Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(52, '813.52 FIT', '', NULL, 'FITZGERALD, Francis Scott', '28 Racconti', NULL, NULL, NULL, NULL, NULL),
(53, '621.3 CAR', '15870', NULL, 'Carrescia, Vito', '300 domande-risposte per conoscere meglio le norme CEI', NULL, NULL, NULL, NULL, NULL),
(54, '853.914 CHI', '12319', NULL, 'CHIARA, Piero', '40 Storie negli elzeviri del \"Corriere\"', NULL, NULL, NULL, NULL, NULL),
(55, '005.262 BAS', 'LAM', NULL, 'LAMOITIER, Jean-Pierre', '50 Esercizi in Basic', 'Gran bel libro', NULL, NULL, NULL, NULL),
(56, '620.1076 RIN', '15211', NULL, 'RINALDI, Emilio', '500 problemi risolti di meccanica generale nelle sue piu\' interessanti  ...', NULL, NULL, NULL, NULL, NULL),
(57, '620.1076 RIN', '12656', NULL, 'RINALDI, Emilio', '500 problemi risolti di meccanica generale nelle sue piu\' interessanti ...', NULL, NULL, NULL, NULL, NULL),
(58, '005.265 ASS', 'LEV', NULL, 'LEVENTHAL, Lance A.', '6800', 'Libro vecchio ma interessante', NULL, NULL, NULL, NULL),
(59, '945.091 OTT', '959', NULL, 'OTTO SETTEMBRE MILLENOVECENTOQUARANTATRE', '8 settembre 1943', NULL, NULL, NULL, NULL, NULL),
(60, '005.42 INT', '15522', NULL, '80286 e 80386 Programmatore di sistemi', '80286 e 80386 Programmatore di sistemi', NULL, NULL, NULL, NULL, NULL),
(61, '005.42 INT', '15522', NULL, 'INTEL', '80286 e 80386 Programmatore di sistemi', NULL, NULL, NULL, NULL, NULL),
(62, '004.165 OTT', 'INT', NULL, '80286 Hardware', '80286 Hardware', NULL, NULL, NULL, NULL, NULL),
(63, '004.165 OTT', 'INT', NULL, 'INTEL', '80286 Hardware', NULL, NULL, NULL, NULL, NULL),
(64, '005.265 OTT', 'INT', NULL, '80286 Programmatore', '80286 Programmatore', NULL, NULL, NULL, NULL, NULL),
(65, '005.265 OTT', 'INT', NULL, 'INTEL', '80286 Programmatore', NULL, NULL, NULL, NULL, NULL),
(66, '004.165 OTT', 'INT', NULL, '80287 e 80387 Coprocessori matematici', '80287 e 80387 Coprocessori matematici', NULL, NULL, NULL, NULL, NULL),
(67, '004.165 OTT', 'INT', NULL, 'INTEL', '80287 e 80387 Coprocessori matematici', NULL, NULL, NULL, NULL, NULL),
(68, '004.165 OTT', 'INT', NULL, '80386 Hardware', '80386 Hardware', NULL, NULL, NULL, NULL, NULL),
(69, '004.165 OTT', 'INT', NULL, 'INTEL', '80386 Hardware', NULL, NULL, NULL, NULL, NULL),
(70, '005.265 OTT', 'INT', NULL, '80386 Programmatore', '80386 Programmatore', NULL, NULL, NULL, NULL, NULL),
(71, '005.265 OTT', 'INT', NULL, 'INTEL', '80386 Programmatore', NULL, NULL, NULL, NULL, NULL),
(72, '551.514 PIC', '2146*', NULL, 'BALBO, Italo', 'A 16.000 metri', NULL, NULL, NULL, NULL, NULL),
(73, '551.514 PIC', '2146*', NULL, 'PICCARD, Augusto', 'A 16.000 metri', NULL, NULL, NULL, NULL, NULL),
(74, '330.02 SED', '3313', NULL, 'SEDILLOT, Rene', 'A B C dell\'economia', NULL, NULL, NULL, NULL, NULL),
(75, '823.912 LAW', '16488', NULL, 'LAWRENCE, David Herbert', 'a cavallo', NULL, NULL, NULL, NULL, NULL),
(76, '853.914 FRU', '13078', NULL, 'FRUTTERO, Carlo', 'A che punto e\' la notte', NULL, NULL, NULL, NULL, NULL),
(77, '853.914 FRU', '13078', NULL, 'Lucentini, Franco', 'A che punto e\' la notte', NULL, NULL, NULL, NULL, NULL),
(78, '301 TOP', '2224', NULL, 'TOPITSCH, Ernst', 'A che serve l\'ideologia', NULL, NULL, NULL, NULL, NULL),
(79, '853.914 SCI', '14210', NULL, 'SCIASCIA, Leonardo', 'A ciascuno il suo', NULL, NULL, NULL, NULL, NULL),
(80, '853.914 SCI', '1585', NULL, 'SCIASCIA, Leonardo', 'A ciascuno il suo', NULL, NULL, NULL, NULL, NULL),
(81, '853.914 SCI', '16551', NULL, 'SCIASCIA, Leonardo', 'A ciascuno il suo', NULL, NULL, NULL, NULL, NULL),
(82, '421 HOC', '4595', NULL, 'HOCKETT, Charles F.', 'A course in modern linguisties', NULL, NULL, NULL, NULL, NULL),
(83, '423 NAT', '15967*', NULL, 'NATION, Michael', 'A dictionary of modern britain', NULL, NULL, NULL, NULL, NULL),
(84, '945.260927 ADI', '961', NULL, 'A DIECI ANNI DALLA STRAGE DI PIAZZA LOGGIA', 'A dieci anni dalla strage di Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(85, '945.260927 ADI', '961', NULL, 'RIZZI, Anna', 'A dieci anni dalla strage di Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(86, '945.260927 ADI', '961', NULL, 'RODOTA\', Stefano', 'A dieci anni dalla strage di Piazza Loggia', NULL, NULL, NULL, NULL, NULL),
(87, '373.246 LAV', '3434', NULL, 'A LAVORARE SI IMPARA', 'A lavorare si impara', NULL, NULL, NULL, NULL, NULL),
(88, '373.246 LAV', '3434', NULL, 'Fondazione Giovanni Agnelli', 'A lavorare si impara', NULL, NULL, NULL, NULL, NULL),
(89, '853.914 MAR', '1552', NULL, 'MAROTTA, Giuseppe', 'A Milano non fa freddo', NULL, NULL, NULL, NULL, NULL),
(90, '820.9 MAR', '', NULL, 'MARINONI MINGAZZINI, Rosa', 'A mirror of the times', NULL, NULL, NULL, NULL, NULL),
(91, '820.9 MAR', '', NULL, 'Salmoiraghi, Luciana', 'A mirror of the times', NULL, NULL, NULL, NULL, NULL),
(92, '820.9 MAR', '16946', NULL, 'MARINONI MINGAZZINI, Rosa', 'A mirror of the Times', NULL, NULL, NULL, NULL, NULL),
(93, '820.9 MAR', '16946', NULL, 'Sadleir, Richard', 'A mirror of the Times', NULL, NULL, NULL, NULL, NULL),
(94, '820.9 MAR', '16946', NULL, 'Salmoiraghi, Luciana', 'A mirror of the Times', NULL, NULL, NULL, NULL, NULL),
(95, '621 FAS', '5087', NULL, 'FASOGLIO, A.', 'A new technical reading book', NULL, NULL, NULL, NULL, NULL),
(96, '843.914 BEN', '16957', NULL, 'BEN JELLOUN, Tahar', 'A occhi bassi', NULL, NULL, NULL, NULL, NULL),
(97, '843.914 BEN', '16957', NULL, 'Volterrani, Egi', 'A occhi bassi', NULL, NULL, NULL, NULL, NULL),
(98, '425 SCA', '', NULL, 'SCATI, M.', 'A programmed English workbook', NULL, NULL, NULL, NULL, NULL),
(99, '536.5 SEG', '18739', NULL, 'SEGRE, Gino', 'A qualcuno piace freddo', NULL, NULL, NULL, NULL, NULL),
(100, '621.3 CAL', '', NULL, 'CALASSO, Maria Grazia', 'A reader in electrotechics and electronics', NULL, NULL, NULL, NULL, NULL),
(101, '621.3 CAL', '', NULL, 'MIRAK,Marie Louise', 'A reader in electrotechics and electronics', NULL, NULL, NULL, NULL, NULL),
(102, '813.54 CAP', '12888', NULL, 'CAPOTE, Truman', 'A sangue freddo', NULL, NULL, NULL, NULL, NULL),
(103, '004 SAL', '13698', NULL, 'Caserta, Antonio', 'A scuola con l\'elaboratore', NULL, NULL, NULL, NULL, NULL),
(104, '004 SAL', '13698', NULL, 'SALARIS BAVA, Micaela', 'A scuola con l\'elaboratore', NULL, NULL, NULL, NULL, NULL),
(105, '370.1 TOL', 'VOL', NULL, 'MOROSOV, Vassily Sfiepanovic', 'A scuola d Tolstoy', NULL, NULL, NULL, NULL, NULL),
(106, '370.1 TOL', 'VOL', NULL, 'VOLPICELLI, Luigi', 'A scuola d Tolstoy', NULL, NULL, NULL, NULL, NULL),
(107, '942 TRE', '16920', NULL, 'TREVELYAN, George Macaulay', 'A shortened history of England', NULL, NULL, NULL, NULL, NULL),
(108, '621.3822 MAR', '16184', NULL, 'Ewers, Gillian', 'A simple approach to digital signal processing', NULL, NULL, NULL, NULL, NULL),
(109, '621.3822 MAR', '16184', NULL, 'MARVEN, Craig', 'A simple approach to digital signal processing', NULL, NULL, NULL, NULL, NULL),
(110, '545 VOG', '401', NULL, 'VOGEL, Arthur I.', 'A text-book of quantitative inorganic analysis including elementary instrum', NULL, NULL, NULL, NULL, NULL),
(111, '669.07 CAL', '4607', NULL, 'BERTET, F.', 'A workbook in technical English Metallurgica', NULL, NULL, NULL, NULL, NULL),
(112, '669.07 CAL', '4607', NULL, 'GALASSO, G.', 'A workbook in technical English Metallurgica', NULL, NULL, NULL, NULL, NULL),
(113, '669.07 CAL', '4607', NULL, 'GALASSO, Maria Grazia', 'A workbook in technical English Metallurgica', NULL, NULL, NULL, NULL, NULL),
(114, '669.07 CAL', '4607', NULL, 'MIRAK, Muriel Louise', 'A workbook in technical English Metallurgica', NULL, NULL, NULL, NULL, NULL),
(115, '916.04 PIO', '2139*', NULL, 'PIOVAN, Filippo Carlo', 'Abba\' Magal', NULL, NULL, NULL, NULL, NULL),
(116, '371.261 AND', '3149', NULL, 'ANDREANI DENTICI, Ornella', 'Abilita` mentale e rendimento scolastico', NULL, NULL, NULL, NULL, NULL),
(117, '813.54 ASI', '13018', NULL, 'ASIMOV, Isaac', 'Abissi d\'acciaio', NULL, NULL, NULL, NULL, NULL),
(118, '973.7 LUD', '349*', NULL, 'LUDWIG, Emil', 'Abramo Lincoln', NULL, NULL, NULL, NULL, NULL),
(119, '914.571 ABR', '18031', NULL, 'ABRUZZO E MOLISE', 'Abruzzo e Molise', NULL, NULL, NULL, NULL, NULL),
(120, '539.73 WIL', '14778', NULL, 'Littauer, Raphael', 'Acceleratori di particelle', NULL, NULL, NULL, NULL, NULL),
(121, '539.73 WIL', '14778', NULL, 'WILSON, Robert R.', 'Acceleratori di particelle', NULL, NULL, NULL, NULL, NULL),
(122, '005.7565 ACC', 'BAR', NULL, 'BAR, Jurgen', 'Access', NULL, NULL, NULL, NULL, NULL),
(123, '005.7565 ACC', 'BAR', NULL, 'Bauder, Irene', 'Access', NULL, NULL, NULL, NULL, NULL),
(124, '005.7565 ACC', 'FOR', NULL, 'FORTE, Stephen', 'Access 2000', NULL, NULL, NULL, NULL, NULL),
(125, '005.7565 ACC', 'FOR', NULL, 'Howe, Tom', 'Access 2000', NULL, NULL, NULL, NULL, NULL),
(126, '005.7565 ACC', 'FOR', NULL, 'Ralston, James', 'Access 2000', NULL, NULL, NULL, NULL, NULL),
(127, '669.142 COG', '6194', NULL, 'COGNE', 'Acciai speciali', NULL, NULL, NULL, NULL, NULL),
(128, '669.142 COG', '6195', NULL, 'COGNE', 'Acciai speciali', NULL, NULL, NULL, NULL, NULL),
(129, '669.142 COG', '6196', NULL, 'COGNE', 'Acciai speciali', NULL, NULL, NULL, NULL, NULL),
(130, '621.31242 PIC', '4088#', NULL, 'BARNI, Edoardo', 'Accumulatori', NULL, NULL, NULL, NULL, NULL),
(131, '621.31242 PIC', '4088#', NULL, 'PICO, Vittorio', 'Accumulatori', NULL, NULL, NULL, NULL, NULL),
(132, '621.312424 QUE', '3669*', NULL, 'QUERQUES, Antonio', 'Accumulatori elettrici acidi ed alcalini', NULL, NULL, NULL, NULL, NULL),
(133, '551.46 STO', '2157#', NULL, 'MALLADRA, Alessandro', 'Acqua ed aria ossia la purezza del mare e dell\'atmosfera fin dai primordi d', NULL, NULL, NULL, NULL, NULL),
(134, '551.46 STO', '2157#', NULL, 'STOPPANI, Antonio', 'Acqua ed aria ossia la purezza del mare e dell\'atmosfera fin dai primordi d', NULL, NULL, NULL, NULL, NULL),
(135, '005.75 MIT', '17740', NULL, 'Atkinson, James', 'Active server pages 3.0', NULL, NULL, NULL, NULL, NULL),
(136, '005.75 MIT', '17740', NULL, 'MITCHELL, Scott', 'Active server pages 3.0', NULL, NULL, NULL, NULL, NULL),
(137, '534.9 SET', '2639', NULL, 'SETO, William W.', 'Acustica', NULL, NULL, NULL, NULL, NULL),
(138, '330.153 BAR', '506', NULL, 'BARUCCI, Piero', 'Adam Smith e la nascita della scienza economica', NULL, NULL, NULL, NULL, NULL),
(139, '371.26 MEL', '17993*', NULL, 'MELCHIORI, Roberto', 'ADAS', NULL, NULL, NULL, NULL, NULL),
(140, '853.914 SOL', '12384', NULL, 'SOLDATI, Mario', 'Addio diletta Amelia', NULL, NULL, NULL, NULL, NULL),
(141, '696 IMP', '17315', NULL, '', 'Adeguamenti DPR 218/98', NULL, NULL, NULL, NULL, NULL),
(142, '005.72 VAL', '18362', NULL, 'VALLI, Alessandro', 'Adobe Acrobat 6.0', NULL, NULL, NULL, NULL, NULL),
(143, '843.6 CON', '1208', NULL, 'CONSTANT DE REBECQUE, Benjamin', 'Adolfo', NULL, NULL, NULL, NULL, NULL),
(144, '519.5 FRA', '16109', NULL, 'FRANCIS, A.', 'Advanced level statistics', NULL, NULL, NULL, NULL, NULL),
(145, '533.62 DIG', '4959*', NULL, 'DIGRANDI, G.', 'Aerodinamica', NULL, NULL, NULL, NULL, NULL),
(146, '533.62 DIG', '4959*', NULL, 'PIANTA\', P.G.', 'Aerodinamica', NULL, NULL, NULL, NULL, NULL),
(147, '629.1323 PIS', '5303*', NULL, 'PISTOLESI, Enrico', 'Aerodinamica', NULL, NULL, NULL, NULL, NULL),
(148, '629.1323 RIC', '16953', NULL, 'RICCIARDI, Andrea', 'Aerodinamica subsonica e supersonica', NULL, NULL, NULL, NULL, NULL),
(149, '621.92 GIU', '4981', NULL, 'GIUSTI, Francesco', 'Affilatura utensili monotaglienti', NULL, NULL, NULL, NULL, NULL),
(150, '823.8 WIL', '12745', NULL, 'Falzon, Alex R.', 'Aforismi di Oscar Wilde', NULL, NULL, NULL, NULL, NULL),
(151, '823.8 WIL', '12745', NULL, 'WILDE, Oscar', 'Aforismi di Oscar Wilde', NULL, NULL, NULL, NULL, NULL),
(152, '822.33 SHA', 'BRO', NULL, 'Brown, Carl William', 'Aforismi geniali di William Shakespeare', NULL, NULL, NULL, NULL, NULL),
(153, '822.33 SHA', 'BRO', NULL, 'SHAKESPEARE, William', 'Aforismi geniali di William Shakespeare', NULL, NULL, NULL, NULL, NULL),
(154, '398.95 AFO', '17951', NULL, 'AFORISMI URLATI', 'Aforismi urlati', NULL, NULL, NULL, NULL, NULL),
(155, '398.95 AFO', '17951', NULL, 'Antolisei, Anna', 'Aforismi urlati', NULL, NULL, NULL, NULL, NULL),
(156, '960 DAL', '18130', NULL, 'D\'ALMEIDA-TOPOR, Helene', 'Africa', NULL, NULL, NULL, NULL, NULL),
(157, '882.01 AES', '12253', NULL, '', 'Agamennone', NULL, NULL, NULL, NULL, NULL),
(158, '337.142 PAL', '5643', NULL, 'BULLIO, Pietro', 'Agenda europea 1963', NULL, NULL, NULL, NULL, NULL),
(159, '337.142 PAL', '5643', NULL, 'MAGGIORE, Mariano', 'Agenda europea 1963', NULL, NULL, NULL, NULL, NULL),
(160, '337.142 PAL', '5643', NULL, 'PALUMBO, Marcello', 'Agenda europea 1963', NULL, NULL, NULL, NULL, NULL),
(161, '004.678 LES', '17036', NULL, 'LESNICK, Leslie', 'Agenti di ricerca', NULL, NULL, NULL, NULL, NULL),
(162, '004.678 LES', '17036', NULL, 'Moore, Ralph', 'Agenti di ricerca', NULL, NULL, NULL, NULL, NULL),
(163, '371.120945 SAC', '17284', NULL, 'SACCHI, Gian Carlo', 'Aggiornamento', NULL, NULL, NULL, NULL, NULL),
(164, '371 AGG', '15037', NULL, 'AGGIORNAMENTO SPERIMENTAZIONE RICERCA EDUCATIVA', 'Aggiornamento sperimentazione ricerca educativa', NULL, NULL, NULL, NULL, NULL),
(165, '004.165 PCI', 'WYA', NULL, 'Peppler-Adams, Amy', 'Aggiornare il personal computer', NULL, NULL, NULL, NULL, NULL),
(166, '004.165 PCI', 'WYA', NULL, 'WYATT, Allen L.', 'Aggiornare il personal computer', NULL, NULL, NULL, NULL, NULL),
(167, '671 INA', '4134', NULL, 'I.N.A.P.L.I.', 'Aggiustatori tecnologia', NULL, NULL, NULL, NULL, NULL),
(168, '853.914 MAN', '1584', NULL, 'MANGANELLI, Giorgio', 'Agli dei ulteriori', NULL, NULL, NULL, NULL, NULL),
(169, '853.914 MOR', '16421', NULL, 'MORAVIA, Alberto', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(170, '853.914 MOR', '1675', NULL, 'MORAVIA, Alberto', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(171, '853.914 MOR', '17500', NULL, 'Dego, Giuliano', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(172, '853.914 MOR', '17500', NULL, 'MORAVIA, Alberto', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(173, '853.914 MOR', '17500', NULL, 'Romano, Eileen', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(174, '853.914 MOR', '17500', NULL, 'Tornitore, Tonino', 'Agostino', NULL, NULL, NULL, NULL, NULL),
(175, '270.2 CRE', '13177', NULL, 'CREMONA, Carlo', 'Agostino d\'Ippona', NULL, NULL, NULL, NULL, NULL),
(176, '891.7344 SOL', '1107', NULL, 'SOLZENICYN, Aleksandr Isaevic', 'Agosto 1914', NULL, NULL, NULL, NULL, NULL),
(177, '891.7344 SOL', '1107', NULL, 'Zveteremich, Pietro', 'Agosto 1914', NULL, NULL, NULL, NULL, NULL),
(178, '630.9 CHE', '518', NULL, 'CHEROBINI, Giovanni', 'Agricoltura e societa\' rurale nel Medioevo', NULL, NULL, NULL, NULL, NULL),
(179, '616.9792 AID', '14021', NULL, 'AIDS', 'AIDS', NULL, NULL, NULL, NULL, NULL),
(180, '616.9792 AID', '14021', NULL, 'Lombardia', 'AIDS', NULL, NULL, NULL, NULL, NULL),
(181, '616.9792 PAS', '13062', NULL, 'PASSETTI, Giuseppe', 'AIDS', NULL, NULL, NULL, NULL, NULL),
(182, '853.8 ORI*', '', NULL, 'MARIANO, Francesco', 'Al di la\'', NULL, NULL, NULL, NULL, NULL),
(183, '853.8 ORI*', '', NULL, 'ORIANI, Alfredo', 'Al di la\'', NULL, NULL, NULL, NULL, NULL),
(184, '523.1 MAF', '12605', NULL, 'MAFFEI, Dino', 'Al di la\' della luna', NULL, NULL, NULL, NULL, NULL),
(185, '964.03 LOT', '2161*', NULL, 'LOTI, Pierre', 'Al Marocco', NULL, NULL, NULL, NULL, NULL),
(186, '964.03 LOT', '2161*', NULL, 'RODA, Lina', 'Al Marocco', NULL, NULL, NULL, NULL, NULL),
(187, '582.16094526 CR', '14931*', NULL, 'CRESCINI, Arturo', 'Alberi a Brescia', NULL, NULL, NULL, NULL, NULL),
(188, '582.16094526 CR', '14931*', NULL, 'Tagliaferri, Filippo', 'Alberi a Brescia', NULL, NULL, NULL, NULL, NULL),
(189, '582.16094526 PR', '17335', NULL, 'PROVINCIA DI BRESCIA', 'Alberi monumentali della provincia di Brescia', NULL, NULL, NULL, NULL, NULL),
(190, '945.05092 VOC', '372*', NULL, 'VOCINO, Michele', 'Alberigo da Barbiano', NULL, NULL, NULL, NULL, NULL),
(191, '530.11 EIN', 'INF', NULL, 'INFELD, Leopold', 'Albert Einstein', NULL, NULL, NULL, NULL, NULL),
(192, '530.11 EIN', 'INF', NULL, 'INFELD, Leopold', 'Albert Einstein', NULL, NULL, NULL, NULL, NULL),
(193, '530.11 EIN', 'INF', NULL, 'INFELD, Leopold', 'Albert Einstein', NULL, NULL, NULL, NULL, NULL),
(194, '170 ALB', '16187*', NULL, 'ALBERTANO da Brescia', 'Albertani moralissimi opus de loquendi ac tacendi modo ...', NULL, NULL, NULL, NULL, NULL),
(195, '853.914 MOR', 'LON', NULL, 'LONGOBARDI, Fulvio', 'Alberto Moravia', NULL, NULL, NULL, NULL, NULL),
(196, '945.260927 TRE', '957', NULL, 'BRAGAGLIO, Claudio', 'Alberto Trebeschi', NULL, NULL, NULL, NULL, NULL),
(197, '945.260927 TRE', '957', NULL, 'CORSINI, Paolo', 'Alberto Trebeschi', NULL, NULL, NULL, NULL, NULL),
(198, '945.260927 TRE', '957', NULL, 'TREBESCHI, Alberto', 'Alberto Trebeschi', NULL, NULL, NULL, NULL, NULL),
(199, '540.112 ARO', '16850', NULL, 'AROMATICO, Andrea', 'Alchimia', NULL, NULL, NULL, NULL, NULL),
(200, '540 OLM', '11293', NULL, 'OLMI, Fabio', 'Alchimia 2000', NULL, NULL, NULL, NULL, NULL),
(201, '540 OLM', '11293', NULL, 'Pera, Tiziano', 'Alchimia 2000', NULL, NULL, NULL, NULL, NULL),
(202, '621.3815 BOE', '5923*', NULL, 'BOELLA, Mario', 'Alcune note sui conduttori, semiconduttori dielettrici', NULL, NULL, NULL, NULL, NULL),
(203, '526.1 SAC', '5962#', NULL, 'SACCHI, Giuseppe', 'Alcuni strumenti della geodesia', NULL, NULL, NULL, NULL, NULL),
(204, '851.912 DAN', '13022', NULL, 'D\'ANNUNZIO, Gabriele', 'Alcyone', NULL, NULL, NULL, NULL, NULL),
(205, '945.091 SEC', '482', NULL, 'SECCHIA, Pietro', 'Aldo dice: 26 x 1', NULL, NULL, NULL, NULL, NULL),
(206, '759.5 MOR', '6588#', NULL, 'MORETTO', 'Alessandro Bonvicino soprannominato il Moretto', NULL, NULL, NULL, NULL, NULL),
(207, '759.526 ALE', '15291', NULL, 'ALESSANDRO BONVICINO, IL MORETTO', 'Alessandro Bonvicino, il Moretto', NULL, NULL, NULL, NULL, NULL),
(208, '947.072 PAL', '341*', NULL, 'PALEOLOGUE, Maurice', 'Alessandro I', NULL, NULL, NULL, NULL, NULL),
(209, '938.07092 RAD', '324', NULL, 'RADET, George', 'Alessandro il Grande', NULL, NULL, NULL, NULL, NULL),
(210, '938.07092 BRI', '16784', NULL, 'BRIANT, Pierre', 'Alessandro Magno', NULL, NULL, NULL, NULL, NULL),
(211, '853.7 MAN', 'CAR', NULL, 'CARDUCCI, Giosue\'', 'Alessandro Manzoni', NULL, NULL, NULL, NULL, NULL),
(212, '853.914 MAN', '18270', NULL, 'MANFREDI, Valerio Massimo', 'Alexandros', NULL, NULL, NULL, NULL, NULL),
(213, '512.904 BIS', '5069', NULL, 'BISCONCINI, Giulio', 'Algebra', NULL, NULL, NULL, NULL, NULL),
(214, '512 ZWI', '6288', NULL, 'ZWIRNER, Giuseppe', 'Algebra', NULL, NULL, NULL, NULL, NULL),
(215, '512.9434 ORE', '', NULL, 'ORECCHIA, Gioacchino', 'Algebra delle matrici', NULL, NULL, NULL, NULL, NULL),
(216, '512.9434 ORE', '', NULL, 'Spataro, Salvatore', 'Algebra delle matrici', NULL, NULL, NULL, NULL, NULL),
(217, '511.324076 MEN', '3559', NULL, 'MENDELSON, Elliott', 'Algebra di Boole e circuiti di commutazione', NULL, NULL, NULL, NULL, NULL),
(218, '005.262 PAS', 'DEA', NULL, 'DE AMICI, Mirella', 'Algebra e laboratorio di informatica', NULL, NULL, NULL, NULL, NULL),
(219, '512.9042 BOA', '4924', NULL, 'BOARI, Federico', 'Algebra elementare', NULL, NULL, NULL, NULL, NULL),
(220, '512 DEM', '', NULL, 'DE MARCO, Abele', 'Algebra elementare', NULL, NULL, NULL, NULL, NULL),
(221, '511 NIS', '', NULL, 'NISINI, Pompeo', 'Algebra elementi di analitica e di analisi matematica', NULL, NULL, NULL, NULL, NULL),
(222, '511 NIS', '', NULL, 'NISINI, Pompeo', 'Algebra elementi di analitica e di analisi matematica', NULL, NULL, NULL, NULL, NULL),
(223, '512.5 LIP', '12134', NULL, 'LIPSCHUTZ, Seymour', 'Algebra lineare', NULL, NULL, NULL, NULL, NULL),
(224, '512.120285 MAN', '15479', NULL, 'MANARA, Maria Piera', 'Algebra lineare e geometria con derive', NULL, NULL, NULL, NULL, NULL),
(225, '512.120285 MAN', '15479', NULL, 'Perotti, Alessandro', 'Algebra lineare e geometria con derive', NULL, NULL, NULL, NULL, NULL),
(226, '512 AYR', '12130', NULL, 'AYRES, Frank, jr.', 'Algebra moderna', NULL, NULL, NULL, NULL, NULL),
(227, '512 AYR', '3590', NULL, 'AYRES, Frank, jr.', 'Algebra moderna', NULL, NULL, NULL, NULL, NULL),
(228, '512 ITT', '4690', NULL, 'ITTA, Emanuele', 'Algebra moderna', NULL, NULL, NULL, NULL, NULL),
(229, '512 ITT', '5224', NULL, 'ITTA, Emanuele', 'Algebra moderna', NULL, NULL, NULL, NULL, NULL),
(230, '005.113 WIR', '12078', NULL, 'WIRTH, Niklaus', 'Algorithms and data structures', NULL, NULL, NULL, NULL, NULL),
(231, '005.1 DRO', '13975', NULL, 'DROMEY, R. Geoff', 'Algoritmi fondamentali', NULL, NULL, NULL, NULL, NULL),
(232, '005.113 WIR', '12079', NULL, 'WIRTH, Niklaus', 'Algoritms+data structure=programs', NULL, NULL, NULL, NULL, NULL),
(233, '629.13432 BEN', '15234', NULL, 'BENZING, Enrico', 'Ali', NULL, NULL, NULL, NULL, NULL),
(234, '530.12 GIL', '17013', NULL, 'GILMORE, Gilbert', 'Alice nel paese dei quanti', NULL, NULL, NULL, NULL, NULL),
(235, '150.195 MON', '3371', NULL, 'MONEY-KYRLE, R.E.', 'All\' origine della nostra immagine del mondo', NULL, NULL, NULL, NULL, NULL),
(236, '940.43092 CRE', '401*', NULL, 'CRESPI, Silvio', 'Alla difesa d\'Italia in guerra e a Versailles', NULL, NULL, NULL, NULL, NULL),
(237, '809.89282 BOE', '16880', NULL, 'BOERO, Pino', 'Alla frontiera', NULL, NULL, NULL, NULL, NULL),
(238, '910.09113 ALB', '2735', NULL, 'ALBERTINI, Gianni', 'Alla ricerca dei naufraghi dell\'Italia', NULL, NULL, NULL, NULL, NULL),
(239, '843.912 PRO', '', NULL, 'PROUST, Marcel', 'Alla ricerca del tempo perduto', NULL, NULL, NULL, NULL, NULL),
(240, '530.142 CRE', '13860', NULL, 'CREASE, Robert P.', 'Alla ricerca dell\'uno', NULL, NULL, NULL, NULL, NULL),
(241, '530.142 CRE', '13860', NULL, 'Mann, Charles C.', 'Alla ricerca dell\'uno', NULL, NULL, NULL, NULL, NULL),
(242, '152.4 DAM', '18391', NULL, 'DAMASIO, Antonio', 'Alla ricerca di Spinoza', NULL, NULL, NULL, NULL, NULL),
(243, '004.678 DER', '16139', NULL, 'DERN, Daniel P.', 'Alla scoperta di Internet', NULL, NULL, NULL, NULL, NULL),
(244, '551.514 CRA', '3630', NULL, 'CRAIG, Richard A.', 'Alla soglia dello spazio', NULL, NULL, NULL, NULL, NULL),
(245, '539.09 KUH', '14270', NULL, 'KUHN, Thomas S.', 'Alle origini della fisica contemporanea', NULL, NULL, NULL, NULL, NULL),
(246, '530.09 HEI', '14271', NULL, 'HEILBRON, John L.', 'Alle origini della fisica moderna', NULL, NULL, NULL, NULL, NULL),
(247, '511.3 MAZ', '3480', NULL, 'ENRIQUES, F.', 'Alle origini della logica matematica', NULL, NULL, NULL, NULL, NULL),
(248, '511.3 MAZ', '3480', NULL, 'MAZZACUA, Giorgio', 'Alle origini della logica matematica', NULL, NULL, NULL, NULL, NULL),
(249, '327.45 RUM', '667', NULL, 'RUMI, Giorgio', 'Alle origini della politica estera fascista (1918-1923)', NULL, NULL, NULL, NULL, NULL),
(250, '945.092 ALL', '17152', NULL, 'ALLE ORIGINI DELLA REPUBBLICA', 'Alle origini della Repubblica', NULL, NULL, NULL, NULL, NULL),
(251, '945.091 PAV', '16097', NULL, 'PAVONE, Claudio', 'Alle origini della repubblica', NULL, NULL, NULL, NULL, NULL),
(252, '338.094526 FAC', '953', NULL, 'DELLA PERUTA, Franco', 'Alle origini di Brescia industriale', NULL, NULL, NULL, NULL, NULL),
(253, '338.094526 FAC', '953', NULL, 'FACCHINI, Francesco', 'Alle origini di Brescia industriale', NULL, NULL, NULL, NULL, NULL),
(254, '940.1 CAR', '2653', NULL, 'CARDINI, Franco', 'Alle radici della Cavalleria medievale', NULL, NULL, NULL, NULL, NULL),
(255, '853.914 PRA', '12356', NULL, 'PRATOLINI, Vasco', 'Allegoria e derisione', NULL, NULL, NULL, NULL, NULL),
(256, '366.1094526 DAN', '16211', NULL, 'DANESI, Silvano', 'All\'oriente di Brescia', NULL, NULL, NULL, NULL, NULL),
(257, '852.912 PIR', '5550', NULL, '', 'All\'uscita', NULL, NULL, NULL, NULL, NULL),
(258, '808.8 ALM', '2660', NULL, 'ALMANACCO PER IERI E PER OGGI', 'Almanacco per ieri e per oggi', NULL, NULL, NULL, NULL, NULL),
(259, '808.8 ALM', '2660', NULL, 'CORSARO, Antonio', 'Almanacco per ieri e per oggi', NULL, NULL, NULL, NULL, NULL),
(260, '808.8 ALM', '2660', NULL, 'GIANNI, Angelo', 'Almanacco per ieri e per oggi', NULL, NULL, NULL, NULL, NULL),
(261, '808.8 ALM', '2660', NULL, 'RAFFAELLI, Maria', 'Almanacco per ieri e per oggi', NULL, NULL, NULL, NULL, NULL),
(262, '914.57104 AGO', '3857*', NULL, 'AGOSTINONI, Emidio', 'Altipiani d\'Abruzzo', NULL, NULL, NULL, NULL, NULL),
(263, '960 ALT', '17959', NULL, 'ALTRE AFRICHE', 'Altre afriche', NULL, NULL, NULL, NULL, NULL),
(264, '940.4 CAD', '95*', NULL, 'CADORNA, Luigi', 'Altre pagine sulla grande guerra', NULL, NULL, NULL, NULL, NULL),
(265, '853.914 BUS', '16961', NULL, 'BUSI, Aldo', 'Altri abusi', NULL, NULL, NULL, NULL, NULL),
(266, '853.914 TON', '17057', NULL, 'TONDELLI, Pier Vittorio', 'Altri libertini', NULL, NULL, NULL, NULL, NULL),
(267, '833.912 HES', '12330', NULL, 'HESSE, Hermann', 'Altri romanzi e poesie di Hesse', NULL, NULL, NULL, NULL, NULL),
(268, '324.245075092 D', '689', NULL, 'DE CLEMENTI, Andreina', 'Amadeo Bordiga', NULL, NULL, NULL, NULL, NULL),
(269, '981.06 GHE', '16792', NULL, 'GHEERBRANT, Alain', 'Amazzonia', NULL, NULL, NULL, NULL, NULL),
(270, '853.914 CUL', '17982', NULL, 'CULICCHIA, Giuseppe', 'Ambarabà', NULL, NULL, NULL, NULL, NULL),
(271, '344.45047 AMB', '17838', NULL, 'AMBIENTE DI LAVORO', 'Ambiente di lavoro', NULL, NULL, NULL, NULL, NULL),
(272, '344.45047 AMB', '17838', NULL, 'Oddone, Ivan', 'Ambiente di lavoro', NULL, NULL, NULL, NULL, NULL),
(273, '370.1934 SPR', '3374', NULL, 'FLORES D\'ARCAIS, Giuseppe', 'Ambiente e cultura', NULL, NULL, NULL, NULL, NULL),
(274, '370.1934 SPR', '3374', NULL, 'SPRANGER, Eduard', 'Ambiente e cultura', NULL, NULL, NULL, NULL, NULL),
(275, '370.19 COE', '3104', NULL, 'COEN, Renato', 'Ambiente e educazione', NULL, NULL, NULL, NULL, NULL),
(276, '304.2 DEB', '12609', NULL, 'DEBESSE-ARVISET, Marie Louis', 'Ambiente ecologico e didattica', NULL, NULL, NULL, NULL, NULL),
(277, '363.700945 AMB', '16313', NULL, 'AMBIENTE ITALIA 1996', 'Ambiente Italia 1996', NULL, NULL, NULL, NULL, NULL),
(278, '363.700945 AMB', '16313', NULL, 'Istituto di ricerche Ambiente Italia', 'Ambiente Italia 1996', NULL, NULL, NULL, NULL, NULL),
(279, '551 AMB', '18090', NULL, 'AMBIENTE TERRA', 'Ambiente terra', NULL, NULL, NULL, NULL, NULL),
(280, '551 AMB', '18090', NULL, 'Ippolito, Felice', 'Ambiente terra', NULL, NULL, NULL, NULL, NULL),
(281, '005.444 UNI', 'MAT', NULL, 'MATTEUZZI, Maurizio', 'Ambiente Unix', NULL, NULL, NULL, NULL, NULL),
(282, '005.444 UNI', 'MAT', NULL, 'Pelizzardi, Paolo', 'Ambiente Unix', NULL, NULL, NULL, NULL, NULL),
(283, '621.3 IMP', '16524', NULL, '', 'Ambienti speciali', NULL, NULL, NULL, NULL, NULL),
(284, '833.912 KAF', '16444', NULL, 'KAFKA, Franz', 'America', NULL, NULL, NULL, NULL, NULL),
(285, '917.304 RUF', '6794*', NULL, 'BONTEMPI, Piero', 'America America: minuto per minuto un viaggio di istruzione', NULL, NULL, NULL, NULL, NULL),
(286, '917.304 RUF', '6794*', NULL, 'RUFFONI, Ivano', 'America America: minuto per minuto un viaggio di istruzione', NULL, NULL, NULL, NULL, NULL),
(287, '917.304 RUF', '6794*', NULL, 'UBERTI, Realdo', 'America America: minuto per minuto un viaggio di istruzione', NULL, NULL, NULL, NULL, NULL),
(288, '973.92 LUC', '2898', NULL, 'LUCENTINI, Mauro', 'America che cambia', NULL, NULL, NULL, NULL, NULL),
(289, '980 CAR', '2631', NULL, 'CARGNONI, Giacinto', 'America latina: l\'umanita` alla prova', NULL, NULL, NULL, NULL, NULL),
(290, '980.03 GUN', '2328', NULL, 'GUNDER FRANK, Andre', 'America Latina: sottosviluppo o rivoluzione', NULL, NULL, NULL, NULL, NULL),
(291, '621.3 CAR', '4474', NULL, 'AMERICAN ELECTRICIANS\' HANDBOOK', 'American electricians\' handbook', NULL, NULL, NULL, NULL, NULL),
(292, '621.3 CAR', '4474', NULL, 'CARR, Clifford C.', 'American electricians\' handbook', NULL, NULL, NULL, NULL, NULL),
(293, '621.3 CAR', '4474', NULL, 'CROFT, Terrel', 'American electricians\' handbook', NULL, NULL, NULL, NULL, NULL),
(294, '291.09 STO', '18497', NULL, '', 'Americhe - Africa - Oceania', NULL, NULL, NULL, NULL, NULL),
(295, '822.33 SHA', '16408', NULL, 'SHAKESPEARE, William', 'Amleto', NULL, NULL, NULL, NULL, NULL),
(296, '377.1019 ORA', '3162', NULL, 'GALLI, Norberto', 'Amore o costrizione', NULL, NULL, NULL, NULL, NULL),
(297, '377.1019 ORA', '3162', NULL, 'ORAISON, Marc', 'Amore o costrizione', NULL, NULL, NULL, NULL, NULL),
(298, '833.914 BLO', '17140', NULL, 'BLOBEL, Brigitte', 'Amore perverso', NULL, NULL, NULL, NULL, NULL),
(299, '833.914 BLO', '17140', NULL, 'Cinato Kather, Lucia', 'Amore perverso', NULL, NULL, NULL, NULL, NULL),
(300, '853.8 DOS', '15303', NULL, 'DOSSI, Carlo', 'Amori', NULL, NULL, NULL, NULL, NULL);

-- --------------------------------------------------------

--
-- Struttura della tabella `prestito`
--

CREATE TABLE `prestito` (
  `ID` int(10) UNSIGNED NOT NULL,
  `ID_utente` int(11) UNSIGNED NOT NULL,
  `ID_libro` int(11) UNSIGNED NOT NULL,
  `data_prestito` date NOT NULL,
  `data_restituzione` date DEFAULT NULL,
  `proroga` int(11) DEFAULT NULL,
  `scadenza` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `prestito`
--

INSERT INTO `prestito` (`ID`, `ID_utente`, `ID_libro`, `data_prestito`, `data_restituzione`, `proroga`, `scadenza`) VALUES
(1, 1, 4, '2014-03-04', '2014-07-02', NULL, '2014-03-11'),
(2, 1, 5, '2014-06-01', '2014-07-02', NULL, '2014-07-01'),
(3, 1, 7, '2014-07-02', NULL, NULL, '2014-08-01');

-- --------------------------------------------------------

--
-- Struttura della tabella `utente`
--

CREATE TABLE `utente` (
  `cognome` char(64) COLLATE utf8_unicode_ci NOT NULL,
  `nome` char(64) COLLATE utf8_unicode_ci NOT NULL,
  `data_nascita` date NOT NULL,
  `telefono` bigint(20) NOT NULL,
  `email` char(255) COLLATE utf8_unicode_ci NOT NULL,
  `residenza` varchar(255) COLLATE utf8_unicode_ci NOT NULL,
  `classe` char(2) COLLATE utf8_unicode_ci NOT NULL,
  `ID` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dump dei dati per la tabella `utente`
--

INSERT INTO `utente` (`cognome`, `nome`, `data_nascita`, `telefono`, `email`, `residenza`, `classe`, `ID`) VALUES
('Semprini', 'Bindo', '2001-07-01', 3303030, 'bindo@gmail.com', 'Via del Brozzo 13, Brescia', '3W', 1);

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `libro`
--
ALTER TABLE `libro`
  ADD PRIMARY KEY (`ID`);

--
-- Indici per le tabelle `prestito`
--
ALTER TABLE `prestito`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `ID_utente` (`ID_utente`),
  ADD KEY `ID_libro` (`ID_libro`);

--
-- Indici per le tabelle `utente`
--
ALTER TABLE `utente`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `libro`
--
ALTER TABLE `libro`
  MODIFY `ID` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15567;

--
-- AUTO_INCREMENT per la tabella `prestito`
--
ALTER TABLE `prestito`
  MODIFY `ID` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT per la tabella `utente`
--
ALTER TABLE `utente`
  MODIFY `ID` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
