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

public abstract class Pezzo

{
    /** Attributes */
    /**
     * 
     */
    private String colore;
    /**
     * 
     */
    private int riga;
    /**
     * 
     */
    private char colonna;
    /**
     * 
     */
    protected int valore;
    /**
     * Costruttore
     *
     * @param colore - 
     * @param riga - 
     * @param colonna - 
     * @return 
     */
    public Pezzo (String colore,int riga, char colonna ){
        this.colore = colore;
        this.riga = riga;
        this.colonna = colonna;
    }
    /**
     * Operation getValore
     *
     * @return int
     */
    public final int getValore (){
        return valore;
    }
    
    /**
     * Operation getColore
     *
     * @return String
     */
    public final String getColore (){
        return colore;
    }
    
    public abstract boolean valutaMossa(int riga, char colonna);
    
}


