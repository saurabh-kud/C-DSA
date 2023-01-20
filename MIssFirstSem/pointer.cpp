#include<bits/stdc++.h>
using namespace std;
 
int main(){
 

  int a=16;
  
   
   int *b=&a;
   cout<<a<<endl;
   cout<<b<<endl;

   cout<<"coem "<<*b<<endl;
   *b=80;
   cout<<a<<endl;
   cout<<*b<<endl;

 return 0;
}