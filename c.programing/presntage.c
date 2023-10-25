#include <stdio.h>
int main()
{
 float math,science,history,english;

  float total,presntage;

  printf("math marks = ");
  scanf("%f",&math);
  printf("science marks = ");
  scanf("%f",&science);
  printf("history marks = ");
  scanf("%f",&history);
  printf("english marks = ");
  scanf("%f",&english);
  total=(math+science+history+english);
  printf("\ntotal = %f",total);
  presntage=(total/5);
  printf("\npresntage = %f",presntage);
if(presntage>=90&&presntage<=100)
{
    printf("\ngrade a");
}
else if(presntage>=80&&presntage<=90)
{
    printf("\ngrade b");
}
else if(presntage>=70&&presntage<=80)
{
    printf("\ngrade c");
}
else if(presntage>=50&&presntage<=70)
{
    printf("\ngrade d");
}
else
{
 printf("\nyou are fail");
}
    return 0;
}