/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ereditarietàforme;

/**
 *
 * @author Nizar
 */
abstract public class Poligono extends Forma{
    private int nLati;
    public Poligono(String colore, int x, int y, int nLati) {
        super(colore, x, y);
        this.nLati = nLati;
    }
    
    public int getNumeroLati(){
        return nLati;
    }
}
