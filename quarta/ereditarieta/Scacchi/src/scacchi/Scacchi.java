/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package scacchi;

/**
 *
 * @author alex_2
 */
public class Scacchi {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scacchiera scacchiera = new Scacchiera();
        System.out.println(scacchiera.valuta());
        scacchiera.sposta(2, 'a', 3, 'a');
        System.out.println(scacchiera.valuta());
    }
    
}
