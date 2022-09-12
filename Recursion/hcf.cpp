#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
     int rem=a%b;

     if(rem==0){
         return b ;
     }
     
     return gcd(b,rem);


}


 
int main(){
 int a,b;
 cin>>a>>b;
  int result=gcd(a,b);
  cout<<result<<endl;
 return 0;
}