/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiolocaldatetime;

import java.time.LocalDate;
import java.time.Month;

/**
 *
 * @author alex_2
 */
public class EsempioLocalDateTime {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        LocalDate l;
        l = LocalDate.of(2019, Month.NOVEMBER, 25);
        System.out.println(l);
        int anno = l.getYear();
        System.out.println("L'anno estratto è " + anno);
        LocalDate d = l.plusMonths(3);
        System.out.println(d);
    }
    
}
