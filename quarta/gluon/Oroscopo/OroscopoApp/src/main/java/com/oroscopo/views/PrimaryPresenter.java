package com.oroscopo.views;

import com.gluonhq.charm.glisten.application.MobileApplication;
import com.gluonhq.charm.glisten.control.AppBar;
import com.gluonhq.charm.glisten.mvc.View;
import com.gluonhq.charm.glisten.visual.MaterialDesignIcon;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.DatePicker;
import javafx.scene.control.Label;

public class PrimaryPresenter {

    @FXML
    private View primary;

    
    @FXML
    private Label lblDataNascita;
    @FXML
    private Button btnOroscopo;
    @FXML
    private DatePicker dteDataNascita;
    @FXML
    private Label lblSegno;
    @FXML
    private Label lblOroscopo;

    public void initialize() {
        primary.showingProperty().addListener((obs, oldValue, newValue) -> {
            if (newValue) {
                AppBar appBar = MobileApplication.getInstance().getAppBar();
                appBar.setNavIcon(MaterialDesignIcon.MENU.button(e -> 
                        MobileApplication.getInstance().getDrawer().open()));
                appBar.setTitleText("Primary");
                appBar.getActionItems().add(MaterialDesignIcon.SEARCH.button(e -> 
                        System.out.println("Search")));
            }
        });
    }
    
    
    @FXML
    private void btnOroscopoClick(ActionEvent event) {
        lblSegno.setText(GestoreOroscopo.getSegno(null));
        lblOroscopo.setText(GestoreOroscopo.getOroscopo());
    }
    
}
