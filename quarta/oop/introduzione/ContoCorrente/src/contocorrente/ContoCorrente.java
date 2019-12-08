/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contocorrente;

import java.io.Serializable;

/**
 *
 * @author Usanza Stefano
 */
public class ContoCorrente implements Serializable{
    private String nominativo; //private viene visto solo all'interno della classe corrente
    private int codice; 
    private float soldiPresenti;
    private EstrattoConto estratto;
    
/*    public ContoCorrente(){//costruttore
        this.nominativo= "no nome";
        this.codice= -1;
        this.soldiPresenti=0;
    }*/
    
    public ContoCorrente(String nominativo){//non deve essere per forza unico
        this.nominativo = nominativo;
        this.codice = (int)(Math.random()*100000000);
        this.estratto = new EstrattoConto();
    }
    
    public void deposita(float n){
        if (n > 10000){
            estratto.aggiungiOperazione(n, "deposito", false);
            return;
        }
        this.soldiPresenti += n;
        estratto.aggiungiOperazione(n, "deposito", true);
    }
    
    private void deposita(String soldi){
        float n= Float.valueOf(soldi);
        deposita(n);
    }
    
    public void preleva(float n){
        if (this.soldiPresenti < n){
            estratto.aggiungiOperazione(n, "prelievo", false);
            return;
        }
        this.soldiPresenti -= n;
        estratto.aggiungiOperazione(n, "prelievo", true);        
    }
    
    public void preleva(String soldi){
        float n= Float.valueOf(soldi);
        preleva(n);
        
    }
    
    public float getSaldo(){
        return this.soldiPresenti;
    }
    
    @Override
    public String toString(){
       String s = "conto corrente di " + this.nominativo
                  + " codice " +  this.codice + " il saldo è " + this.soldiPresenti + "\n";
       s += estratto;
       return s;
    }

}
