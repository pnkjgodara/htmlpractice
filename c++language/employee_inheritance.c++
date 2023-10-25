#include <iostream>
using namespace std;


class contact
{
    public:string person_name;
           string email_id;
           long mobile_no;

      void contact_info()
      {
        cout<<"enetr the person name = ";
        cin>>person_name;
        cout<<"enter email = ";
        cin>>email_id;
        cout<<"enter the mobile no = ";
        cin>>mobile_no;
      }  

      void display_contact()
      {
        cout<<"person name = "<<person_name<<endl;
        cout<<"email_id = "<<email_id<<endl;
        cout<<"mobile_no = "<<mobile_no<<endl;
      }   

};
     class company
     {
        public:char company_name;
               char website_name;
               char designation;
               char city;
               char country;
               char address;
               int pin;

         void info_company()
         {
            cout<<"enter company name = ";
            cin>>company_name;
            cout<<"enter the website = ";
            cin>>website_name;
            cout<<"enter the designation = ";
            cin>>designation;
            cout<<"enter the city name = ";
            cin>>city;
            cout<<"enter the country name = ";
            cin>>country;
            cout<<"enter the address = ";
            cin>>address;
            cout<<"entre the pin no = ";
            cin>>pin;

         }   
         void display_company()
         {
            cout<<"company_name = "<<company_name<<endl;
            cout<<"website_name = "<<website_name<<endl;
            cout<<"designation = "<<designation<<endl;
            cout<<"city = "<<city<<endl;
            cout<<"country = "<<country<<endl;
            cout<<"address = "<<country<<endl;
            cout<<"pin"<<pin<<endl;

         }   
     };
         class employee :public contact,public company
{
   public:
string name;
string city;
string country;
string address;
int pin_no;
int d,m,y;
int dd,mm,yy;

void info_employee()

{
   contact_info();
   info_company();
   
    cout<<"enter the name of employee = ";
    cin>>name;
    cout<<"enter the city name = ";
    cin>>city;
    cout<<"enter the country name = ";
    cin>>country;
    cout<<"enter the address = ";
    cin>>address;
    cout<<"enter the pin no = ";
    cin>>pin_no;
    cout<<"enter the date of birth = ";
    cin>>d,m,y;
    cout<<"enter the date of joining = ";
    cin>>dd,mm,yy;

}
void display_employee()
{
display_company();
display_contact();
    cout<<"name"<<name<<endl;
    cout<<"city"<<city<<endl;
    cout<<"country"<<country<<endl;
    cout<<"address"<<address<<endl;
    cout<<"pin_no"<<pin_no<<endl;
    cout<<"date of birth(d.o.b) = "<<d<<y<<m<<endl;
    cout<<"date of joiining(d.o.j) = "<<dd<<mm<<yy<<endl;
}
};
         class hrm:public employee
         {
            public:string department;
                   int salary;
                   int bonus;


         void info_hrm()

         {
            info_employee();
            cout<<"enter the department = ";
            cin>>department;
            cout<<"enter the hr salary = ";
            cin>>salary;
            cout<<"enter hr the bonus";
            cin>>bonus;
         }          
               void display_hrm()
               {
                  display_employee();
                cout<<"department = "<<department<<endl;
                cout<<"salary = "<<salary<<endl;
                cout<<"bonus = "<<bonus<<endl;
               }    
             
         };

         class sales_manager:public employee
         {
            public:
                   string dasignation;
                   int salary;
                   int bonus;
                   int total;


                   void sales_manager_info(){
                     info_employee();
                     cout<<"enter the dasignation = ";
                     cin>>dasignation;
                     cout<<"enter the salary of sales manager = ";
                     cin>>salary;
                     cout<<"enter tha bonus = ";
                     cin>>bonus;

                   }

                   void display_sales_manager(){
                     display_employee();
                     cout<<"dasignation"<<dasignation<<endl;
                     cout<<"salary"<<salary<<endl;
                     cout<<"bonus"<<bonus<<endl;
                     total=salary+bonus;
                     cout<<"total"<<total<<endl;
                   }                  
         };

         int main(){
            int choice;
            hrm h1;
            sales_manager s1;

            do{
               cout<<".select from blow option"<<endl;
               cout<<"1.enter details for hrm department"<<endl;
               cout<<"2.enter details for sales department"<<endl;
               cout<<"3.display hrm employee details"<<endl;
               cout<<"4.display sales employee details"<<endl;
               cout<<"5.exit"<<endl;
               cout<<"enter your choice = ";
               cin>>choice;
               cout<<"\n";

               switch(choice){
                  case 1:
                   h1.info_hrm();
                   break;
                   case 2:
                   s1.sales_manager_info();
                   break;
                   case 3:
                   h1.display_hrm();
                   break;
                   case 4:
                   s1.display_sales_manager();
                   break;
                   case 5:
                   cout<<"~~thanks for chosing~~"<<endl;
                   break;
                   default:
                   cout<<"invalid command"<<endl;
                   break;

               }
            }     while (choice!=5);

            return 0;
         }
            
            