#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("first number = ");
    scanf("%d",&a);
    printf("second number = ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("swap first number = %d\n",a);
    printf("swap second  number = %d",b);

    return 0;
}