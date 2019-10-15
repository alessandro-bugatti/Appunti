/Scrivere il programma Assembly che legge 
/due numeri da input, ne fa il prodotto e 
/lo stampa in output.
/Voglio fare c = a*b come c = a+a+...+a per b volte

      /Leggo il valore di a
      INP R1, 2
      /Leggo il valore di b che agirà come contatore del ciclo
      INP R2, 2
      /Inizializzo c a 0
      MOV R3, #0
CICLO:
      CMP R2, #0
      BEQ STAMPA
      ADD R3, R3, R1
      SUB R2, R2, #1
      B CICLO
STAMPA:
      OUT R3, 4
      HALT
