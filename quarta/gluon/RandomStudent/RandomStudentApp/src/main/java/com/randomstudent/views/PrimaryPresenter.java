package com.randomstudent.views;

import com.gluonhq.charm.glisten.application.MobileApplication;
import com.gluonhq.charm.glisten.control.AppBar;
import com.gluonhq.charm.glisten.mvc.View;
import com.gluonhq.charm.glisten.visual.MaterialDesignIcon;
import com.randomstudent.model.Classe;
import java.util.ArrayList;
import java.util.Arrays;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;

public class PrimaryPresenter {

    @FXML
    private View primary;

    @FXML
    private Label label;
    @FXML
    private ComboBox<Classe> cmbClassi;

    public void initialize() {
        primary.showingProperty().addListener((obs, oldValue, newValue) -> {
            if (newValue) {
                AppBar appBar = MobileApplication.getInstance().getAppBar();
                appBar.setNavIcon(MaterialDesignIcon.MENU.button(e -> 
                        MobileApplication.getInstance().getDrawer().open()));
                appBar.setTitleText("Random studente");
                //appBar.getActionItems().add(MaterialDesignIcon.SEARCH.button(e -> 
                //        System.out.println("Search")));
            }
        });
        cmbClassi.getItems().add(
                new Classe("3AI", new ArrayList<>(Arrays.asList(
                "BIRBETTO ALESSIO",
                "NORDILLO GIANBETTINO",
                "ROSPETTONI ISOLINA"
                )))
        );
        cmbClassi.getItems().add(
                new Classe("4AI", new ArrayList<>(Arrays.asList(
                "ALLEONI SHREK",
                "POSTOLETTI ANNINA",
                "STONDORTI VETRONE")))
        );
        cmbClassi.getItems().add(
                new Classe("5AI", new ArrayList<>(Arrays.asList(
                "CORNESTI LAURINETTA",
                "FOMIGIUNI MUFFOLO",
                "MASTAMANGHI ROMULADO")))
        );
    }
    
    @FXML
    void buttonClick() {
        label.setText(cmbClassi.getValue().estraiStudente());
    }

    @FXML
    private void cmbChange(ActionEvent event) {
        label.setText("");
    }
    
}
