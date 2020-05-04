/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mappe;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/**
 *
 * @author alex_2
 */
public class Mappe {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Map<String, Prodotto> m;
        m = new HashMap<>();
        Prodotto p;
        p = new Prodotto();
        String codice = p.getCodice();
        m.put(p.getCodice(), p);
        System.out.println(m);
        p = new Prodotto();
        m.put(p.getCodice(), p);
        System.out.println(m.get(codice));
        Set<String> chiavi = m.keySet();
        for (String s: chiavi)
            System.out.println(s);
        Collection<Prodotto> prodotti = 
                m.values();
        for (Prodotto pr: prodotti)
            System.out.println(pr);
        p = new Prodotto();
        m.put(p.getCodice(), p);
        for (Prodotto pr: prodotti)
            System.out.println(pr);
        
    }
    
}
