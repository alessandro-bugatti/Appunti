/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package alberobinarioricerca;

/**
 *
 * @author Alessandro Bugatti
 */
public class Albero {
    private Nodo root;
    
    public void inserisci(int n)
    {
        if (root == null)
            root = new Nodo(n);
        else
            inserisciR(root, n);
    }
    
    private void inserisciR(Nodo nodo, int n)
    {
        if (n < nodo.info)
        {
            if (nodo.sx == null)
                nodo.sx = new Nodo(n);
            else
                inserisciR(nodo.sx, n);
        }
        if (n > nodo.info)
        {
            if (nodo.dx == null)
                nodo.dx = new Nodo(n);
            else
                inserisciR(nodo.dx, n);
        }
    }
    
    public boolean ricerca(int n)
    {
        return ricercaR(root, n);
    }
    
    private boolean ricercaR(Nodo nodo, int n)
    {
        if (nodo == null)
            return false;
        if (nodo.info == n)
            return true;
        if (n < nodo.info)
            return ricercaR(nodo.sx, n);
        else
            return ricercaR(nodo.dx, n);
    }
}
