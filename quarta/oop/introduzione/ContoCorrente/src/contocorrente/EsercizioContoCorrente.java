/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contocorrente;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class EsercizioContoCorrente {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ContoCorrente c, b, d;
        c = new ContoCorrente("Gino");
        b = new ContoCorrente("Giorgia");
        System.out.println(c.toString());
        System.out.println(b.toString());
        b.deposita(100);
        System.out.println(b.toString());
        b.deposita(100000);
        b.preleva(50);
        System.out.println(b.toString());
        System.out.println(c.toString());
        d = c;
        c = b;
        System.out.println(b.toString());
        System.out.println(c.toString());
        System.out.println(d.toString());
       
    }
    
}
