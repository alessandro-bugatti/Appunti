/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.randomstudent.model;

import java.util.ArrayList;

/**
 *
 * @author Alessandro Bugatti
 */
public class Classe {
    private String nome;
    private ArrayList<String> studenti;

    public Classe(String nome, ArrayList<String> studenti) {
        this.nome = nome;
        this.studenti = studenti;
    }
    
    public String estraiStudente()
    {
        return studenti.get((int)(Math.random()*studenti.size()));
    }

    @Override
    public String toString() {
        return nome;
    }
       
    
}
