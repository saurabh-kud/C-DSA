#include<iostream>
using namespace std;

int add(int a, int b){
    if(b==0)
    throw "Divide by zero";
    else
    return (a/b);
}
                    
int main(){

   int x=50;
   int y=0;
   int z;

   try{
    z=add(x,y);
    cout<<"value of z"<<z<<endl;
   }
   catch(const char *s){
    cout<<"found problem "<<s;
   }

return 0;
}