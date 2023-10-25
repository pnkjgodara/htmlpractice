#include <stdio.h>
#include <string.h>
void add(); 
void display();  
void search(); 
void update();
int j,k,l,n,o,m,r,w;
struct date
    {
        int day;
        int month;
        int year;
    };
    struct address
    {
        int house_no;
        char town[10];
        char district[10];
        char state[10];
        char country[10];
       
    };
    struct employee
    {
        int employee_id;
        char name[20];
        int sallary;
        long long int mobile_no;
        char department[20];
     struct date d1;
     struct address a1;
     }e1;    
    
    
int main()
{
        int choice,z;
    char ch='y';
    

     
    do{
    printf("1 :  Add employee details ");
    printf("\n2 :  searching employee details ");
    printf("\n3 :  update employee details "); 
    printf("\n4 :  display employee details ");
    printf("\n5 :  delete employee details ");
    printf("\nenter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
             add();
            // printf("if you want to continue enter  =  " );
             // scanf("%d",z);
             //scanf("%s",ch1);

    //while (ch=='p');
        break;
        case 2: search();
        break;
        case 3: update();
        break;
        case 4: display();
        break;
        case 5:  
        break;
        default  : printf("invalid choice");
        
    
}
 
    
printf("\ndo you want to continue = ");
    
       scanf("%d",&z);
       scanf("%s",&ch);
        }
       while (ch=='y');
       return 0;
        };

void add()
{   FILE *f1;

char ch1='y';
    do
    {
        /* code */
   
    
       f1 = fopen("add.txt", "a"); 
       if (f1 == NULL)  
      {  
       printf("File does not exists \n");  
        
    }  
      int z;
      char ch='p';
      
      printf("enter the day = ");
      scanf("%d",&e1.d1.day);
    if(e1.d1.day>=1 || e1.d1.day<=31)
    getchar();
    printf("enter the month = ");
    scanf("%d",&e1.d1.month);
    if(e1.d1.month>=1&&e1.d1.month<=12)
    getchar();
    printf("enter the year = ");
    scanf("%d",&e1.d1.year);
    if(e1.d1.year==2023)
    getchar();
    else
    {
        printf("invalid date and time");
        
    }
    
    printf("enter the employee name = ");
    fgets(e1.name,20,stdin);
   getchar();
   
    printf("enter the employee ID = ");
    scanf("%d",&e1.employee_id);
    getchar();
    printf("enter the sallary = ");
    scanf("%d",&e1.sallary);
    getchar();
    printf("enter the mobile no = ");
    scanf("%ld",&e1.mobile_no);
    getchar();
    printf("enter the department = ");
   fgets(e1.department,20,stdin);
   getchar();
    printf("enter the house no = ");
    scanf("%d",&e1.a1.house_no);
    getchar();
    printf("enter the town = ");
    fgets(e1.a1.town,10,stdin);
    getchar();
    printf("enter the district = ");
    fgets(e1.a1.district,10,stdin);
    getchar();
    printf("enter the state = ");
    fgets(e1.a1.state,10,stdin);
    getchar();
    printf("enter the country = ");
    fgets(e1.a1.country,10,stdin);
    getchar();

   fwrite(&e1,sizeof(e1),1,f1);
 printf("record added");
    
   printf("if you want to continue enter  =  " );
    //scanf("%d",z);
    scanf("%s",&ch1);
    }
    while (ch1=='y');
 fclose(f1);
}
void display() 
{
    FILE *f1;
    f1=fopen("add.txt","r");
   //printf(" \nSR NO  ||\tDAY  ||\tMONTH  ||  YEAR\t||  NAME\t||  EMPLOYEE ID\t||  SALLARY\t||  MOBILE NO\t||  DEPARTMENT\t||  HOUSE NO\t||  TOWN\t||  DISTRICT\t||  STATE\t||  COUNTRY\t||");
    //printf("\n%d  ||\t%d  ||\t%d  ||\t%d  ||\t%s  ||\t%d  ||\t%d  ||\t%lld  ||\t%s  ||\t%d  ||\t%s  ||\t%s  ||\t%s  ||\t%s  || ",e1.d1.day,e1.d1.month,e1.d1.year,e1.name,e1.employee_id,e1.sallary,e1.mobile_no,e1.department,e1.a1.house_no,e1.a1.town,e1.a1.district,e1.a1.state,e1.a1.country);
  while(fread(&e1,sizeof(e1),1,f1)==1)
  {
   printf("\ndate = %d",e1.d1.day);
   printf("\nmonth = %d",e1.d1.month);
    printf("\nyear = %d",e1.d1.year);
     printf("\n employee name = %s",e1.name);
     printf("\n employee id = %d",e1.employee_id);
     printf("\n sallary = %d",e1.sallary);
     printf("\n mobile no%ld",e1.mobile_no);
     printf("\n department = %s",e1.department);
     printf("\n house no = %d",e1.a1.house_no);
     printf("\n town = %s",e1.a1.town);
     printf("\n district = %s",e1.a1.district);
     printf("\n state = %s",e1.a1.state);
     printf("\n country = %s",e1.a1.country);
  }
    fclose(f1);

}
void search()
    {
        int a;
       FILE *f1;
       f1=fopen("add.txt","r");
       printf("enter the employee id");
       scanf("%d",&a);
       while(fread(&e1,sizeof(e1),1,f1))
       {
        if(e1.employee_id==a)
       {
     printf("\ndate = %d",e1.d1.day);
     printf("\nmonth = %d",e1.d1.month);
     printf("\nyear = %d",e1.d1.year);
     printf("\n employee name = %s",e1.name);
     printf("\n employee id = %d",e1.employee_id);
     printf("\n sallary = %d",e1.sallary);
     printf("\n mobile no%ld",e1.mobile_no);
     printf("\n department = %s",e1.department);
     printf("\n house no = %d",e1.a1.house_no);
     printf("\n town = %s",e1.a1.town);
     printf("\n district = %s",e1.a1.district);
     printf("\n state = %s",e1.a1.state);
     printf("\n country = %s",e1.a1.country);

        getchar();
       }
       fclose(f1);
       }
        
    }
void update()
{
    FILE *f1;
    f1=fopen("add.txt","r+");
    printf("enter the employee id for modify = ");
    sacnf("%d",&e1.employee_id);
}