#include <bits/stdc++.h>
using namespace std;

class employee{
    public:
    string name;
    int salary;
    float netsalary=0;

    void getdata(){
        cout << "Enter Name of the employee : ";
        cin >> name;
        cout << "Enter Salary of the employee : ";
        cin >> salary;

    }
};

class calculation: public employee{
    public:
    void calc_salary(){
        int temp=salary;

        temp-=(salary*30)/100;
        temp+=(salary*10)/100;
        temp+=(salary*10)/100;

        netsalary=temp;
        cout << "Net Salary of " << name << " is : " << netsalary;
    }
};

class display: public employee{
    public:
    void show_salary(){
        cout << "Net Salary of " << name << " is : " << netsalary;
    }
};

int main(){
    calculation obj2;
    obj2.getdata();
    obj2.calc_salary();
}