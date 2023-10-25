import java.util.*;

class tut
{
    public static void main (String[] args)
    {
    int i,j;
    int n =5;
    for(i=1; i<=5; i++){
      for(j=n; j>=1; j--){
        int sum = i-j;
        if(sum * 6 == 0){
          System.out.print(" *");
        }
        else{
          System.out.print(" "+j);
        }
      }
      System.out.println();
    }
  }}