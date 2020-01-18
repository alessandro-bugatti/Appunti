/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pila_maniu;

/**
 *
 * @author Federico Gavazzi
 */
public class Sequenza {

    private Nodo head;
    private int n_nodi;
    
    public Sequenza(){
        head=null;
        n_nodi=0;
    }
    
    public void inserimentoInTesta(int n){
        Nodo nuovo=new Nodo(n);
        nuovo.setNext(head);
        head=nuovo;
        n_nodi++;
    }
    
    public void cancellazioneInTesta(){
        if(head==null)
            return;
        head=head.getNext();
        n_nodi--;
    }
    
    public void inserimentoInCoda(int n){
        if(n_nodi==0){
            head=new Nodo(n);
            n_nodi++;
            return;
        }
        
        Nodo temp=head;
        while(temp.getNext()!=null){
            temp=temp.getNext();
        }
        temp.setNext(new Nodo(n));
        n_nodi++;
        
        
    }
    //autore Jacopo Zuccalà
    // se la posizione non è corretta non viene fatto nulla
    public void inserimentoInPosizione(int n, int pos){
        if(pos < 0 || pos > n_nodi)
            return;
        if(pos == 0)
            inserimentoInTesta(n);
        else if(pos == n_nodi)
            inserimentoInCoda(n);    
        else{
            Nodo temp = head;
            for(int i = 0;i < pos-1;i++){
                temp = temp.getNext();
            }
            Nodo temp2;
            temp2 = temp.getNext();
            temp.setNext(new Nodo(n));
            temp.getNext().setNext(temp2);
            n_nodi++;
        }
            
    }
    //Usanza Stefano
    public void cancellaInPosizione(int pos){
        if (pos < 0 || pos > n_nodi-1)
            return;
        if (pos ==0)
            cancellazioneInTesta();
        else {
            Nodo temp = head;
            for (int i=0; i< pos-1; i++){
                temp = temp.getNext();
            }
            temp.setNext(temp.getNext().getNext());
            n_nodi--;
        }
    }
    
    public Integer getItem(int pos){
        if (pos <0 || pos > n_nodi-1)
            return null;
        Nodo temp = head;
        for (int i=0; i< pos; i++){
            temp = temp.getNext();
        }
        return temp.getInfo();
    }
    
    public int sizeNodi(){
        return n_nodi;
    }
    
    @Override
    public String toString(){
        if(n_nodi==0)
            return "La lista è vuota";
        String s=""+head.getInfo();
        Nodo temp=head;
        while(temp.getNext()!=null){
            temp=temp.getNext();
            s+="->"+temp.getInfo();
            
        }
        return s;
    }
    
    
    
}
