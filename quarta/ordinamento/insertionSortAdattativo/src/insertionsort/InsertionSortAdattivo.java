/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package insertionsort;

/**
 *
 * @author 71965337
 */

public class InsertionSortAdattivo {

    /**
     * @param args the command line arguments
     */
    static int N = 60000;
    public static void main(String[] args) {
        int min= 0, temp, v[]= new int[N];
        long inizio, fine;
        //System.out.println("I numeri non ordinati sono:");
        
        for (int i=0; i<N; i++){
            v[i]= (int) (Math.random()*10000000);
            //System.out.print(v[i]+ "  ");
            if (v[i]< v[min])
                min= i;
        }
        //Scambio per inserire la sentinella
        temp= v[min];
        v[min]= v[0];
        v[0]= temp;
        inizio=System.currentTimeMillis();
        int j;
        for (int i=2; i<N; i++){
            j = i;
            while (v[j]<v[j-1]){
                temp = v[j-1];
                v[j-1]= v[j];
                v[j]= temp;
                j--;
            }  
        }
        fine=System.currentTimeMillis();
        System.out.print("Tempo impiegato: " + (double)(fine-inizio)/1000);
        System.out.println();
        /*System.out.println("I numeri ordinati sono:");
        for (int i=0; i<N; i++)
            System.out.print(v[i]+ "  ");
      
        System.out.println();*/
    }   
    
}
