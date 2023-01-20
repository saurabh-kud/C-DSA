#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
   
        char var='A';
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<var;
          
       }
       cout<<endl;
       var++;
    }
 
 return 0;
}