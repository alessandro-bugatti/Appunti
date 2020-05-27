package com.oroscopo.views;

import com.gluonhq.charm.glisten.animation.BounceInRightTransition;
import com.gluonhq.charm.glisten.application.MobileApplication;
import static com.gluonhq.charm.glisten.application.MobileApplication.HOME_VIEW;
import com.gluonhq.charm.glisten.control.AppBar;
import com.gluonhq.charm.glisten.control.FloatingActionButton;
import com.gluonhq.charm.glisten.control.TextField;
import com.gluonhq.charm.glisten.mvc.View;
import com.gluonhq.charm.glisten.visual.MaterialDesignIcon;
import java.time.LocalDate;
import javafx.fxml.FXML;
import javafx.scene.control.DatePicker;

public class SecondaryPresenter {

    @FXML
    private View secondary;
    @FXML
    private TextField txtNome;
    @FXML
    private TextField txtCognome;
    @FXML
    private DatePicker dataNascita;

    public void initialize() {
        secondary.setShowTransitionFactory(BounceInRightTransition::new);
        
        FloatingActionButton fab = new FloatingActionButton(MaterialDesignIcon.ADD_CIRCLE.text,
                e -> {
                    Persona p = new Persona(txtCognome.getText(), txtNome.getText(), dataNascita.getValue());
                    GestorePersone.add(p);
                    System.out.println(GestorePersone.getPersone());
                    MobileApplication.getInstance().showMessage("Persona aggiunta con successo");
                    MobileApplication.getInstance().switchView(HOME_VIEW);
                
                }
        );
        fab.showOn(secondary);
        
        secondary.showingProperty().addListener((obs, oldValue, newValue) -> {
            if (newValue) {
                AppBar appBar = MobileApplication.getInstance().getAppBar();
                appBar.setNavIcon(MaterialDesignIcon.MENU.button(e -> 
                        MobileApplication.getInstance().getDrawer().open()));
                appBar.setTitleText("Secondary");
                appBar.getActionItems().add(MaterialDesignIcon.FAVORITE.button(e -> 
                        System.out.println("Favorite")));
            }
        });
    }
}
