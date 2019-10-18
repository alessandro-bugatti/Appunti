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
    }
    
    public void deposita(float soldi){
        if (soldi > 10000)
            return;
        this.saldo += soldi;
    }
    
    public String toString()
    {
        String s = "Codice conto:" + codice + ". Questo conto corrente è di " + this.nominativo
                + ". Il saldo è " + this.saldo + "\n";
        return s;
    }
    
}
