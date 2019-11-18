/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testconversione;

/**
 *
 * @author alex_2
 */
public class TestConversione {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Convertitore c = new Convertitore("Euro", "Dollaro", 0.85);
        Convertitore d = new Convertitore("Sterline", "Euro", 1/0.85);
        //c.setValore(100);
        //d.setValore(200);
        //System.out.println(c.faiConversione());
        //System.out.println(c);
        //System.out.println(d);
        GestioneConversioni manager = new GestioneConversioni();
        manager.add(c);
        manager.add(d);
        System.out.println(manager);
        System.out.println(manager.conosceConversione("Euro", "Sterline"));
        System.out.println(manager.conosceConversione("Euro", "Dollaro"));
        System.out.println(manager.faiConversione("Euro", "Dollaro", 345));
    }
    
}
