//this is basic function example
#include<iostream>
#include<string.h>
using namespace std;
void add(int,int,string);

int main(){
    int a{0},b{0};
    string str{"hello saurabh"};
    cout<<"enter two number ";
    cin>>a>>b;
 //     cout<<"entered "<<a<<" and "<<b<<endl;
//    cout<<"add "<<<<endl;
   add(a,b,str);
    
 
}
void add(int c,int d,string e){
       cout<<"add is : "<<c+d<<" and "<<"text is : "<<e<<endl;
}
