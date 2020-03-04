package ereditarieta_forme;

public class Rettangolo extends Poligono
{
    private int base;
    private int altezza;
    
    public Rettangolo(String colore, int x, int y, int base, int altezza)
    {
        super(colore, x, y, 4);
        this.base = base;
        this.altezza = altezza;
    }
    
    @Override
    public double getArea()
    {
        return base*altezza;
    }
    
    @Override
    public double getPerimetro()
    {
        return 2*(base + altezza);
    }
}