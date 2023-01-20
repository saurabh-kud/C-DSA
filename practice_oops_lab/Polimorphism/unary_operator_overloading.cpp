#include<bits/stdc++.h>
using namespace std;

class add {
    int a,b;
    public:
    add(int c,int d){
        a=c;
        b=d;
    }

    //unary operator overloading 
   void operator ++(int){
        a++;
        b++;
    }

    void cal_sum(){
        cout<<"sum is "<<a+b<<endl;
    }

};


 
int main(){
     add s(10,25);
     s.cal_sum();
     s++;
     s.cal_sum();
     s++;
     s.cal_sum();
 return 0;
}