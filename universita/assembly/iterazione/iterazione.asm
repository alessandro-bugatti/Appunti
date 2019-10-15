/Scrivere il programma Assembly che verifica se il 
/numero naturale che si trova nella cella di 
/memoria 100 è divisibile esattamente per il numero
/che si trova nella cella 101: se è divisibile deve
/scrivere il valore 1 nella cella di memoria 102, 
/altrimenti il valore 2.

      /R1 contiene il valore che si trova in 100
      LDR R1, 100
      /R2 contiene il valore che si trova in 101
      LDR R2, 101
CICLO:
      CMP R1, R2
      BLT FINE
      BEQ FINE
      SUB R1, R1, R2 / R1 = R1 - R2
      B CICLO
FINE:
      /R3 contiene il valore 1
      MOV R3, #1
      /R4 contiene il valore 2
      MOV R4, #2
      /Confronto R1 con R2 per vedere se R1 è divisibile per R2, si può omettere
      CMP R1, R2
      BEQ DIVISIBILE
      STR R4, 102
      B FINE_PROGRAMMA
DIVISIBILE:
      STR R3, 102
FINE_PROGRAMMA:
      HALT
