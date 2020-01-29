/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package alberogenericocornacchiari;

/**
 *
 * @author Alessandro Bugatti
 */
public class Nodo {
    //Li rendiamo pubblici per facilità di lettura
    public char info;
    public Nodo fratello;
    public Nodo figlio;
    
    public Nodo(char info){
        this.info = info;
        fratello = null;
        figlio = null;
    }
    
    
    
}
