#include<bits/stdc++.h>
using namespace std;

template <typename T>

T elec_cal(T unit){
   if(unit<100){
     return unit* 5.95;
   }else{
     return unit* 6.95;
   }
}

 
int main(){
   float unit;
   cout<<"enter unit to cal electricity bill ";
   cin>>unit;
   cout<<elec_cal(unit)<<endl;
 return 0;
}