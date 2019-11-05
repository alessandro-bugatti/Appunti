CREATE TABLE tavolo
(
    ID INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    Numero INT UNSIGNED
);

CREATE TABLE ordine
(
    ID INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    Data_ordine DATE,
    id_tavolo INT UNSIGNED
);

CREATE TABLE pizza
(

);

CREATE TABLE ordine_pizza
(
    ID INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    quantita INT UNSIGNED NOT NULL,
    id_ordine INT UNSIGNED,
    id_pizza INT UNSIGNED
);

INSERT INTO pizza (ID, nome, prezzo) VALUES (null, 
"Pizza margherita", 5.5);

INSERT INTO pizza (nome, prezzo) VALUES 
("Pizza margherita", null);

INSERT INTO pizza VALUES (null, 
"Pizza margherita", 5.5);

SELECT * FROM tavolo;















