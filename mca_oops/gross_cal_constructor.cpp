#include<bits/stdc++.h>
using namespace std;


class salary{
    
    string name;
     int saler={};
     int netSalary={};

     public:

     void setdata(string nam,int sal){
       name=nam;
       saler=sal;
     }

     void getSalary(){
       int netsal=saler;
       
       netsal+=(saler*20)/100;
    

       netsal+=(saler*30)/100;
       netsal-=(saler*40)/100;

       netSalary=netsal;

         cout<<"your gross salery is "<<netSalary<<endl;
        
        
     }
    
};
 
int main(){
  string name;
  int inputedsalery={};

  cout<<"enter your name ";
  cin>>name;
  cout<<"enter your salary ";
  cin>>inputedsalery;
 salary s1(name,inputedsalery);
  
  s1.getSalary();
 return 0;
}