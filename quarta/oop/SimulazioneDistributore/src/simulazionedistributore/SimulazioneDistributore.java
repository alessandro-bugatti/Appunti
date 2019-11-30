/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simulazionedistributore;

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
    public static void main(String[] args) {
        Distributore d = new Distributore(3, 4);
        FilaMerendine f = new FilaMerendine("Nutella biscuits", (float) 4.0, 10);
        d.inserisciFila(f, 1, 1);
        for (int i = 0; i < 11; i++)
            try {
                d.compraMerendina(0, 0);
            } catch (FilaVuota ex) {
                //Logger.getLogger(SimulazioneDistributore.class.getName()).log(Level.SEVERE, null, ex);
            }
        System.out.println("Ciao");
    }
    
}
