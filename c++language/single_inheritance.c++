#include<iostream>
using namespace std;
class parent{
    public:

parent(){

    cout<<"parent class"<<endl;

}

};

class child: public parent{
    public:
     child ()    {
           cout<<"child class"<<endl;
    }

};

 class grandchild:public child{
  public: 
    grandchild(){
    cout<<"grandchild classs"<<endl;
  }
};
int main(){

    child gc;

return 0;
}
