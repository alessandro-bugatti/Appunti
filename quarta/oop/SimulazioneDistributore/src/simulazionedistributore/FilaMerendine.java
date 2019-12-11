/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package simulazionedistributore;

import java.io.Serializable;

/**
 *
 * @author Alessandro Bugatti
 */
public class FilaMerendine implements Serializable{
    private String nome;
    private float costo;
    private int qta;
    
    public FilaMerendine(String nome, float costo, int qta)
    {
        this.nome = nome;
        this.costo = costo;
        this.qta = qta;
    }
    
    public int getMerendinePresenti()
    {
        return qta;
    }
    
    public void espelliMerendina() throws FilaVuota
    {
        if (qta == 0)
            throw new FilaVuota(nome);
        qta--;
        
    }
    
    public float getPrezzo()
    {
        return costo;
    }
    
    public void ricarica(int n)
    {
        if (n > 0)
            qta += n;
    }

    @Override
    public String toString() {
        return "FilaMerendine{" + "nome=" + nome +
                ", costo=" + costo + ", qta=" + qta + '}';
    }
    
}
