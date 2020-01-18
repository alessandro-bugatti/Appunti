/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pila_maniu;

/**
 *
 * @author alex_2
 */
public class Pila_Maniu {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Pila a = new Pila();
       a.Push(4);
       a.Push(3);
       a.Push(1);
       while(!a.isEmpty()){
       System.out.println(a.Pop());
       }
       
       Pila_Array b = new Pila_Array();
       b.Push(4);
       b.Push(3);
       b.Push(1);
       while(!b.isEmpty()){
       System.out.println(b.Pop());
       }
       
       
    }
    
}
