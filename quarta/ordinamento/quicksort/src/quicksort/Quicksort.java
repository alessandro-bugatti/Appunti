/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quicksort;

/**
 *
 * @author Alessandro Bugatti <alessandro.bugatti@gmail.com>
 */
public class Quicksort {

    static void stampa(int v[], int n)
    {
        for (int i = 0; i < n; i++)
            System.out.print(v[i] + " ");
        System.err.print("\n");
    }
    static int partition(int v[],int start, int end)
    {
        int i, j, pivot;
        i = start - 1;
        j = end;
        pivot = v[end];
        while(true)
        {
            i++;
            j--;
            while(v[i]<pivot) i++;
            while(j>=start && v[j]>pivot) j--;
            if (i >= j) break;
            int t = v[i];
            v[i] = v[j];
            v[j] = t;
        }
        int t = v[i];
        v[i] = v[end];
        v[end] = t;
        return i;
    }
    
    static void quicksort(int v[],int start, int end)
    {
        int i;
        if (start >= end)
            return;
        i = partition(v,start, end);
        quicksort(v, start, i-1);
        quicksort(v, i+1, end);
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int v[] = {72, 33, 12, 44, 21, 1, 8, 99};
        stampa(v,8);
        quicksort(v, 0, 7);
        System.out.println("");
        stampa(v,8);
    }
    
}
