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
abstract public class Forma {
    protected String colore;
    protected int x;
    protected int y;

    public Forma(String colore, int x, int y) {
        this.colore = colore;
        this.x = x;
        this.y = y;
    }
    
    abstract public double getArea();
    
    abstract public double getPerimetro();
}
