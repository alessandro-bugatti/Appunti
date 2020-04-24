/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package listprodottiesempio;

import java.util.Objects;

/**
 *
 * @author Alessandro Bugatti
 */
public class Prodotto {

    private String Codice;

    /**
     * Get the value of Codice
     *
     * @return the value of Codice
     */
    public String getCodice() {
        return Codice;
    }

    /**
     * Set the value of Codice
     *
     * @param Codice new value of Codice
     */
    public void setCodice(String Codice) {
        this.Codice = Codice;
    }

    private String Nome;

    /**
     * Get the value of Nome
     *
     * @return the value of Nome
     */
    public String getNome() {
        return Nome;
    }

    /**
     * Set the value of Nome
     *
     * @param Nome new value of Nome
     */
    public void setNome(String Nome) {
        this.Nome = Nome;
    }
    
    private double prezzo;

    /**
     * Get the value of prezzo
     *
     * @return the value of prezzo
     */
    public double getPrezzo() {
        return prezzo;
    }

    /**
     * Set the value of prezzo
     *
     * @param prezzo new value of prezzo
     */
    public void setPrezzo(double prezzo) {
        this.prezzo = prezzo;
    }

    /**
    * Costruttore "magico" per evitare l'iniziliazzazione esplicita
    */
    public Prodotto() {
        Codice = "";
        Nome = "";
        //Genera codice
        for (int i = 0; i < 6; i++)
            if (i%2 == 0)
                this.Codice += (char)((int)'A' +(int)(Math.random()*26));
            else
                this.Codice += (char)((int)'0' +(int)(Math.random()*10));
        //Genera il nome
        int l = (int)(Math.random()*6)*2+2;
        String vocali = "aeiou";
        String consonanti = "bcdfglmnprstvz";
        for (int i = 0; i < l; i++)
            if (i%2 == 0)
                this.Nome += consonanti.charAt((int)(Math.random()*consonanti.length()));
            else
                this.Nome += vocali.charAt((int)(Math.random()*vocali.length()));
        this.Nome = this.Nome.substring(0, 1).toUpperCase() + this.Nome.substring(1);
        this.prezzo = Math.random()*100;
    }

    public Prodotto(String Codice, String Nome, double prezzo) {
        this.Codice = Codice;
        this.Nome = Nome;
        this.prezzo = prezzo;
    }

    @Override
    public String toString() {
        return "Prodotto{" + "Codice=" + Codice + ", Nome=" + Nome + ", prezzo=" + prezzo + '}';
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Prodotto other = (Prodotto) obj;
        if (Double.doubleToLongBits(this.prezzo) != Double.doubleToLongBits(other.prezzo)) {
            return false;
        }
        if (!Objects.equals(this.Codice, other.Codice)) {
            return false;
        }
        if (!Objects.equals(this.Nome, other.Nome)) {
            return false;
        }
        return true;
    }
    
    
    
}
