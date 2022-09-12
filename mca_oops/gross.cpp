#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int grossSalary,it,hra,da,net_salary;
 


 cout>>"enter your gross salary ";
 cin>>grossSalary;
 cout<<"enter your tax ";
 cin>>it;
 cout<<"enter your hra";
 cin>>hra;
 cout<<"enter your da ";
 cin>>da;

  net_salary-=(grossSalary*it)/100;
  net_salary+=(grossSalary*hra)/100;
  net_salary+= (grossSalary*da)/100;

  cout<<"your net salary is "<<net_salary<<endl;

 return 0;
}