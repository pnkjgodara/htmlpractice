#include <stdio.h>
void add();
 struct date
    {
        int day;
        int month;
        int year;
    };
    struct employee
    {
        int employee_id;
        char name;
        int sallery;
        int mobile_no;
        char department;

    };
    struct address
    {
        int house_no;
        char town;
        char state;
        char country;
    };
    int main()
    {
        add();
    }
    void add()
    {
    struct date d1;
    struct employee e1;

        printf("enter the day = ");
        scanf("%d",&d1.day);
        printf("enter the month = ");
        scanf("%d",&d1.month);
        printf("enter the year = ");
        scanf("%d",&d1.year);
        printf("emter the employee name = ");
        scanf("%c",&e1.name);
        printf("enter the employee id = ");
        scanf("%d",&e1.employee_id);
        printf("enter the sallery = ");
        scanf("%d",&e1.sallery);
        printf("enter the mobile no = ");
        scanf("%d",&e1.mobile_no);
        printf("enter the dipartment = ");
        scanf("%c",&e1.department);

    }
    
