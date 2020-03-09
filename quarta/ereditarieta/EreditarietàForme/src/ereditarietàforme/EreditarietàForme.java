/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/
package ereditarietàforme;

import java.util.Scanner;

/**
 *
 * @author Nizar
 */
public class EreditarietàForme {
    
    static int menù(){
        int rangeScelte = 4;
        String s= "MENÙ\n"
                + "    1.aggiungi una figura\n"
                + "    2.visualizza l'ultima figura aggiunta\n"
                + "    3.visualizza tutte le figure\n"
                + "    0.esci\n"
                + "Immetti la scelta desiderata: ";
        System.out.print(s);
        Scanner scanner = new Scanner (System.in);
        int scelta = scanner.nextInt();
        while (scelta < 0 || scelta > rangeScelte){
            System.out.println("Scelta non esistente, reimmettere la scelta desiderata: ");
            scelta = scanner.nextInt();
        }
        return scelta;
    }
    
    static int aggiungi_figura(Forma[] forme, int n_forme){
        int forme_aggiunte = 0;
        boolean run = true;
        while (run){
            System.out.print("Cerchio, rettangolo o quadrato? ");
            Scanner scanner = new Scanner (System.in);
            String scelta;
            scelta = scanner.next();
            String colore;
            int x, y;
            switch (scelta.toUpperCase()){
                default:
                    return forme_aggiunte;
                case "CERCHIO":
                    double raggio;
                    System.out.print("Colore: ");
                    try{
                        colore = scanner.next();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(X): ");
                    try{
                        x = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(Y): ");
                    try{
                        y = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Raggio: ");
                    try{
                        raggio = scanner.nextDouble();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    forme[n_forme + forme_aggiunte]= new Cerchio(colore, x, y, raggio);
                    System.out.println("Figura aggiunta con successo");
                    break;
                case "RETTANGOLO":
                    double base, altezza;
                    System.out.print("Colore: ");
                    try{
                        colore = scanner.next();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(X): ");
                    try{
                        x = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(Y): ");
                    try{
                        y = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Base: ");
                    try{
                        base = scanner.nextDouble();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Altezza: ");
                    try{
                        altezza = scanner.nextDouble();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    forme[n_forme + forme_aggiunte]= new Rettangolo(colore, x, y, base, altezza);
                    System.out.println("Figura aggiunta con successo");
                    
                    break;
                case "QUADRATO":
                    double lato;
                    System.out.print("Colore: ");
                    try{
                        colore = scanner.next();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(X): ");
                    try{
                        x = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Posizione(Y): ");
                    try{
                        y = scanner.nextInt();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    System.out.print("Lato: ");
                    try{
                        lato = scanner.nextDouble();
                    }catch(Exception ex){
                        System.out.println("Tipo del dato errato");
                        break;
                    }
                    forme[n_forme + forme_aggiunte]= new Quadrato(colore, x, y, lato);
                    System.out.println("Figura aggiunta con successo");
                    break;
            }
            forme_aggiunte++;
            System.out.print("Desideri aggiungere un'altra figura (Y/N)? ");
            if (scanner.next().toUpperCase().charAt(0) != 'Y')
                run = false;
        }
        return forme_aggiunte;
    }
    
    static void visualizza_figura(Forma[] forme, int n_forme){
        System.out.println(forme[n_forme - 1]);
    }
    
    static void visualizza_figure(Forma[] forme, int n_forme){
        for (int i = 0; i < n_forme; i++) {
            System.out.println(forme[i]);
        }
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        Forma[] forme = new Forma[100];
        int n_forme = 0;
        Scanner scanner = new Scanner (System.in);
        int scelta;
        do{
            scelta = menù();
            switch (scelta){
                default: case 0:
                    break;
                case 1:
                    n_forme += aggiungi_figura(forme, n_forme);
                    break;
                case 2:
                    visualizza_figura(forme, n_forme);
                    break;
                case 3:
                    visualizza_figure(forme, n_forme);
                    break;
            }
        } while (scelta != 0);
    }
    
}
