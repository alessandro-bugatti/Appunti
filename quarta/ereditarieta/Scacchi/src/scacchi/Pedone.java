/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package scacchi;

/**
 *
 * @author Alessandro Bugatti
 */
public class Pedone extends Pezzo
{
    
    public Pedone ( String colore, int riga, char colonna ){
        super(colore, riga, colonna);
        valore = 1;
    }

    @Override
    public boolean valutaMossa(int riga, char colonna) {
        return true; //To change body of generated methods, choose Tools | Templates.
    }
    

    
    
}
