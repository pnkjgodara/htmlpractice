#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
int choice1;
  class login
{
   public:
          char user_id[20];
          int password;

          public:
          void login_details()
          {
            cout<<"enter user id = ";
            cin>>user_id;
            cout<<"enter the password = ";
            cin>>password;

          }

          void login_display()
          {
            cout<<"user_id = "<<user_id<<endl;
            cout<<"password = "<<password<<endl;
          }
};
        class train_details
        {
            public:
                   int  train_number;
                   string class_type;
                   int date;
                   int seat_number;
                   string boardline;
                   string destination;
                   string train_name;

            public:
                   void set_data(){
                    train_details t;
                   cout<<"enter the train number = ";
                   cin>>train_number;
                   cout<<"enter the train class type =  ";
                   cin>>class_type;
                   cout<<"enter the date = ";
                   cin>>date;
                   cout<<"enter the seat number = ";
                   cin>>seat_number;
                   cout<<"enter the boardline = ";
                   cin>>boardline;
                   cout<<"enter the train destination = ";
                   cin>>destination;
                   cout<<"enterthe train name = ";
                   cin>>train_name;
                   }
                   void get_data()
                   {
                    cout<<"train_number = "<<train_number<<endl;
                    cout<<"class_type = "<<class_type<<endl;
                    cout<<"date = "<<date<<endl;
                    cout<<"seat_number = "<<seat_number<<endl;
                    cout<<"boardline = "<<boardline<<endl;
                    cout<<"destination = "<<destination<<endl;
                    cout<<"train_name = "<<train_name<<endl;

                   }
                   };      
                   class reservation
                   {
                     public:
                            string train_number;
                            string class_type1;
                            string class_type2;
                            int age;
                            int payment;
                            string category;
                            string book_id;
                            int number_of_passenger;
                            string train_name;
                            string boardline;
                            string destination;

                              
                public:
                       void  reservation_info()
                       {
                        cout<<"enter the train number =  ";
                        cin>>train_number;
                        cout<<"enter the class  type-1";
                        cin>>class_type1;
                        cout<<"enter the class type-2 = ";
                        cin>>class_type2;
                        cout<<"enter the age of passenger = ";
                        cin>>age;
                        cout<<"enter the ticket payment = ";
                        cin>>payment;
                        cout<<"entre the category = ";
                        cin>>category;
                        cout<<"enter the book id = ";
                        cin>>book_id;
                        cout<<"enter the number of passenger = ";
                        cin>>number_of_passenger;
                        cout<<"enter the train name = ";
                        cin>>train_name;
                        cout<<"enter the boardline = ";
                        cin>>boardline;
                        cout<<"enter the destination of train = ";
                        cin>>destination;
                       
                       }
                         void  reservation_display()
                         {
                           cout<<"train_number = "<<train_number<<endl;
                           cout<<"class_type1 = "<<class_type1<<endl;
                           cout<<"class_type2 = "<<class_type2<<endl;
                           cout<<"age = "<<age<<endl;
                           cout<<"payment = "<<payment<<endl;
                           cout<<"category = "<<category<<endl;
                           cout<<"book_id = "<<book_id<<endl;
                           cout<<"number_of_passenger = "<<number_of_passenger<<endl;
                           cout<<"train_name = "<<train_name<<endl;
                           cout<<"boardline = "<<boardline<<endl;
                           cout<<"destination = "<<destination<<endl;

                         }            


                   };     
              void back()
{
   
              cout<<" THANKS FOR VISITING ";
};
  void id()
          {
            string c;
            int d;
            cout<<"enter the user id = ";
            cin>>c;
            cout<<"enter the password = ";
            cin>>d;

          }
          


