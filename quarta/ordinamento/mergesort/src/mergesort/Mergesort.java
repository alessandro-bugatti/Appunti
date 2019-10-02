/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mergesort;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class Mergesort {

    static int N = 100;
    static int temp[] = new int[N];
    
    static void merge(int v[], int start, int m, int end)
    {
        
    }
    
    static void mergesort(int v[], int start, int end)
    {
        if (start >= end)
            return;
        int m = (start + end)/2;
        mergesort(v, start, m);
        mergesort(v, m+1, end);
        merge(v, start, m , end);
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
