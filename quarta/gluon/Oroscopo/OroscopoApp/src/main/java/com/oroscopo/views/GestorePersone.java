/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.oroscopo.views;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Alessandro Bugatti
 */
public class GestorePersone {
    private static ArrayList<Persona> persone =
            new ArrayList<>();
    
    public static void carica()
    {
        FileInputStream fos = null;
        try {
            fos = new FileInputStream("persone.bin");
        } catch (FileNotFoundException ex) {
            //Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
            return;
        }
        System.out.println(fos);
        ObjectInputStream oos;
        try {
            oos = new ObjectInputStream(fos);
        } catch (IOException ex) {
            Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
            return;
        }
        try {
            persone = (ArrayList<Persona>) oos.readObject();
        } catch (IOException ex) {
            Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
        }
        System.out.println(persone);
    }
    
    public static ArrayList<Persona> getPersone()
    {
        return persone;
    }
    
    public static void add(Persona p)
    {
        persone.add(p);
    }
    
    
    public static void salva() 
    {
        FileOutputStream fos = null;
        try {
            fos = new FileOutputStream("persone.bin");
            ObjectOutputStream oos = new ObjectOutputStream(fos);      
            oos.writeObject(persone);
            oos.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                fos.close();
            } catch (IOException ex) {
                Logger.getLogger(GestorePersone.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
