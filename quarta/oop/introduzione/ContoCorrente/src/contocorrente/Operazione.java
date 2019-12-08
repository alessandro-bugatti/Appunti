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

import java.io.Serializable;
import java.time.LocalDateTime;

public class Operazione implements Serializable{
    private float soldi;
    private String motivo;
    private LocalDateTime timestamp;
    private boolean successo;
    
    public Operazione(float soldi, String motivo, boolean successo){
        this.soldi = soldi;
        this.motivo = motivo;
        this.successo = successo;
        this.timestamp = LocalDateTime.now();
    }
    
    @Override
    public String toString(){
        String s;
        if (this.successo == true){
            s = "L'operazione è stata eseguita il " +
                timestamp + ". Il denaro mosso è di " + 
                soldi + " € con il seguente motivo: " + 
                motivo;
        }
        else{
            s = "L'operazione non è andata a buon fine " + 
                "in data" + 
                timestamp.getDayOfMonth() + "/" + 
                timestamp.getMonth() + "/" +
                timestamp.getYear() +
                " nel tentativo di muovere " +
                + soldi + " €.";
        }
        return s;
    }
}
