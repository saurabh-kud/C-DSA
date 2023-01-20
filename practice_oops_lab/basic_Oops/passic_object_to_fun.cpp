#include<iostream>
using namespace std;

class add{

    int x;

    public:
    add(int a){
        x=a;
    }

    void sum(add a1, add a2){
       cout<<"sum of a1 and a2 is "<<a1.x+a2.x<<endl;
    }

};
                    
int main(){

    add a(10);
    add b(20);

    a.sum(a,b);
  
return 0;
}