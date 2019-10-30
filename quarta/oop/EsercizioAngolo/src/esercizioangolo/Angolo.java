/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package esercizioangolo;

/**
 *
 * @author Alessandro Bugatti
 */
public class Angolo {
    private int gradi;
    private int primi;
    private int secondi;
    
    /**
     * Scopo di questo metodo è avere valori di gradi, primi 
     * e secondi corretti, cioè che rispettino i limiti.
     * Se sono valori positivi eventuali eccessi vengono spostati
     * sull'unità di misura superiore, se sono negativi vengono 
     * posti a 0.
     */
    private void normalizza()
    {
        if (secondi < 0)
            secondi = 0;
        else{
            primi = primi + secondi/60;
            secondi = secondi%60;
        }
        if (primi < 0)
            primi = 0;
        else{
            gradi = gradi + primi/60;
            primi = primi % 60;
        }
        gradi = gradi % 360;
        gradi = (gradi + 360) % 360;
    }
    
    public Angolo(int gradi, int primi, int secondi)
    {
        this.gradi = gradi;
        this.primi = primi;
        this.secondi = secondi;
        this.normalizza();
    }
    
    public Angolo(Angolo b)
    {
        this.gradi = b.gradi;
        this.primi = b.primi;
        this.secondi = b.secondi;
    }
    
    public void aggiungiGradi(int gradi){
        this.gradi += gradi;
        normalizza();
    }
    
    public void aggiungiPrimi(int primi){
        this.primi += primi;
        normalizza();
    }
    
    private int inSecondi()
    {
        return gradi * 3600 + primi * 60 + secondi;
    }
    
    public int differenzaSecondi(Angolo a){
        int primo_angolo = this.inSecondi();
        int secondo_angolo = a.inSecondi();
        return primo_angolo - secondo_angolo;
    }
    
    public Angolo sommaAngolo(Angolo a){
        return null;
    }
    @Override
    public String toString(){
        String s;
        s = gradi + "°" + primi + "'" + secondi + "\""; 
        return s;
    }
}
