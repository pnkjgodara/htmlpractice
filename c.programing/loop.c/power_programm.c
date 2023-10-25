#include <stdio.h>
int main()
{

    int a,b,i;
    printf("enter power = ");
    scanf("%d",&a);
    printf("enter bass");
    scanf("%d",&b);
    int power =1;
    for(i=1;i<=b;i++){
    power=power*a;
    }
    printf("%d is rised to the power %d is = %d",a,b,power);

    return 0;

}