SELECT utente.nome, utente.cognome
FROM utente INNER JOIN noleggio
ON utente.id = noleggio.id_utente
WHERE noleggio.id_bicicletta != :codice
AND MONTH(noleggio.data_noleggio) =
    MONTH(NOW())
    Utente          Noleggia                Bici
    
    1 Bigio         2 12345                 12345
    2 Geppo         3 12345                 23456
    3 Tonia         4 23456
    4 Astinia       
    
    
SELECT COUNT(*) AS noleggi, noleggio.id_stazione
FROM noleggio
WHERE data_noleggio < :data_fine_periodo
AND data_noleggio > :data_inizio_periodo
GROUP BY noleggio.id_stazione



Tabella A
noleggi     id_stazione
34          1
456         2
45          3

SELECT stazione.nome
FROM stazione, A
WHERE stazione.id = A.id_stazione
AND noleggi = (SELECT MAX(noleggi)
                FROM A)


SELECT stazione.nome
FROM stazione, (SELECT COUNT(*) AS noleggi, noleggio.id_stazione
FROM noleggio
WHERE data_noleggio < :data_fine_periodo
AND data_noleggio > :data_inizio_periodo
GROUP BY noleggio.id_stazione) AS A
WHERE stazione.id = A.id_stazione
AND noleggi = (SELECT MAX(noleggi)
                FROM (SELECT COUNT(*) AS noleggi, noleggio.id_stazione
                        FROM noleggio
                        WHERE data_noleggio < :data_fine_periodo
                        AND data_noleggio > :data_inizio_periodo
                        GROUP BY noleggio.id_stazione) AS A
                )





