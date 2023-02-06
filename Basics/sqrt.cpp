#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
   for(int i=1;i<n;i++){
    if(i*i==n){
        cout<<i<<endl;
        break;
    }
    if(i*i>=n){
        cout<<i-1<<endl;
        break;
    }
   }
 return 0;
}