package Six;

import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.VBox;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

public class Fz134 extends Application {
    @Override
    public void start(Stage primaryStage) {
        try {
            VBox box = new VBox();
            FlowPane flowPane = new FlowPane();
            GridPane gridPane = new GridPane();
            box.getChildren().add(flowPane);
            box.getChildren().add(gridPane);
            TextField Number1 = new TextField();
            Number1.setPrefSize(50, 20);
            TextField Number2 = new TextField();
            Number2.setPrefSize(50, 20);
            TextField Result = new TextField();
            Result.setPrefSize(100, 20);
            Result.setEditable(false);

            flowPane.getChildren().addAll(new Label("Number1:"), Number1, new Label("Number2:"), Number2,
                    new Label("Result:"), Result);

            Button Add = new Button("Add");
            // Create the handler class (listener class)
            class AddHandler implements EventHandler<ActionEvent> {
            @Override // Override the handle method
            public void handle(ActionEvent e) {
                Result.setText("" + (Double.parseDouble(Number1.getText()) + Double.parseDouble(Number2.getText())));
            }
			  }
            // register the handler
            Add.setOnAction(new AddHandler());

            Button Subtract = new Button("Subtract");
            // Create and register the handler (listener )
            Subtract.setOnAction(new EventHandler<ActionEvent>() {
                @Override // Override the handle method
                public void handle(ActionEvent e) {
                    Result.setText("" + (Double.parseDouble(Number1.getText()) - Double.parseDouble(Number2.getText())));
                }
            });

            Button Multiply = new Button("Multiply");
            Multiply.setOnAction(e-> {
                Result.setText("" + (Double.parseDouble(Number1.getText()) * Double.parseDouble(Number2.getText())));
            });

            Button Divide = new Button("Divide");
            Divide.setOnAction(e -> {
                try {
                    if(Double.parseDouble(Number2.getText())==0)
                        throw new ArithmeticException("Divisor cannot be zero");
                    Result.setText(
                            "" + (Double.parseDouble(Number1.getText()) / Double.parseDouble(Number2.getText())));
                } catch (ArithmeticException ex) {
                    Result.setText("除数为零错误！");
                }
            });

            gridPane.add(Add, 1, 0);
            gridPane.add(Subtract, 2, 0);
            gridPane.add(Multiply, 3, 0);
            gridPane.add(Divide, 4, 0);
            Scene scene = new Scene(box, 320, 400);
            primaryStage.setTitle("Calculator"); // Set the stage title
            primaryStage.setScene(scene);
            primaryStage.show();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        launch(args);
    }
}
