
import java.util.*;

public class fourStar {
    public static void main(String []args){
        int i,j;
        int n=4;
        for(i=n; i>=1; i--){
            for(j=1; j<=4; j++){
                if(i>j){
                    System.out.print(" *");
                }
                else{
                    System.out.print(" "+j);
                }
                for(j=n; j>=1; j--){
                    if(j>i){
                        System.out.print(" *");
                    }
                    else{
                        System.out.print(" "+j);
                    }
                }
            }System.out.println();
        }

    }
}
