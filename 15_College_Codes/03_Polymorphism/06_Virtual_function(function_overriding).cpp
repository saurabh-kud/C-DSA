#include<iostream>
using namespace std;

class base{
    int x;
    int y;

    public:

    base(){
        x=10;
        y=20;
      }

    virtual void show(){
        cout<<x<<" "<<y<<endl;
      }

};

class derived : public base{

    int a;
    int b;

    public:

      derived(){
        a=30;
        b=40;
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }

};
                    
int main(){

  base *ptr;
  derived d;
  ptr=&d;

  ptr->show();

return 0;
}