/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ereditarieta_forme;

/**
 *
 * @author Alessandro Bugatti
 */
public class Cerchio extends Forma{
    
    private int raggio;
    public Cerchio(String colore, int x, int y, int raggio)
    {
        super(colore,x,y);
        this.raggio = raggio;
    }
    
    @Override
    public double getArea()
    {
        return 0;
    }
}
