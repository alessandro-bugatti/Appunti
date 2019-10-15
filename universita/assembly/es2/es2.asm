/Scrivere il programma Assembly che copia l’area
/di memoria la cui prima parola ha indirizzo 64 e 
/la cui ultima parola ha indirizzo 78 nell’area di
/memoria la cui prima parola ha indirizzo 100.
/R1 indirizzo di inizio dell'intervallo

      MOV R1, #64
      /R2 indirizzo di fine dell'intervallo
      MOV R2, #78
      /R3 indirizzo di inizio dell'area di copia
      MOV R3, #100
CICLO:
      CMP R1, R2
      BGT FINE
      /Mette in R4 il valore letto all'indirizzo contenuto in R1
      LDR R4, [R1]
      /Copia in memoria all'indirizzo contenuto in R3 il valore contenuto in R4
      STR R4, [R3]
      /Sposta alla prossima cella l'indirizzo contenuto in R1
      ADD R1, R1, #1
      /Sposta alla prossima cella l'indirizzo contenuto in R3
      ADD R3, R3, #1
      B CICLO
FINE:
      HALT
