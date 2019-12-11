/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simulazionedistributore;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author alex_2
 */
public class SimulazioneDistributore {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        
        Distributore d;
        
        //Deserializzazione
        try{
            FileInputStream f = new FileInputStream("data.bin");
            ObjectInputStream inObj = new ObjectInputStream(f);
            d = (Distributore)inObj.readObject();
        }catch(FileNotFoundException ex){
            d = new Distributore(3, 4);
        }
        catch (ClassNotFoundException ex) {
            d = new Distributore(3, 4);
            //Logger.getLogger(SimulazioneDistributore.class.getName()).log(Level.SEVERE, null, ex);
        }
        //Cerca di caricare le merendine dal file ricarica.txt
        BufferedReader br;
        try {
            br = new BufferedReader(new FileReader("ricarica.txt"));
            String s;
            while((s=br.readLine()) != null){
                String valori[];
                valori = s.split(";");
                float costo = Float.parseFloat(valori[1]);
                int qta = Integer.parseInt(valori[2]);
                String nome = valori[0];
                d.inserisciFila(new FilaMerendine(nome, costo, qta));     
            }
        } catch (FileNotFoundException ex) {
            System.out.println("File non presente");
            //Logger.getLogger(SimulazioneDistributore.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        //Inserisce una merendina di esempio
        d.inserisciFila(new FilaMerendine ("Croccantelle", 0.9F, 10), 
                2, 2);
        
        //Simula l'acquisto di N merendine dall fila
        //0, 0
        for (int i = 0; i < 12; i++)
            try {
                d.compraMerendina(0, 0);
            } catch (FilaVuota ex) {
                System.out.println("Sono finite le merendine: " + ex);
                //Logger.getLogger(SimulazioneDistributore.class.getName()).log(Level.SEVERE, null, ex);
            }
        System.out.println(d);
        
        FileOutputStream fo;
        fo = new FileOutputStream("data.bin");
        ObjectOutputStream outObj = new ObjectOutputStream(fo);
        
        outObj.writeObject(d);
        
    }
    
}
