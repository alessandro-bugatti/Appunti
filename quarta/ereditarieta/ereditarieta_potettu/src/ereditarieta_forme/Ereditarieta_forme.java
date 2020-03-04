package ereditarieta_forme;

public class Ereditarieta_forme
{
    public static void main(String[] args)
    {
        Quadrato q = new Quadrato("rosso", 10, 10, 8);
        System.out.println(q.getArea());
        System.out.println(q.getPerimetro());
    }
}