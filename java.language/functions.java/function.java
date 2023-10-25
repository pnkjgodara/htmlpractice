

import java.util.Scanner;

public class function {

     public static void printFactorial(int  n){
      int factorial = 1;
      for(int i=n; i<=1; i--){
        factorial = factorial *1;
      }
      System.out.println(factorial);
      return ;
     }

  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
   
   
  }
}