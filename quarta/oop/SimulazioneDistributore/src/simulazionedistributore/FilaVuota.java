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
public class FilaVuota extends Exception{
    private String nomeMerendina;

    public FilaVuota(String nomeMerendina) {
        this.nomeMerendina = nomeMerendina;
    }
    @Override
    public String toString()
    {
        return nomeMerendina;
    }
    
    
}
