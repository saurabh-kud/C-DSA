#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float e;
    double d;
    cout<<"enter a number ";
    cin>>a>>b>>c>>d;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed;
    cout<<setprecision(3)<<e<<endl;
    cout<<setprecision(9)<<d<<endl;
}