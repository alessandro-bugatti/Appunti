/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempi_ricorsione;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class Esempi_ricorsione {
    
    static int prodotto(int a, int b)
    {
        return a*b;
    }
    
    
    static int fattoriale(int n)
    {
        if (n == 0)
            return 1;
        return n*fattoriale(n-1);
    }
    
    static int prodotto_ric(int a, int b)
    {
        if (b == 0)
            return 0;
        return a + prodotto_ric(a, b-1);
    }
    
    
     /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.err.println(prodotto_ric(5,4));    
        
    // TODO code application logic here
    }
    
}
