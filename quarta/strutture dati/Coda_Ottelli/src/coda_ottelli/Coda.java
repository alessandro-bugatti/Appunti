/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package coda_ottelli;

/**
 *
 * @author Alessandro Bugatti
 */
public class Coda {
    private Sequenza s;
    
    public Coda(){
        s = new Sequenza();
    }
    
    
    
    public int Size(){
        return s.sizeNodi();
    }

}
