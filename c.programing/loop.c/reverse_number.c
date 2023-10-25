#include<stdio.h>
int main()
{
int a;
printf("enter a number = ");
scanf("%d",&a);
 int r=0;
 while(a>0){
 r=r*10;
 r=r+(a%10);

 a=a/10;
 }
 printf("the value is= %d",r);

    return 0;
}