package ereditarieta_forme;

public class Poligono extends Forma
{
    private int numeroLati;
    
    public Poligono(String colore, int x, int y, int numeroLati)
    {
        super(colore, x, y);
        this.numeroLati = numeroLati;
    }
    
    int numeroLati()
    {
        return numeroLati;
    }
}