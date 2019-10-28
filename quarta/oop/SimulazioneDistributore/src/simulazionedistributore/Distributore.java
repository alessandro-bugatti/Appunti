/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package simulazionedistributore;

/**
 *
 * @author Alessandro Bugatti
 */
public class Distributore {

    private FilaMerendine griglia[][];
    private int n_righe;
    private int n_colonne;
    
    public Distributore(int n_righe, int n_colonne)
    {
        griglia = new FilaMerendine[n_righe][n_colonne];
        this.n_righe = n_righe;
        this.n_colonne = n_colonne;
    }
    
    public boolean inserisciFila(FilaMerendine f, int r, int c)
    {
        if (r < 1 || r > n_righe)
            return false;
        if (c < 1 || c > n_colonne)
            return false;
        griglia[r-1][c-1] = f;
        return true;
    }
    
    public float mostraPrezzo(int r, int c)
    {
        if (r < 1 || r > n_righe)
            return -1;
        if (c < 1 || c > n_colonne)
            return -1;
        if (griglia[r-1][c-1] == null)
            return -1;
        if (griglia[r-1][c-1].getMerendinePresenti() == 0)
            return -1;
        return griglia[r-1][c-1].getPrezzo();
    }
}
