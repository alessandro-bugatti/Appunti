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
public class Pila {
private Sequenza s = new Sequenza();

public int Size(){
return s.sizeNodi();
}

public boolean isEmpty(){
return s.sizeNodi() == 0;
}

public void Push(int a){
s.inserimentoInTesta(a);
}

public Integer Pop(){
Integer a = s.getItem(0);
s.cancellazioneInTesta();
return a;
}



}
