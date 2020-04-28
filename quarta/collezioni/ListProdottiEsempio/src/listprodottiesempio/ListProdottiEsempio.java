/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package listprodottiesempio;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

/**
 *
 * @author alex_2
 */
public class ListProdottiEsempio {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Prodotto a = new Prodotto();
        Prodotto b = new Prodotto();
        Prodotto c = new Prodotto();
        List<Prodotto> lista = new LinkedList();
        List<Prodotto> lista2 = new LinkedList();
        
        lista.add(a);
        lista.add(b);
        for (Prodotto p : lista){
            System.out.println(p);
        }
        for (int i = 0; i < 10; i++)
            lista2.add(new Prodotto());
        lista.addAll(lista2);
        System.out.println(lista);
        lista2.remove(0);
        System.out.println(lista);
        System.out.println(lista2);
        
        Prodotto p = lista.get(1);
        if (lista.contains(p))
            System.out.println("SI");
        Prodotto p2 = new Prodotto(p.getCodice(),
            p.getNome(),p.getPrezzo());
        if (lista.contains(p2))
            System.out.println("SI");
        p2.setPrezzo(2);
        lista.remove(p2);
        System.out.println(lista);
        lista.retainAll(lista2);
        System.out.println(lista);
        
        lista.add(1, new Prodotto());
        System.out.println(lista);
        Prodotto prova = lista.get(1);
        System.out.println(prova);
        prova.setCodice("MIOCODICE");
        System.out.println(lista);
        int n = lista.indexOf(prova);
        Prodotto copia = new Prodotto(prova);
        System.out.println(n);
        n = lista.indexOf(copia);
        System.out.println(n);
        copia.setCodice("ALTROCODICE");
        n = lista.indexOf(copia);
        System.out.println(n);
        lista.add(0, new Prodotto());
        n = lista.indexOf(prova);
        System.out.println(n);
    }
}
