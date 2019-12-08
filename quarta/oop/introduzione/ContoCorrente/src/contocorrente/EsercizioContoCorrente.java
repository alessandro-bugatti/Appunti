/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contocorrente;

import java.io.BufferedReader;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class EsercizioContoCorrente {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException, ClassNotFoundException  {
        ContoCorrente conti[] = null;
        int n_conti = 0;
        ObjectInputStream in;
        
        try {
            in = new ObjectInputStream(new FileInputStream("contiCorrenti.bin"));
            n_conti = in.readInt();
            conti = (ContoCorrente[])in.readObject();
        } catch (FileNotFoundException ex) {
            //Se non è presente il file da deserializzare viene creato un 
            //vettore vuoto
            System.out.println("Nessun file da deserializzare.");
            n_conti = 0;
            conti = new ContoCorrente[100];//Al massimo si potranno memorizzare 100 conti
        } catch (EOFException ex){
            System.out.println("Errore nella lettura del file");
        }
        //Parte per inserire un nuovo conto corrente,
        //Serve solo a verificare che la serializzazione 
        //funzioni
        System.out.println("Il vettore com'è dopo la deserializzazione");
        for (int i = 0; i < n_conti; i++)
            System.out.println((i+1) + ") " + conti[i]);
        System.out.println("Inserimento del nominativo di un nuovo correntista");
        System.out.println("Inserisci il nominativo");
        BufferedReader buf = 
                new BufferedReader(new InputStreamReader(System.in));
        String nominativo = buf.readLine();
        conti[n_conti] = new ContoCorrente(nominativo);
        n_conti++;
        System.out.println("Il vettore com'è dopo il nuovo inserimento");
        for (int i = 0; i < n_conti; i++)
            System.out.println((i+1) + ") " + conti[i]);
        
//Gestione delle serializzare
        ObjectOutputStream out;
        out = new ObjectOutputStream(new FileOutputStream("contiCorrenti.bin"));
        out.writeInt(n_conti);
        out.writeObject(conti);
    }    
}
