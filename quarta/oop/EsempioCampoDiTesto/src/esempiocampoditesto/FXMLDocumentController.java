/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiocampoditesto;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
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
    private TextField txtStringa;
    
    @FXML
    private void handleButtonAction(ActionEvent event) {
        System.out.println("You clicked me!");
        /*
        //Attenzione a usare equals e non ==
        if (txtStringa.getText().equals("Ciao"))
            label.setText("Hai scritto Ciao");
        else
            label.setText(txtStringa.getText());
        */
        double n;
        double numeroConvertito;
        numeroConvertito = Double.parseDouble(txtStringa.getText());
        n = 0.947*numeroConvertito;
        label.setText("" + n);
        txtStringa.setText("");
        //label.setText(Double.toString(n));
    }
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    
    
}
