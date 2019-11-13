/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javafxtabellone;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

/**
 *
 * @author alex_2
 */
public class FXMLDocumentController implements Initializable {

    @FXML
    private Button btnCasa;
    @FXML
    private Button btnOspiti;
    @FXML
    private Label lblCasa;
    @FXML
    private Label lblOspiti;
    
    private Contatore casa, ospiti;
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        casa = new Contatore();
        ospiti = new Contatore();
        lblCasa.setText(casa.toString());
        lblOspiti.setText(ospiti.toString());
    }    

    @FXML
    private void handleBtnCasa(ActionEvent event) {
        casa.incrementa();
        lblCasa.setText(casa.toString());
    }

    @FXML
    private void handleBtnOspiti(ActionEvent event) {
        ospiti.incrementa();
        lblOspiti.setText(ospiti.toString());
    }
    
}
