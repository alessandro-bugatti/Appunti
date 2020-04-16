/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlistes1;

import java.util.Iterator;
import java.util.LinkedList;

/**
 *
 * @author alex_2
 */
public class LinkedListEs1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String a = "Ciao";
        LinkedList<String> lista;
        lista = new LinkedList<>();
        
        lista.add(a);
        lista.add("mondo");
        
        System.out.println(lista);
        
        Iterator<String> i = lista.iterator();
        while(i.hasNext()){
            String s = i.next();
            System.out.println(s);
        }
    }
    
}
