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
public class Quadrato extends Rettangolo{

    public Quadrato(String colore, int x, int y, double lato) {
        super(colore, x, y, lato, lato);
    }
    
    @Override
    public final double getPerimetro(){
        return 4*base;    
    }
    
    public double getLato(){
        return base;
    }
    
    @Override
    public final double getDiagonale(){
        return base * Math.sqrt(2);
    }
    
    @Override
    public String toString() {
        String s;
        int lunghezzaBase = 20;
        int padding = 4;
        int numero_spazi = 31;
        //Strumenti trovati su Internet : ╔╦╗ ╠╬╣ ╚╩╝ ═ ║
        String l = "";
        for (int i=0; i<lunghezzaBase - 2; i++)
            l+= "═";
        s = "╔" + l + "╗\n";
        for (int i=0; i< padding; i++){
            s += "║";
            for (int j=0; j<numero_spazi; j++)
                s += " ";
            s += "║\n";
        }
        
        String temp;
        //Aggiungo lato
        temp = "Quadrato con lato " +  base + ",";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //Aggiungo il secondo dato
        temp = "diagonale " + getDiagonale() + ",";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //Aggiungo il terzo dato
        temp = "area " + getArea() + " e";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //Aggiungo l'ultimo dato
        temp = "perimetro " + getPerimetro() + ".";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //completo il quadrato
        for (int i=0; i< padding; i++){
            s += "║";
            for (int j=0; j<numero_spazi; j++)
                s += " ";
            s += "║\n";
        }
        s += "╚" + l + "╝\n";
        return s;
    }
}
