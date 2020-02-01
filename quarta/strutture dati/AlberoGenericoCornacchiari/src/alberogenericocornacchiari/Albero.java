/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package alberogenericocornacchiari;

/**
 *
 * @author Alessandro Bugatti
 */
public class Albero {
    private Nodo root;
    private int quantiNodi;
    
    public Albero(){
        root = null;
        quantiNodi = 0;
    }
    
    public void Inserisci(char dove, char cosa){
        if (quantiNodi == 0){
            root = new Nodo(cosa);
            quantiNodi++;
            return;
        }
        Nodo cercato = ricerca(dove);
        if (cercato == null)
            return;
        if (cercato.figlio == null)
            cercato.figlio = new Nodo(cosa);
        else {
            Nodo temp = cercato.figlio;
            while (temp.fratello != null)
                temp = temp.fratello;
            temp.fratello = new Nodo(cosa);
        }
        quantiNodi++;
    }
    
    private Nodo ricerca(char dove){
        return ricercaR(dove, root);
    }
    
    private Nodo ricercaR(char dove, Nodo attuale){
        if (attuale == null)
            return null;
        if (attuale.info == dove)
            return attuale;
        Nodo a = ricercaR(dove, attuale.figlio);
        Nodo b = ricercaR(dove, attuale.fratello);
        if (a != null)
            return a;
        return b;  
    }
    
    public int size(){
        return quantiNodi;
    }
    
    public void visitaAnticipata(){
        visitaAnticipataR(root);
    }
    
    private void visitaAnticipataR(Nodo attuale){
        if (attuale == null)
            return;
        System.out.print(attuale.info + " ");
        Nodo temp = attuale.figlio;
        while (temp != null){
            visitaAnticipataR(temp);
            temp = temp.fratello;
        }  
    }
    
    public void visitaDifferita(){
        visitaDifferitaR(root);
    }
    
    private void visitaDifferitaR(Nodo attuale){
        if (attuale == null)
            return;
        
        Nodo temp = attuale.figlio;
        while (temp != null){
            visitaDifferitaR(temp);
            temp = temp.fratello;
        }  
        System.out.print(attuale.info + " ");
    }
    
    public int numero_nodi()
    {
        //Versione corretta, ma invece useremo la 
        //versione ricorsiva
        //return quantiNodi;
        return numero_nodiR(root);
    }
    
    private int numero_nodiR(Nodo n)
    {
        if (n == null)
            return 0;
        return 1 + numero_nodiR(n.figlio) +
                numero_nodiR(n.fratello);
    }
    
    public int altezza()
    {
        return altezzaR(root);
    }
    
    private int altezzaR(Nodo n)
    {
        if (n == null)
            return 0;
        Nodo temp = n.figlio;
        int max = 0;
        while(temp != null)
        {
            int h = altezzaR(temp);
            if (h > max)
                max = h;
            temp = temp.fratello;
        }
        return max + 1;
    }
    
    public int conta_vocali()
    {
        return conta_vocaliR(root);
    }
    
    private int conta_vocaliR(Nodo n)
    {
        if (n == null)
            return 0;
        int v = 0;
        if (n.info == 'a' || n.info == 'e' )//ecc.
            v = 1;
        return v + conta_vocaliR(n.figlio) + 
                conta_vocaliR(n.fratello);
    }
}
