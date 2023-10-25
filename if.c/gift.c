#include<stdio.h>
int main()
{
   int math,science;
   printf("enter the subject ");
   printf("\nmaths marks = ");
   scanf("\n%d",&math);
   printf("\nscience marks = ");
   scanf("\n%d",&science);
  if(math >=33 && science>=33)
   {
    printf("\nyour gift 45 rupes");
   }
   else if(math>=33)
   {
    printf("\nyour gift 15 rupes");
   }
   else if(science>=33)
   {
    printf("\nyour gift 15 rupes");
   }
   else{
     printf("Sorry!! You are fail.");
   }
   
   
    return 0;
}