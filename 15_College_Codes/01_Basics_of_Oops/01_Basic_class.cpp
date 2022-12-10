
#include<iostream>
using namespace std;

class calculator{

    int a;
    int b;

    public:

    calculator(int x, int y){
        a=x;
        b=y;
    }

    void add(){
        cout<<"a+b is "<<(a+b)<<endl;
    }

    void substract(){
        cout<<"a-b is "<<(a+b)<<endl;
    }

    void multiplication();
    void divide();

};

void calculator::multiplication(){
        cout<<"a*b is "<<(a*b)<<endl;
    }

void calculator::divide(){
        cout<<"a/b is "<<(a/b)<<endl;
    }

                    
int main(){

    calculator c(20,10);
    c.add();
    c.substract();
    c.multiplication();
    c.divide();
  
return 0;
}