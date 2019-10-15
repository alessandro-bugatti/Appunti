/Scrivere il programma Assembly che inizializza
/un’area (contigua) della memoria centrale con i
/naturali che costituiscono la tabellina del 5, 
/in modo che la prima parola dell’area da
/inizializzare abbia indirizzo 100.
/R1 contiene il valore attuale della tabellina

      MOV R1, #0
      /R2 indirizzo di partenza del nostro intervallo
      MOV R2, #100
      /R3 contatore del ciclo
      MOV R3, #0
CICLO:
      CMP R3, #10
      BEQ FINE
      ADD R1, R1, #5 /R1 = R1 + 5
      STR R1, [R2]
      /Incremento il contatore
      ADD R3, R3, #1
      /Incremento la poszione in memoria
      ADD R2, R2, #1
      B CICLO
FINE:
      HALT
