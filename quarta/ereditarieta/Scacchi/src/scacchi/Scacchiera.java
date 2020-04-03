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
public class Scacchiera {
    Pezzo scacchiera[][];
    
    public Scacchiera(){
        scacchiera = new Pezzo[8][8];
        scacchiera[1][0] = new Pedone("Bianco", 2, 'a');
        scacchiera[2][0] = new Pedone("Nero", 3, 'a');
    }
    
    public boolean sposta(int r_p, char c_p, int r_a, char c_a){
        //controllo sulla correttezza delle coordinate
        if (r_p - 1 < 0) return false; //ecc.
        if (scacchiera[r_p - 1][c_p - 'a'] == null) return false;
        if (scacchiera[r_p - 1][c_p - 'a'].valutaMossa(r_a - 1, (char)(c_a - 'a')))
        {
            scacchiera[r_a - 1][c_a - 'a'] = scacchiera[r_p - 1][c_p - 'a'];
            scacchiera[r_p - 1][c_p - 'a'] = null;
            return true;
        }
        else
            return false;
                    
    }
    
    public String valuta()
    {
        int valoreBianchi = 0, valoreNeri = 0;
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++) {
                if (scacchiera[i][j] != null)
                    if(scacchiera[i][j].getColore() == "Bianco")
                        valoreBianchi += scacchiera[i][j].getValore();
                    else
                        valoreNeri += scacchiera[i][j].getValore();
            }
        return "Valore bianchi: " + valoreBianchi + " - Valore neri: " 
                    + valoreNeri;       
        }
}

