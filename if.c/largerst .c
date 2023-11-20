#include <stdio.h>
int main() {
int a[5],i,largest = a[0];
printf ("enter the number\n");
for(i=0;i<=4;i++);
{
    scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)

{
    printf("\n%d",a[i]);

}
for(i=0;i<=4;i++)
{
    if(largest>a[i])
    (largest=a[i]);
    {
        printf("\nlargest %d",largest);
    }

}


return 0;
}

