#include<iostream>
using namespace std;

class add{
    int a;
    int b;

    public:

    add(){
      a=0;
      b=0;
    }

    add(int x){
        a=x;
        b=0;
    }

    add(int x, int y){
        a=x;
        b=y;
    }

    void sum(){
        cout<<"sum is "<<(a+b)<<endl;
    }
};

                    
int main(){

    add a1;
    a1.sum();

    add a2(10);
    a2.sum();

    add a3(10,20);
    a3.sum();
  
return 0;
}