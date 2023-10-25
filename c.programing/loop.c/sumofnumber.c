#include<stdio.h>
int main(){
int a,i;
printf("enter the number = ");
scanf("%d",&a);

int sum=0;

    if(a%2==0){
    sum= -a/2;
    }
    else{
    sum=-a/2+a;
    }


printf("tha value is : = %d",sum);

    return 0;
}