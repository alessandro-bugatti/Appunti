/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.oroscopo.views;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.TreeMap;

/**
 *
 * @author Alessandro Bugatti
 */
public class GestoreOroscopo {
    static final ArrayList<String> amore = 
            new ArrayList<>(
                    Arrays.asList("Attenzione al tuo partner",
                    "Grande sintonia",
                    "I litigi sono all'ordine del giorno")
            );
    
    static public String getSegno(LocalDate l)
    {
        String segno = "Acquario";
        //Da completare
        return segno;
    }
    
    static public String getOroscopo()
    {
        String oroscopo = "";
        oroscopo += amore.get((int)(Math.random()*amore.size()));
        
        return oroscopo;
    }
}
