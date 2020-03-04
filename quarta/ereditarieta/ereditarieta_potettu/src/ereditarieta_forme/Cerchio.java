package ereditarieta_forme;

public class Cerchio extends Forma
{
    private int raggio;

    public Cerchio(String colore, int x, int y, int raggio)
    {
        super(colore,x,y);
        this.raggio = raggio;
    }

    @Override
    public double getArea()
    {
        return raggio*raggio*3.14;
    }
}