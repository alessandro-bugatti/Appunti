package ereditarieta_forme;

abstract public class Forma
{
    private String colore;
    private int x;
    private int y;

    public Forma(String colore, int x, int y)
    {
        this.colore = colore;
        this.x = x;
        this.y = y;
    }

    public double getArea()
    {
        return 0;
    }
    
    public double getPerimetro()
    {
        return 0;
    }
}