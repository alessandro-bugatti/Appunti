/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esercizioangolo;

/**
 *
 * @author alex_2
 */
public class EsercizioAngolo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Angolo a = new Angolo(1234, 153, 78);
        Angolo b = new Angolo(56, 13, 45);
        Angolo c = new Angolo(b);
        c.aggiungiGradi(-57);
        c.aggiungiPrimi(1000);
        a.differenzaSecondi(c);
        Angolo somma = b.sommaAngolo(c);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(b.differenzaSecondi(a));
    }
    
}
