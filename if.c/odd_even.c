#include <stdio.h>
int main()
{

    int i,a,b;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            a++;
            printf("even%d\n",i);
        }
        else
        {
            b++;
            printf("odd%d\n",b);
        }
    }
    printf("even no.= %d\n",a);
    printf("odd no.= %d\n",b);

    return 0;

}