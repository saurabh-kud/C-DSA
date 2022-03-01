#include<bits/stdc++.h>
using namespace std;
 int multiply(int m,int n){
     if(n==0){
         return 0;
     }
     int left=multiply(m,n-1);
     return left+m;
 }
int main(){
 int m{},n{};
 cin>>m>>n;
 int result=multiply(m,n);
 cout<<result<<endl;

 return 0;
}