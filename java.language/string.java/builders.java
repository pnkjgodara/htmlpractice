import java.util.*;
public class builders {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("pnkj");
        System.out.println(sb);

        //char At index 0
      //  System.out.println(sb.charAt(0));

        // set char At index
       // sb.setCharAt(0,'t');
       // System.out.println(sb);

       //insrt
       sb.insert(1,'a');
       System.out.println(sb);

       //delete tha extra
       sb.delete(1,2);
       System.out.println(sb);

    }
}
