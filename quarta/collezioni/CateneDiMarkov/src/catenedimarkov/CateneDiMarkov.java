/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package catenedimarkov;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class CateneDiMarkov {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
        BufferedReader reader;
        reader = new BufferedReader(new FileReader("diario_di_un_naturalista_darwin.txt"));
        String s;
        List<String> lista;
        lista = new ArrayList<>();
        while ((s = reader.readLine()) != null)
           lista.addAll(Arrays.asList(s.split(" ")));
        System.out.println(lista.size());
        
        HashMap<LinkedList<String>,ArrayList<String>> map = new HashMap<>();
        int i = 0;
        LinkedList<String> prefisso;
        prefisso = new LinkedList<>();
        prefisso.add("\n");
        prefisso.add("\n");     
        while (i < lista.size()){
            ArrayList<String> v= map.get(prefisso);
            if (v == null)
            {
                v = new ArrayList<>();
                map.put(prefisso, v);
            }
            v.add(lista.get(i));
            prefisso = new LinkedList<>(prefisso);
            prefisso.remove(0);
            prefisso.add(lista.get(i));
            i++;
        }
        //System.out.println(map);
        prefisso = new LinkedList<>();
        prefisso.add("sono");
        prefisso.add("stati");
        for (i = 1; i < 1000; i++)
        {
            lista = map.get(prefisso);
            //System.out.print(prefisso);
            //System.out.print("->"  + lista);
            //System.out.println(lista);
            String parola = lista.get((int)(Math.random()*lista.size()));
            if (i%10 == 0)
                System.out.println();
            System.out.print(parola + " ");
            prefisso.remove(0);
            prefisso.add(parola);
        }
            
    }
    
}
