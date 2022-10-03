
#include<bits/stdc++.h>
using namespace std;

class employee{
    protected:
       string name;
       int salary=0;
       int netSalary=0;
       public:
     employee(){
        string nm;
        int sal=0;
        cout<<"enter your name ";
        cin>>nm;
        cout<<"enter your salary ";
        cin>>sal;
      name=nm;
      salary=sal;
     }

       void getSalary(){
       int netsal=salary;
       
       netsal+=(salary*20)/100;
    

       netsal+=(salary*30)/100;
       netsal-=(salary*40)/100;

       netSalary=netsal;

         cout<<"your gross salery is "<<netSalary<<endl;
        
        
     }

};


class manager: public employee{

};
 class assManager:public employee{

 };
int main(){
     assManager m1;
     m1.getSalary();
 return 0;
}