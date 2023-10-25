#include<stdio.h>
int main(){

int a,c;
int b=0;
printf("enter the number = ");
scanf("%d",&a);
while(a>0){
    b=b*10;
    b=b+(a%10);
    a=a/10;
}
printf("the reverse vlue = %d",b);
int j=b;
c=a+j;
printf("\nsum valu= %d",c);



    return 0;
}