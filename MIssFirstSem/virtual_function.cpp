#include<bits/stdc++.h>
using namespace std;

class base{
    protected:
    int a;
    int b;

    public:
      void set_data(){
        cout<<"enter a value";
        cin>>a;
        cout<<"enter b value";
        cin>>b;


      }


      void virtual add(){
        cout<<"add is "<<a+b<<endl;
              }

};

class deriverd :public base{
         void add(){
            cout<<"this is derived class add "<<a+b<<endl;
         }
};

 
int main(){
    base b;
    b.set_data();
    deriverd d;
    d.set_data();


   base* ptr;

   ptr=&d;
   ptr->add();

 return 0;
}