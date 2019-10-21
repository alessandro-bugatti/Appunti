/*
  Copyright (C) 2013 Alessandro Bugatti (alessandro.bugatti@istruzione.it)

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

/*! \file
 *  \brief 
 *  \author Alessandro Bugatti
 *  \version 0.1
 *  \date  Creazione 16-ott-2019
 *  \date  Ultima modifica 16-ott-2019
 */

package contocorrente;


public class ContoCorrente {
    private String nominativo;
    private int codice;
    private float saldo;
    private float operazioni[];
    private int n_operazioni;
    /*
    public ContoCorrente(){
        this.nominativo = "No nome";
        codice = -1;
        saldo = 0;
    }
    */
    public ContoCorrente(String nominativo){
        this.nominativo = nominativo;
        this.codice = (int)(Math.random()*1000000);
        this.operazioni = new float[1000];
        n_operazioni = 0;
    }
    
    public void deposita(float soldi){
        if (soldi > 10000)
            return;
        this.saldo += soldi;
        operazioni[n_operazioni] = soldi;
        n_operazioni++;
    }
    
    public void preleva(float soldi){
        if (this.saldo - soldi < 0)
            return;
        this.saldo -= soldi;
        operazioni[n_operazioni] = -soldi;
        n_operazioni++;
    }
    
    public String toString()
    {
        String s = "Codice conto:" + codice + ". Questo conto corrente è di " + this.nominativo
                + ". Il saldo è " + this.saldo + "\n";
        s += nominativo + " ha fatto le seguenti operazioni\n";
        for (int i = 0; i < n_operazioni; i++)
            s += operazioni[i] + "\n";
        return s;
    }
    
}
