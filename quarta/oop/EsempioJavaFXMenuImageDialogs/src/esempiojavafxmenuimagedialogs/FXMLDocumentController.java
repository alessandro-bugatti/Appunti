/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esempiojavafxmenuimagedialogs;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.application.Platform;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Label;
import javafx.scene.control.MenuItem;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.AnchorPane;
import javafx.stage.FileChooser;
import javafx.stage.Stage;

/**
 *
 * @author alex_2
 */
public class FXMLDocumentController implements Initializable {

    @FXML
    private MenuItem closeMenu;
    @FXML
    private MenuItem mnuAbout;
    @FXML
    private MenuItem mnuCarica;
    @FXML
    private AnchorPane root;
      
        
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void onActionClose(ActionEvent event) {
        Platform.exit();
    }

    @FXML
    private void onMnuAboutAction(ActionEvent event) {
        Alert alert = new Alert(AlertType.INFORMATION);
        alert.setTitle("Information Dialog");
        alert.setHeaderText(null);
        alert.setContentText("Carica foto 0.1");
        alert.showAndWait();
    }

    @FXML
    private void onMnuCaricaAction(ActionEvent event) throws FileNotFoundException {
        Stage stage = (Stage) root.getScene().getWindow();
        FileChooser fileChooser = new FileChooser();
        fileChooser.setTitle("Carica un file");
        fileChooser.setInitialDirectory(new File("."));
        File file = fileChooser.showOpenDialog(stage);
        if (file != null)
        {
            //Crea l'immagine leggendola da file 
            Image image = new Image(new FileInputStream(file.getAbsolutePath()));  

            //La assegna a un'imageview
            ImageView imageView = new ImageView(image); 

            //posizione dell'immagine
            imageView.setX(0); 
            imageView.setY(26); 

            //altezza e larghezza dell'immagine
            imageView.setFitHeight(455); 
            imageView.setFitWidth(545); 

            //Aggiunge l'immagine alla scena
            root.getChildren().add(imageView);
        }
    }

    
}
