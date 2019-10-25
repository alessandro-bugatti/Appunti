/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package input;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Locale;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class Input {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Esempio con il BufferedReader
        try {
            // TODO code application logic here
            InputStreamReader in = new InputStreamReader(System.in);
            BufferedReader buf = new BufferedReader(in);
            System.out.println("Inserisci un intero");
            String s = buf.readLine();
            int a = Integer.parseInt(s);
            System.out.println("Il numero inserito per dieci fa: " + a*10 );
            System.out.println("Inserisci un float");
            s = buf.readLine();
            float b = Float.parseFloat(s);
            System.out.println("Il numero inserito diviso tre fa: " + b/3 );
        } catch (IOException ex) {
            Logger.getLogger(Input.class.getName()).log(Level.SEVERE, null, ex);
        } catch (NumberFormatException ex)
        {
            System.out.println("Ahi ahi ahi asinello...");
        }
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Inserisci un intero");
        int c = scan.nextInt();
        System.out.println("Il numero inserito per dieci fa: " + c*10 );
        System.out.println("Inserisci un float");
        float d = scan.nextFloat();
        System.out.println("Il numero inserito diviso tre fa: " + d/3 );
        System.out.println(Locale.getDefault());
        System.out.println("Inserisci una stringa");
        String s = scan.next();
        System.out.println(s);
    }
    
}
