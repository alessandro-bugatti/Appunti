/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package misura_tempo;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class Misura_tempo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        long inizio, fine;
        inizio = System.currentTimeMillis();
        double somma = 0;
        //Istruzioni da "misurare"
        //Qui ad esempio vengono fatte tante estrazioni di
        //radice quadrata per impiegare un po' di tempo
        //che possa essere misurato
        for(int i = 0; i < 10000000; i++)
            somma += Math.sqrt(i);
        fine = System.currentTimeMillis();
        System.out.println("Tempo impiegato: " + 
                (double)(fine - inizio)/1000.0 + " secondi.");
        
    }
    
}
