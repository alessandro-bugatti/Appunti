/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiolocaldatetime;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
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
        System.out.println(l);
        d = l.plusMonths(30);
        System.out.println(d);
        d = l.plusDays(90);
        System.out.println(d);
        LocalTime t = LocalTime.of(12, 10);
        System.out.println(t);
        t = t.withHour(13);
        System.out.println(t);
        LocalDateTime data = LocalDateTime.of(2019, Month.MARCH, 23, 20, 41);
        System.out.println(data);
        data = LocalDateTime.of(d, t);
        System.out.println(data);
        LocalDateTime oggi = null;//= LocalDateTime.now();
        oggi.getDayOfMonth();
        System.out.println(oggi);
    }
    
    
    
    
    
    
    
    
    
}
