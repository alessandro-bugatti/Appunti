/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package es2_liste;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;

/**
 *
 * @author christianuruci
 */
public class Es2_Liste {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ArrayList<String> s;
        s = new ArrayList<String>();
        s.add("Rosso");
        s.add("Arancio");
        s.add("Verde");
        //Ciclo con iteratore
        Iterator<String> i = s.iterator();
        String a = "Ciao";
        while(i.hasNext()){
            a = i.next();
            System.out.println(a);
        }
        //Ciclo con foreach
        for(String b: s)
            System.out.println(b);
        //Ciclo con indice
        for (int j = 0; j < s.size(); j++)
            System.out.println(s.get(j));
        
        LinkedList<Integer> listaInteri;
        listaInteri = new LinkedList<>();
        //Da completare
        for (int k = 0; k < 10000; k++ )
            listaInteri.add(k);
        
        
    }
    
}
