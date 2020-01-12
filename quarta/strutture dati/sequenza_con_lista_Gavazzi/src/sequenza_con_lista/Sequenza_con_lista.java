/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sequenza_con_lista;

/**
 *
 * @author alex_2
 */
public class Sequenza_con_lista {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Sequenza s=new Sequenza();
        System.out.println(s);
        s.inserimentoInTesta(3);
        s.inserimentoInTesta(5);
        s.inserimentoInTesta(7);
        System.out.println(s);
        System.out.println(s);
        for(int i=0;i<0;i++)
            s.cancellazioneInTesta();
        s.inserimentoInCoda(10);
        System.out.println(s);
        
    }
    
}
