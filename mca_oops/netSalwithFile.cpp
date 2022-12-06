#include <bits/stdc++.h>
using namespace std;

int main()
{

  string name;
  int basic_sal=0;
  int netSalary=0;
  cout<<"enter employee name ";
  getline(cin, name);
  cout<<"enter basic salary of employee ";
  cin>>basic_sal;

  int temp_basic_sal=basic_sal;
  temp_basic_sal+=(basic_sal*20)/100;
  temp_basic_sal+=(basic_sal*30)/100;
  temp_basic_sal-=(basic_sal*40)/100;
  netSalary=temp_basic_sal;
  ofstream inf;
  inf.open("employee.txt");
  inf<<name<<endl;
  inf<<netSalary<<endl;
  inf.close();
  char employee_name;
  int newNetSal;
  ifstream inf1;
  vector<char> s;
  inf1.open("employee.txt");
  while(inf1){
    s.push_back(inf1.get());
  }

  inf1>>newNetSal;
  cout<<newNetSal<<endl;
  inf1.close();
  cout<<"---------------"<<endl<<endl;
  cout<<"employee_name is "<<s[0]<<endl;
  cout<<"employee net salary is "<<newNetSal<<endl;
  
  

  return 0;
}