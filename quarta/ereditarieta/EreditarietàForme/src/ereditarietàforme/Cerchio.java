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
public class Cerchio extends Forma {
    private double raggio;
    public Cerchio(String colore, int x, int y, double raggio) {
        super(colore, x, y);
        this.raggio = raggio;
    }
    

    @Override
    public double getPerimetro(){
        return 2* raggio* Math.PI;
    }
    
    @Override
    public double getArea(){
        return raggio * raggio * Math.PI;
    }

    @Override
    public String toString() {
        String s = "Cerchio con raggio " + raggio + ", area " + getArea() + " e perimetro " + getPerimetro();
        return s;
    }
    
    
    
}
