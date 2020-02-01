/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package alberogenericocornacchiari;

/**
 *
 * @author alex_2
 */
public class AlberoGenericoCornacchiari {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Albero a = new Albero();
        a.Inserisci('a', 'a');
        System.out.println(a.size());
        a.Inserisci('a', 'b');
        System.out.println(a.size());
        a.Inserisci('b', 'e');
        System.out.println(a.size());
        a.Inserisci('a', 'c');
        a.Inserisci('a', 'd');
        a.Inserisci('b', 'f');
        a.Inserisci('b', 'g');
        a.Inserisci('c', 'h');
        a.Inserisci('c', 'i');
        a.Inserisci('d', 'l');
        System.out.println("Numero nodi: " + a.size());
        System.out.print("\nVisita anticipata\n");
        a.visitaAnticipata();
        System.out.print("\nVisita differita\n");
        a.visitaDifferita();
        
        System.out.println("Numero nodi versione ricorsiva: " + a.numero_nodi());
        System.out.println("Altezza albero versione ricorsiva: " + a.altezza()
        );
        a.Inserisci('e', 'r');
        System.out.println("Altezza albero versione ricorsiva: " + a.altezza()
        );
    }
    
}
