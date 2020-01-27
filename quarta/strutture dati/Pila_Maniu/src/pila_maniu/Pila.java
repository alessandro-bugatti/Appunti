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
private Sequenza s;
private int nNodi = 0;

public Pila(){
    s = new Sequenza();
}

public int Size(){
return nNodi;
}

public boolean isEmpty(){
return nNodi == 0;
}

public void Push(int a){
s.inserimentoInTesta(a);
nNodi++;
}

public Integer Pop(){
Integer a = s.getItem(0);
s.cancellazioneInTesta();
if (nNodi > 0)
    nNodi--;
return a;
}

@Override
public String toString()
{
    return s.toString();
}



}