int main()
{
    int choice;
  
   fstream f1;
   login l;
    train_details t;
   
    reservation r;
  cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;
  cout<<"              ||      CHOOSE YOUR OPERATION     ||      "<<endl;
	cout<<"              ||--------------------------------||      "<<endl;
	cout<<"              ||      [1] ADMINISTRATION        ||      "<<endl;
	cout<<"              ||      [2] USER MODE             ||      "<<endl;
	cout<<"              ||      [3] EXIT                  ||      "<<endl;
	cout<<"              ||                                ||      "<<endl;
	cout<<"              ||                                ||      "<<endl;
	cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;
    cout<<"enter your choice = ";
    cin>>choice;
    switch(choice)
    {
            case 1: 
             int pass;
    cout<<" ENTER THE PASSWARD = ";
    cin>>pass;
    if(pass==12345678)
    {
            cout<<" WELCOME ";
            cout<<"\n";
          cout<<"              @**********************************@     "<<endl;
          cout<<"              ||          ADMINISTRATION        ||     "<<endl;
	        cout<<"              ||--------------------------------||     "<<endl;
	        cout<<"              ||      [1] ADD DETAILS           ||     "<<endl;
	        cout<<"              ||      [2] DISPLAY               ||     "<<endl;
	        cout<<"              ||      [3] MODIFY                ||     "<<endl;
	        cout<<"              ||      [4] DELETE                ||     "<<endl;
	        cout<<"              ||      [5] EXIT                  ||     "<<endl;
	        cout<<"              @**********************************@     "<<endl;
           cout<<" enter your choice = ";
                         cin>>choice1;
    
   
                         
                         switch(choice1)
                         {
                            case 1: f1.open("pnkj txt",ios::app);
                                    t.set_data();
                                    f1.write((char*)&t,sizeof(t));
                                    cout<<"train record added";
                                    f1.close();
                                    break;
                            case 2:f1.open("pnkj txt",ios::app);
                                   t.get_data();
                                   f1.read((char*)&t,sizeof(t));                                 
                                   f1.close();
                                    break;

                            case 3:
                            break;

                            case 4:
                            break;

                            case 5:
                            cout<<"************THANKS FOR VISTING**************";
                            break;
                            default :
                            cout<<"invlaid choice";  
                            break;      
                         }
    }

    else
    {
       cout<<"   WRONG PASSWARD ";
        cout<<"\n";
        break;
    }
    break;
    
                     
           case 2:
                  cout<<"\n";
                  int choice2;
                   

                   cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;
                   cout<<"              ||      CHOOSE YOUR OPERATION     ||      "<<endl;
	                 cout<<"              ||--------------------------------||      "<<endl;
                   cout<<"              ||      [1] SIGN_UP               ||      "<<endl;
	                 cout<<"              ||      [2] login                 ||      "<<endl;
	                 cout<<"              ||                                ||      "<<endl;
	                 cout<<"              ||                                ||      "<<endl;
	                 cout<<"              ||                                ||      "<<endl;
	                 cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;       
                  cout<<"enter the choice = ";
                  cin>>choice2;
                  switch(choice2)
                  {
                    case 1:
                     f1.open("user_id txt",ios::app);
                     l.login_details();
                     f1.write((char*)&l,sizeof(l));
                     cout<<"creat user id ";
                     break;
                     case 2 : int pass1;
                             char user_id3[20];
                             f1.open("user_id.txt",ios::in);
                             cout<<"create the user_id = ";
                             cin>>user_id3;
                             cout<<"password = ";
                             cin>>pass1;
                             f1.read((char*)&l,sizeof(l));
                             l.login_display();
                             int j=strcmp(l.user_id,user_id3);
                             if(j==0&&(l.password==pass1))
                             {


                              cout<<"login is successful now you can reserve your train ";
                   cout<<"\n";
                   cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;
                   cout<<"              ||      CHOOSE YOUR OPERATION     ||      "<<endl;
	                 cout<<"              ||--------------------------------||      "<<endl;
                   cout<<"              ||      [1] RESERVATION           ||      "<<endl;
	                 cout<<"              ||      [2] cancel(delete)        ||      "<<endl;
	                 cout<<"              ||      [3] EXIT                  ||      "<<endl;
	                 cout<<"              ||                                ||      "<<endl;
	                 cout<<"              ||                                ||      "<<endl;
	                 cout<<"              !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!      "<<endl;  
                             
                             int m;
                             cout<<"enter your choice = ";
                             cin>>m;
                             switch(m)
                             {
                              case 1:
                              f1.open("user_id.txt",ios::in);
                              f1.read((char*)&l,sizeof(l));
                              f1.close();
                              }
                              } 
                              else
                              {
                                cout<<"wrong user id ";
                              }
                              f1.close();

                              }
                              case 3: back();

          
                             


           
          }          
    }


        