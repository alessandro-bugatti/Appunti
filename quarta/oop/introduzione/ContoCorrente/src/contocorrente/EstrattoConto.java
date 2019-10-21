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
 *  \date  Creazione 21-ott-2019
 *  \date  Ultima modifica 21-ott-2019
 */

package contocorrente;


public class EstrattoConto {
    private Operazione operazioni[];
    private int n_operazioni;
    
    public EstrattoConto(){
        operazioni = new Operazione[1000];
        n_operazioni = 0;
    }
    
    public EstrattoConto(int dim){
        operazioni = new Operazione[dim];
        n_operazioni = 0;
    }
    
    public void aggiungiOperazione(float soldi, String motivo, boolean successo){
        Operazione t = new Operazione(soldi, motivo, successo);
        operazioni[n_operazioni] = t;
        n_operazioni++;
    }
    
    public String toString(){
        String s = "Estratto conto\n";
        for (int i = 0; i < n_operazioni; i++)
            s += operazioni[i] + "\n";
        return s;
    }
}
