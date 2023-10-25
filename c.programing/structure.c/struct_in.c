#include <stdio.h>
struct student

{
    int roll_no;
    char name;
    float marks;

};
int main()
{
    struct student s1;
    
        printf("enter the roll no = ");
        scanf("%d",&s1.roll_no);
        printf("enter the student name = ");
        scanf("%s",& s1.name);
        printf("enter the marks = ");
        scanf("%f",& s1.marks);

    
    return 0;
}
 