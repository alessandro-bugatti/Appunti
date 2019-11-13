/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javafxcontatore;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;

/**
 *
 * @author alex_2
 */
public class FXMLDocumentController implements Initializable {
    
    @FXML
    private Label label;
    
    private Contatore contatore;
    
    @FXML
    private void handleButtonAction(ActionEvent event) {
        contatore.incrementa();
        label.setText(contatore.toString());
        System.out.println(contatore);
    }
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        contatore = new Contatore();
        label.setText(contatore.toString());
    }    
    
}
