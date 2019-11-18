/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiojavafxcombobox;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;

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
    private void handleButtonAction(ActionEvent event) {
        System.out.println("You clicked me!");
        label.setText(cmbConversioni.getValue());
    }
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        String convs[] = {"Metri->Yarde", "Euro->Sterline"};
        cmbConversioni.getItems().addAll(convs);
    }    
    
}
