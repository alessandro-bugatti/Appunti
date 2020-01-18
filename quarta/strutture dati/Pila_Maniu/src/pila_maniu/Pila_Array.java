/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pila_maniu;

/**
 *
 * @author Alessandro Bugatti
 */
public class Pila_Array {
private Integer v[] = new Integer[100];
int indice = 0;

public int Size(){
return indice;
}

public boolean isEmpty(){
return indice == 0;
}

public void Push(Integer a){
    v[indice] = a;
    indice++;
}

public Integer Pop(){
Integer a = v[indice - 1];
indice--;
return a;
}



}