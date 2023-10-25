#include <stdio.h>
struct student
{
 int roll_no;
 char name ;
 int subject[5];
 float marks[5];
};

int main()
{
    int i,j;
    struct student s1;
    printf("enter the roll number = ");
    scanf("%d",&s1.roll_no);
    printf("enter the name = ");
    scanf("%s",&s1.name);
    for(i=0;i<=4;i++)
{
printf("enter the subject = ");
scanf("%s",&s1.subject[i]);
  //for(j=0;j<1;j++)//
{
    printf("enter the marks =");
    scanf("%f",&s1.marks[i]);
}
}
    
} 