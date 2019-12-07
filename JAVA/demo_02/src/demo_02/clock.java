package demo_02;

import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.control.Button;
import javafx.geometry.Insets;
import javafx.geometry.Pos;

public class demo_02 extends Application{
    @Override
    public void start(Stage primaryStage)
    {
        VBox pane = new VBox(10);
        pane.setAlignment(Pos.CENTER);
        pane.setPadding(new Insets(20, 20, 20, 20));
        HBox hbox1 = new HBox(10);
        Label lbN1 = new Label("Number1: ");
        Label lbN2 = new Label("Number2: ");
        Label lbR = new Label("Result: ");
        TextField tf1 = new TextField();
        tf1.setPrefColumnCount(3);
        TextField tf2 = new TextField();
        tf2.setPrefColumnCount(3);
        TextField tfR = new TextField();
        tfR.setPrefColumnCount(3);
        tfR.setEditable(false);
        hbox1.getChildren().addAll(lbN1, tf1, lbN2, tf2, lbR, tfR);
        pane.getChildren().add(hbox1);

        Button btAdd = new Button("Add");
        Button btSubtract = new Button("Subtract");
        Button btMultiply = new Button("Multiply");
        Button btDivide = new Button("Divide");
        HBox hbox2 = new HBox(10);
        hbox2.getChildren().addAll(btAdd, btSubtract, btMultiply, btDivide);
        pane.getChildren().add(hbox2);

        btAdd.setOnAction(e -> {
        double result = Double.parseDouble(tf1.getText()) + Double.parseDouble(tf2.getText());
        tfR.setText(result + "");
            });
        btSubtract.setOnAction(e -> {
        double result = Double.parseDouble(tf1.getText()) - Double.parseDouble(tf2.getText());
        tfR.setText(result + "");
        });
        btMultiply.setOnAction(e -> {
        double result = Double.parseDouble(tf1.getText()) * Double.parseDouble(tf2.getText());
        tfR.setText(result + "");
        });
        btDivide.setOnAction(e -> {
            if (Double.parseDouble(tf2.getText()) != 0)
            {
                double result = Double.parseDouble(tf1.getText()) / Double.parseDouble(tf2.getText());
                tfR.setText(result + "");
            }
            else
                tfR.setText("Wrong");
        });

        Scene scene = new Scene(pane);
        primaryStage.setTitle("SimpleCalculate");
        primaryStage.setScene(scene);
        primaryStage.show();
        
       
    }
    
    public static void main(String[] args) {
        launch(args);
    }
}