#include<iostream>
using namespace std; 

class car
{
  public:char name[50];
         char color[50];
         char fule_type[100];
         long price;
         char car_type[100];
         string transmission;

     void car_info()
            
    {
        cout<<"enter the name of car = ";
        cin>>name;
        cout<<"enter the color of car = ";
        cin>>color;
        cout<<"enter the fule type of car = ";
        cin>>fule_type;
        cout<<"enter the price of car = ";
        cin>>price;
        cout<<"enter the typr of car = ";
        cin>>car_type;
        cout<<"enter the transmission of car = ";
        cin>>transmission;

    }
     void car_display()
    {
      cout<<"name"<<name<<endl;
      cout<<"color"<<color<<endl;
      cout<<"fule_type"<<fule_type<<endl;
      cout<<"price"<<price<<endl;
      cout<<"car_type"<<car_type<<endl;
      cout<<"transmission"<<transmission<<endl;
    }          
};

    class employee
    {
      public:int email_id;
             char name;
             int age;
             string employee_department;

        void employee_info()
       {
         cout<<"enter the email id = ";
         cin>>email_id;
         cout<<"enter the employee name = ";
         cin>>name;
         cout<<"enter the employee age = ";
         cin>>age;
         cout<<"enter the department = ";
         cin>>employee_department;
         
       }     
       void employee_display()
       {
        cout<<"email_id"<<email_id<<endl;
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"employee_department"<<employee_department<<endl;

       } 
    };
         
         class car_showroom
    {
        char showroom_name[50];
        char address[50];
        char manager_name[50];
        char city[50];
        char state[50];
        int total_employee;
        int total_car;


      void showroom_info()
      {
        cout<<"enter the showroom name = ";
        cin>>showroom_name;
        cout<<"enter the address = ";
        cin>>address;
        cout<<"enter the mannager name = ";
        cin>>manager_name;
        cout<<"enter the city = ";
        cin>>city;
        cout<<"enter the state = ";
        cin>>state;
        cout<<"enter the total employee = ";
        cin>>total_employee;
        cout<<"enter the total car = ";
        cin>>total_car;
      } 

      void display_showroom()
      {
        cout<<"showroom_name"<<showroom_name<<endl;
        cout<<"address"<<address<<endl;
        cout<<"manager_name"<<manager_name<<endl;
        cout<<"city"<<city<<endl;
        cout<<"state"<<state<<endl;
        cout<<"total_employee"<<total_employee<<endl;
        cout<<"total_car"<<total_car<<endl;

      }
    };     