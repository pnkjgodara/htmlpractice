#include <stdio.h>
int main()
{
int n;
printf("enter the number = ");
scanf("%d",&n);
 if(n>=0&&n<=10)
 {printf("the number between 0 or 10");}
 else if(n>=11&&n<=20)
 {printf("this number between 11 or 20");}
 else if(n>=21&&n<=30)
 {printf("this value is between 21 or 30");}
 else if(n>=31&&n<=40)
 {printf("this number between 31 or 40");}
 else
 {printf("grater than 40 ");}



    return 0;
}