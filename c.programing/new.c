#include<stdio.h>
int main()
{
  int a[5];
   int i;
printf("enter the value = ");
   scanf ("%d",&a);
   for (i=0;i<=4;i++){
       scanf("%d",&a[i]);
   }
   printf ("value\tindex\tposition\n");
   for(i=0;i<=4;i++){
       printf("\n%d",a[i]);
   printf("\t%d",i);
       printf("\t%d",i+1);
   }

return 0;

}