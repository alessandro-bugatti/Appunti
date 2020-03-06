1) elenco degli eventi già svolti, in ordine alfabetico di provincia

SELECT evento.ID, titolo, provincia.nome AS nome_provincia
FROM evento, comune, provincia
WHERE evento.id_comune = comune.ID AND
comune.id_provincia = provincia.ID AND
evento.data < now()
ORDER BY provincia.nome

2) elenco dei membri che non hanno mai inserito un commento

Versione "furba" (accettabile se spiegata in termini di guadagno di efficienza) 
SELECT nome, cognome
FROM utente_registrato
WHERE numero_di_commenti = 0
ORDER BY cognome, nome

Attenzione che queste versioni furbe vengono messe "fuorigioco" da cose come:
elenco dei membri che non hanno mai inserito un commento nel 2019