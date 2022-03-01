#include<iostream>
using namespace std;
int main(){
 cout<<"Welcome"<<endl;
 cout<<"Enter a amount in cents: ";
 int cents{0};
 cin>>cents;
 cout<<"you enterd cents: "<<cents<<endl;
 cout<<"you can provide this changes as follows: "<<endl;

 cout<<"dollars  :"<<cents/100<<endl;
 cents%=100;
 cout<<"quaters  :"<<cents/25<<endl;
 cents%=25;
 cout<<"dimes    :"<<cents/10<<endl;
 cents%=10;
 cout<<"nickels  :"<<cents/5<<endl;
 cents%=5;
 cout<<"pennies  :"<<cents/1<<endl;
 

    return 0;
}