#include<stdio.h>
int main()
{
    int a[5][5],i,j,sum=0;
    printf("enter the valu\n");
    for (i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }  
    
        
        
    

    

    for(i=0;i<=4;i++)
    {
        printf("\n");
    
    for(j=0;j<=4;j++)
    {
        printf("%d\t",a[i][j]);
    }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        sum=sum+a[i][j];
    }      
            printf("\nsum=%d",sum);
        
    

    return 0;
}