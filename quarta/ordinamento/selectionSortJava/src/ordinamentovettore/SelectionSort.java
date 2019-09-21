/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ordinamentovettore;

/**
 *
 * @author Ottelli
 */
public class SelectionSort {

    /**
     * @param args the command line arguments
     */
    static int N = 5;
    
    public static void main(String[] args) {
        int v[], temp;
        v = new int [N];
        for (int i=0; i<N; i++){
            v[i] = (int)(Math.random()*100);
            System.out.print(" " + v[i]);
        }
        System.out.println();
        
        for (int i=0; i<N; i++){
            int min=i;
            for (int j=i+1; j<N; j++){
                if (v[j]<v[min]){
                    min = j;
                }
            }
            temp = v[i];
            v[i]=v[min];
            v[min]=temp;
        }
        
        for (int i=0; i<N; i++){
            System.out.print(" " + v[i]);
        }
        // TODO code application logic here
    }
    
}
