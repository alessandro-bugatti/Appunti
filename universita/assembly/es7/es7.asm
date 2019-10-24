/Scrivere il programma Assembly che scrive nell'area di 
/memoria che parte dalla cella 20 tutti i valori interi 
/compresi tra un numero n1 e un numero n2 inseriti 
/dall'utente. Si può supporre che n1 < n2.
      
      MOV R1, #20
      INP R2, 2
      INP R3, 2
CICLO:
      CMP R2, R3
      BGT FINE
      STR R2, [R1]
      ADD R2, R2, #1
      ADD R1, R1, #1
      B CICLO
FINE:
      HALT
