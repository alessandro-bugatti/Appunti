/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package letturavaloriconversione;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

/**
 *
 * @author alex_2
 */
public class LetturaValoriConversione {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
        FileReader f;
        f = new FileReader("conversioni.txt");
        BufferedReader fileInput;
        fileInput = new BufferedReader(f);
        String s;
        while ( (s=fileInput.readLine()) != null)
        {
            String valori[];
            valori = s.split(";");
            for (int i = 0; i < valori.length; i++)
                System.out.println(valori[i]);
            double k = Double.parseDouble(valori[2]);
            double qta = 34;
            System.out.println("Converto " + qta + " " +
                    valori[0] + " in " + (qta*k) + " " +
                    valori[1]);
                 
        }
    }
    
}
