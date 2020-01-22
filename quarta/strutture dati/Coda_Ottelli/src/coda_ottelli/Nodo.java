/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package coda_ottelli;

/**
 *
 * @author Alessandro Bugatti
 */
public class Nodo {
    private int info;
    private Nodo next;

    public Nodo(int i){
        info=i;
        next=null;
    }
    
    public int getInfo() {
        return info;
    }

    public void setInfo(int info) {
        this.info = info;
    }

    public Nodo getNext() {
        return next;
    }

    public void setNext(Nodo next) {
        this.next = next;
    }
    
    
    
    
    
}
