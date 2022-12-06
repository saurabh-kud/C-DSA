#include<bits/stdc++.h>
using namespace std;

class salary_calculate{
    int base_sal;
    string name;
    int net_sal;
    public:
    void setData(){
        cout<<"enter your name ";
        getline(cin,name);
        cout<<"enter your base salary ";
        cin>>base_sal;
    }

    void calc_net_sal(){
        net_sal=base_sal+base_sal*20/100;
        cout<<"your name is "<<name<<endl;
        cout<<"your net salary is "<<net_sal<<endl;
    }


};




int main(){
 
 salary_calculate e1;
 e1.setData();
 e1.calc_net_sal();
  
 return 0;
}