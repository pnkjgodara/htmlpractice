import java.awt.*;

public class pro1 extends Frame  {

       public pro1(){
   
       Frame frame = new Frame( "hello world");
       TextField textField = new TextField();
       textField.setBackground(Color.CYAN);
       textField.setBounds(20,120,150,30);

       Label label = new Label("hello friends");
       label.setBackground(Color.gray);
       label.setBounds(20,90,150,30);

       Button button = new Button(" click hear");
       button.setBackground(Color.red);
       button.setForeground(Color.white);
       button.setBounds(20,40,80,30);
       frame.add(label);
       frame.add(button);
       frame.add(textField);

       frame.setSize(400,300);
       frame.setLayout(null);
       frame.setVisible(true);    
             }
      
       public static void main(String[] args) {
       new pro1();

        //pro1 objectPro1 = new pro1();
    }
}
