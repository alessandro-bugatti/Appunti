/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiojavafxconvertitore;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author alex_2
 */
public class FXMLDocumentController implements Initializable {
    
    @FXML
    private Label label;
    @FXML
    private Button button;
    @FXML
    private ComboBox<String> cmbConversioni;
    @FXML
    private TextField txtIniziale;
    
    private GestioneConversioni manager;
    
    @FXML
    private void handleButtonAction(ActionEvent event) {
        //Da fare
    }
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        GestioneConversioni manager = new GestioneConversioni();
        manager.add(new Convertitore("Euro", "Sterline", 0.85));
        manager.add(new Convertitore("Sterline", "Euro", 1/0.85));
        cmbConversioni.getItems().addAll(manager.getItems());
    }    
    
}
