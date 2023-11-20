#include <stdio.h>
int main(){
int a[5],j,i,count;
printf("enter the valu");
for (i=0;i<=4;i++)
{scanf("%d",&a[i]);}
for (i=0;i<=4;i++)
{printf("\n%d",a[i]);}

  for (i=0;i<=4;i++)
  {
    for(j=i+1;j<=4;j++)
    {
    if (a[i]==a[j])
    {
        printf("\ndupilicat no =%d",a[i]);
    }
  }  
  }
  for(i=0;i<=4;i++)

    return 0;
}
