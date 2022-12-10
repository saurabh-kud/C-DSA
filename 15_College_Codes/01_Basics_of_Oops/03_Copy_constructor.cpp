#include<iostream>
using namespace std;

class add{
    int x;
    public:

    add(int a){
        x=a;
    }

    add(add &m){
     x=m.x;
    }

    void show(){
        cout<<"value of x is "<<x<<endl;
    }

};
                    
int main(){

    add a(10);
    a.show();

    add b(a);
    b.show();

  
return 0;
}