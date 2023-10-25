#include<stdio.h>
int main()
{
    int i,j,flag=0;
    printf("enter a number = ");
    scanf("%d",&j);
    for(i=2;i<=j/2;i++)
    {
        if(j%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("")
    }

    return 0;
}