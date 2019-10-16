      /Scrivere un programma Assembly che scriva in output il
      /fattoriale di N, con N dato in input
      /dall'utente. Ricordarsi di non inserire numeri troppo grandi
      /(>13) altrimenti il risultato non sarà corretto
      
      INP R0, 2
      MOV R1, #1
      MOV R2, R0
CICLO_ESTERNO:
      MOV R3, #0
CICLO:
      CMP R2, #0
      BEQ FINE
      ADD R3, R3, R1
      SUB R2, R2, #1
      B CICLO
FINE:
      MOV R1, R3
      SUB R0, R0, #1
      MOV R2, R0
      CMP R0, #1
      BGT CICLO_ESTERNO
      OUT R3, 4
      HALT
