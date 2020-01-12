/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package sequenza_con_lista;

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
