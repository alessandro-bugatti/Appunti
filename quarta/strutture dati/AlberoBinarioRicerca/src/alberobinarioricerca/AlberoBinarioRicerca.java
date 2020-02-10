/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package alberobinarioricerca;

/**
 *
 * @author alex_2
 */
public class AlberoBinarioRicerca {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Albero a = new Albero();
        a.inserisci(14);
        a.inserisci(18);
        a.inserisci(4);
        a.inserisci(15);
        a.inserisci(27);
        a.inserisci(8);
        System.out.println(a.ricerca(8));
        System.out.println(a.ricerca(19));
        a.visitaSimmetrica();
    }
    
}
