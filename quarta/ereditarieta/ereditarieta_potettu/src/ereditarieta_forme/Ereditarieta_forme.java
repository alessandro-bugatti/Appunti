package ereditarieta_forme;

public class Ereditarieta_forme
{
    public static void main(String[] args)
    {
       Forma f[];
       f = new Forma[100];
       f[0]= new Quadrato("Giallo", 10, 13, 23);
       f[1] = new Rettangolo("Blu", 11, 14, 23, 34);
       int n = (int)Math.random()*2;
       if (n == 0)
           f[2] = new Quadrato("Bianco", 12, 3, 7);
       else
           f[2] = new Rettangolo("Nero", 1, 1, 1, 1);
       for (int i = 0; i < 3; i++)
            System.out.println(f[i].getArea()); 
       //Downcasting, noi non lo useremo
       Forma r = new Rettangolo("Giallo", 15, 17,1,1);
       Forma s = new Cerchio("Verde", 2, 1, 4);
       Rettangolo p = (Rettangolo)r;
       Rettangolo h = (Rettangolo)s;
    }
}