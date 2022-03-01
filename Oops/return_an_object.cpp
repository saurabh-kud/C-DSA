#include<bits/stdc++.h>
using namespace std;

class add_obj{
    public:
    int a{};
    
    add_obj add(add_obj c1,add_obj c2){
        add_obj c3;
        c3.a=c1.a+c2.a;
        return c3;
    }
};

int main(){
    add_obj e1,e2,e3;
    e1.a=50;
    e2.a=100;
    e3.a=0;
    cout<<"before addd "<<e1.a<<" "<<e2.a<<" "<<e3.a<<endl;
    e3=e3.add(e1,e2);
    cout<<"before addd "<<e1.a<<" "<<e2.a<<" "<<e3.a<<endl;
    
}