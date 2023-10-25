import java.awt.*;



public class awtframe extends Frame {


    public awtframe(){
        Frame frame = new Frame("hellow world ");
        frame.setSize(800,600);
        frame.setVisible(true);
        frame.setLayout(null);
        

        Button button = new Button("click");
        button.setBounds(20,50,50,30);
        frame.add(button);
        button.setBackground(Color.black);
        button.setForeground(Color.white);
        


        Checkbox checkbox = new Checkbox("java");
        checkbox.setBounds(20,200,50,30);
        frame.add(checkbox);

        Checkbox checkbox2 = new Checkbox("python");
        checkbox2.setBounds(30,250,50,30);
        frame.add(checkbox2);


        TextField textField = new TextField();
        textField.setBounds(20,150,80,30);
        textField.setBackground(Color.gray);
        frame.add(textField);

        Label label = new Label("welcome");
        label.setBounds(20,100,80,30);
        frame.add(label);
        label.setBackground(Color.CYAN);
        

    }

    public static void main(String[] args) {
       new awtframe(); 
    }
    
}
