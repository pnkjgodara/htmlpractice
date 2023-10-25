#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int choice1;
class login
{
    public:
 char user_id[20];
 int passward;
public:
     void login_details()
{
      cout<<"enter the user id = ";
      cin>>user_id;
      cout<<"enter the passward = ";
      cin>>passward;

}
void login_display()
{
    cout<<"USER ID = "<<user_id<<endl;
    cout<<" PASSWARD = "<<passward<<endl;
}

};
class train_details
{
public:
    int train_no;
    string class_type;
    int date;
    int train_seat;
    string boarding;
    string destination;
    string train_name;
    int price ;

public:
    void set_data()
    {
        train_details t;
        cout << "ENTER THE TRAIN NO = ";
        cin >> train_no;
        cout << "enter the class type = ";
        cin >> class_type;
        cout << "enter the date = ";
        cin >> date;
        cout << "enter the train seat = ";
        cin >> train_seat;
        cout << "enter the boaridng = ";
        cin >> boarding;
        cout << "enter the destination = ";
        cin >> destination;
        cout << "enter the train name = ";
        cin >> train_name;
        cout<<"price = 500";
         } 
    
    void get_data()
    {
        cout << " train no = " << train_no << endl;
        cout << "class = " << class_type << endl;
        cout << "date = " << date << endl;
        cout << "train_seat = " << train_seat << endl;
        cout << "boarding = " << boarding << endl;
        cout << "destination = " << destination << endl;
        cout << "train name = " << train_name << endl;
        cout<<"price = 500";
    }
};

class reservation 
{
    public:
      string train_name;
      string class_type;
      string passenger_name;
      string category;
      int people;
      public :
      void reservation_set()
      {
        cout <<"enter the train name = ";
        cin >>train_name;
        cout <<"enter the class type = ";
        cin >>class_type;
        cout <<"enter the passenger name = ";
        cin >>passenger_name;
        cout<<"enter the category = ";
        cin>>category;
        cout <<"enter the no of people = ";
        cin>>people;
      }
      void reservation_get()
      {
        cout<<"train name = "<<train_name<<endl;
        cout<<"class type = "<<class_type<<endl;
        cout<<"passenger name = "<<passenger_name<<endl;
        cout<<"category = "<<category<<endl;
        cout<<"total people "<<people<<endl;
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
                        cout<<" enter the passward = ";
                        cin>>d;
              };


int main()
{
    int choice;
   
    fstream f1;
    login l;
    train_details t;
    reservation r;
   
    cout<<"              ************************************"<<endl;
    cout<<"              ||      CHOOSE YOUR OPERATION     ||"<<endl;
	cout<<"              ||--------------------------------||"<<endl;
	cout<<"              ||      [1] ADMINISTRATION        ||"<<endl;
	cout<<"              ||      [2] USER MODE             ||"<<endl;
	cout<<"              ||      [3] EXIT                  ||"<<endl;
	cout<<"              ||                                ||"<<endl;
	cout<<"              ||                                ||"<<endl;
	cout<<"              ************************************"<<endl;
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
            cout<<"              ************************************"<<endl;
            cout<<"              ||          ADMINISTRATION        ||"<<endl;
	        cout<<"              ||--------------------------------||"<<endl;
	        cout<<"              ||      [1] ADD DETAILS           ||"<<endl;
	        cout<<"              ||      [2] DISPLAY               ||"<<endl;
	        cout<<"              ||      [3] MODIFY                ||"<<endl;
	        cout<<"              ||      [4] DELETE                ||"<<endl;
	        cout<<"              ||      [4] USER ID MANAGEMENT    ||"<<endl;
            cout<<"              ||      [5] EXIT                  ||"<<endl;
	        cout<<"              ************************************"<<endl;
           cout<<" enter your choice = ";
                         cin>>choice1;
    
                         
                         switch(choice1)
                         {
                            case 1:  f1.open("pk.txt",ios::app);
                                     t.set_data();
                                     f1.write((char*)&t,sizeof(t));
                                     cout<<"train record added";
                                     f1.close();
                                      break;
                            case 2:  f1.open("pk.txt",ios::in);                                   
                                     f1.read((char*)&t,sizeof(t));
                                      t.get_data();
                                     f1.close();
                                    break;
                            case 3: f1.open("pk.txt",ios::in);
                                    f1.read((char*)&t,sizeof(t));
                                    t.get_data();
                                    f1.close();
                                    break;
                            case 4:
                                 cout<<"user_details ";
                                 cout<<"\n";
                                 f1.open("user_id.txt ",ios::in);
                                 f1.read((char*)&l,sizeof(l)); 
                                 l.login_display();                               
                                 f1.close();


                            break;
                            case 5:
                            cout<<" ************ THANKS FOR VSITING ************"  ; 
                            break;
                            default :
                            cout<<" invalid choice ";
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
                     case 2 :      
                          cout<<"\n";
                         int choice2;
                         cout<<"              ************************************"<<endl;
                         cout<<"              ||      CHOOSE YOUR OPERATION     ||"<<endl;
	                     cout<<"              ||--------------------------------||"<<endl;
	                     cout<<"              ||      [1] SIGN_UP               ||"<<endl;
	                     cout<<"              ||      [2] LOGIN                 ||"<<endl;
	                     cout<<"              ||                                ||"<<endl;
	                     cout<<"              ||                                ||"<<endl;
	                     cout<<"              ||                                ||"<<endl;
	                     cout<<"              ************************************"<<endl;
                         cout<<" enter your choice = ";
                         cin>>choice2;
                         switch (choice2)
                             {
                             case 1: 
                              f1.open ("user_id.txt",ios::app);
                              l.login_details();
                              f1.write((char*)&l,sizeof(l));
                              cout<<"created user id";
                              break;
                              case 2:   
                                         int pass1;
                                         char user_id3[20];
                                         f1.open("user_id.txt",ios::in);
                                         cout<<"enter the user id = ";
                                         cin>>user_id3;
                                         cout<<"passward = ";
                                         cin>>pass1;
                                         f1.read((char*)&l,sizeof(l));
                                         f1.close();
                                         int j=strcmp(l.user_id,user_id3);
                                         if(j==0&&(l.passward==pass1))
                                         {
                                        
                                         
                                         cout<<"login is successful now you can reserve your train";
                             
        
                                            cout<<"\n";
                                            cout<<"              ************************************"<<endl;
                                            cout<<"              ||      CHOOSE YOUR OPERATION     ||"<<endl;
                                            cout<<"              ||--------------------------------||"<<endl;
                                            cout<<"              ||      [1] RESERVATION           ||"<<endl;
                                            cout<<"              ||      [2] CANCEL(DELETE)        ||"<<endl;
                                            cout<<"              ||      [3] EXIT                  ||"<<endl;
                                            cout<<"              ||                                ||"<<endl;
                                            cout<<"              ||                                ||"<<endl;
                                            cout<<"              ************************************"<<endl;
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

                                                            case 3 : back();
                                                         }
                                                         }