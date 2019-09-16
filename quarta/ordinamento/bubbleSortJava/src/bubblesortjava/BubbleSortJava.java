/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bubblesortjava;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class BubbleSortJava {
    static int N = 5;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    int v[], temp, numero;
    v = new int[N];
    for (int i=0; i<N; i++)
        v[i] = (int) (Math.random()*32625);
        System.out.println("Vettore disordinato: ");
    for(int i=0; i<N; i++)
    {
        System.out.print(" " + v[i]);
    }
    System.out.println();
    for(int i=0; i<N; i++)
    {
        boolean scambio = false;
        for(int j=N-2; j>=i; j--)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                scambio = true;
            }
        }
        if (!scambio)
            break;
    }
    System.out.println("Vettore disordinato: ");
    for(int i=0; i<N; i++)
    {
        System.out.print(" " + v[i]);
    }
    System.out.println();
    
    
    }
    
}
