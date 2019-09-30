/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package insertionsort;


/**
 *
 * @author 72351597
 */
public class InsertionSort {
    
    static int N=6;
    
    static void stampa_vettore(int v[], int n)
    {
        for (int i=0; i<N; i++)
                System.out.println(v[i]);
    }

    
    public static void main(String[] args) {
        int v[], k=1, temp;
        long inizio, fine;
        v=new int[N];
        for (int i=0; i<N; i++){
            v[i]=(int) (Math.random()*10000000);
            //System.out.println(v[i]);
        }
        inizio=System.currentTimeMillis();
        for (int i=0; i<N-1; i++){
            for (int j=0; j<k; j++)
                if (v[k]<v[j]){
                    temp=v[k];   //Si può fare un while 
                    v[k]=v[j];
                    v[j]=temp;
                }
            k++;
        }
        fine=System.currentTimeMillis();
        System.out.print("Tempo impiegato: " + (double)(fine-inizio)/1000);
        System.out.println();
        stampa_vettore(v, N);
    }
}