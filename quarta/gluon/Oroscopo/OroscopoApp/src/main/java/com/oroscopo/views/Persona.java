/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.oroscopo.views;

import java.time.LocalDate;

/**
 *
 * @author Alessandro Bugatti
 */
public class Persona {
    
    private String cognome;

    /**
     * Get the value of cognome
     *
     * @return the value of cognome
     */
    public String getCognome() {
        return cognome;
    }

    /**
     * Set the value of cognome
     *
     * @param cognome new value of cognome
     */
    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    private String nome;

    /**
     * Get the value of nome
     *
     * @return the value of nome
     */
    public String getNome() {
        return nome;
    }

    /**
     * Set the value of nome
     *
     * @param nome new value of nome
     */
    public void setNome(String nome) {
        this.nome = nome;
    }
    
        private LocalDate dataNascita;

    /**
     * Get the value of dataNascita
     *
     * @return the value of dataNascita
     */
    public LocalDate getDataNascita() {
        return dataNascita;
    }

    /**
     * Set the value of dataNascita
     *
     * @param dataNascita new value of dataNascita
     */
    public void setDataNascita(LocalDate dataNascita) {
        this.dataNascita = dataNascita;
    }

    @Override
    public String toString() {
        return cognome + " " + nome;
    }

    public Persona(String cognome, String nome, LocalDate dataNascita) {
        this.cognome = cognome;
        this.nome = nome;
        this.dataNascita = dataNascita;
    }
    
}
