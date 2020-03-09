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
public class Rettangolo extends Poligono{
    protected double base;
    protected double altezza;

    public Rettangolo(String colore, int x, int y, double base, double altezza) {
        super(colore, x, y, 4);
        this.base = base;
        this.altezza = altezza;
    }
    
    @Override
    public final double getArea(){
        return base*altezza;
    }
    
    @Override
    public double getPerimetro(){
        return base*2 + altezza*2;
    }

    public double getBase() {
        return base;
    }

    public double getAltezza() {
        return altezza;
    }
    
    public double getDiagonale(){
        return Math.sqrt(altezza * altezza + base * base);
    }

    @Override
    public String toString() {
        String s;
        int lunghezzaBase = 20;
        int padding = 1;
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
        //Aggiungo il primo dato
        temp = "Rettangolo con base " + base + ",";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //Aggiungo il primo dato
        temp = "e altezza " + altezza + ",";
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
        //Aggiungo il ultimo dato
        temp = "perimetro " + getPerimetro() + ".";
        s += "║" + temp;
        for (int i=0; i<numero_spazi - temp.length(); i++)
            s += " ";
        s += "║\n";
        //completo il rettangolo
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
