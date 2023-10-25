#include<stdio.h>
int main()
{

    int n,i;
    printf("enter the number = ");
    scanf("%d",&n);

    int p=1;
    for(i=1;i<=n;i++){
        p=p*i;
    }
    printf("the factorial number = %d",p);
}