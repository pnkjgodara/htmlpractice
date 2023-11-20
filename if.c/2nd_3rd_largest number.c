#include <stdio.h>
int main(){
    int a[5],i,largest=[0]
    printf("enter the valu");
    for (i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);
    }
    for (i=0;i<=4;i++)
    {
        printf("\n%d",a[i]);
    }
    for (i=0;i<=4;i++)
    {
        if(largest>a[i])
        largest=a[i];
    }

    return 0;
}