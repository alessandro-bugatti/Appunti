/Scrivere il programma Assembly che prende ogni
/intero nell’area di memoria la cui prima parola ha/indirizzo 64 e la cui ultima parola ha indirizzo 
/88 e ne copia il valore a partire dall'area che 
/inizia all'indirizzo 100. Il valore copiato deve 
/essere diminuito di una quantità pari alla 
/posizione del numero da copiare, cioè il primo 
/numero copiato sarà diminuito di 1, il secondo di 
/2, ecc.

      /Indirizzo di inizio dell'intervallo da cui copiare
      MOV R1, #64
      /Indirizzo di fine dell'intervallo da cui copiare
      MOV R2, #88
      /Indirizzo di inizio dell'intervallo in cui copiare
      MOV R3, #100
      /Contatore per la quantità da sottrarre
      MOV R4, #1
CICLO:
      CMP R1, R2
      BGT FINE
      /Carica in un registro una cella di memoria
      LDR R5, [R1]
      /Sottrai una quantità variabile memorizzata in R4
      SUB R5, R5, R4
      /Rimette il valore nella zona in cui copiare
      STR R5, [R3]
      /Incrememta l'indirizzo di inizio
      ADD R1, R1, #1
      /Incrementa l'indirizzo della zona in cui copiare
      ADD R3, R3, #1
      /Incrementa il contatore
      ADD R4, R4, #1
      B CICLO
FINE:
      HALT
