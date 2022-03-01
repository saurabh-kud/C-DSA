#include<bits/stdc++.h>
using namespace std;

class object {
    int var1{};
    int var2{};
    public:
    object(int a,int b){
        var1=a;
        var2=b;
    }
    void display(){
        cout<<"var1 = "<<var1<<" var2 = "<<var2<<endl;
    }
     friend void add_object(object);//friend function declaration
};

void add_object(object a){
    cout<<a.var1<<" and "<<a.var2<<" addition is "<<a.var1+a.var2<<endl;
}

main(){
    object a(10,25);
    object b(20,30);
    a.display();
    add_object(a);
    b.display();
    add_object(b);
}