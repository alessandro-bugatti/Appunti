Query 1
SELECT autista.nome, autista.cognome,
    macchina.marca, macchina.modello, viaggio.costo
FROM autista, viaggio, macchina
WHERE autista.id = viaggio.id_autista
AND viaggio.id_macchina = macchina.id
AND posti_disponibil > 0
AND partenza = :partenza
AND arrivo = :arrivo
AND data_partenza = :data_partenza
ORDER BY ora_partenza


Query 2
SELECT Viaggio.costo, Viaggio.partenza, Viaggio.arrivo, Autista.nominativo, Autista.telefono, Viaggio.ora_partenza
FROM Passeggero, Prenota, Viaggio, Autista
WHERE Passeggero.id = Prenota.id_passeggero
AND Prenota.id_viaggio = Viaggio.id
AND Viaggio.id_autista = Autista.id
AND Prenota.id = :codice_prenotazione

Query 3
SELECT Passeggero.id, Passeggero.nominativo, AVG(voto) AS voto_medio
FROM Feedback_autista, Passeggero, Prenota
WHERE Passeggero.id = Feedback_autista.id_passeggero
AND Passeggero.id = Prenota.id_passeggero
AND Prenota.id_viaggio = :codice_viaggio
GROUP BY Passeggero.id
HAVING voto_medio >  :voto_scelto
ORDER voto_medio DESC
 







