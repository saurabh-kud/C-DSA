#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
   
        
    for(int i=0;i<=n;i++){
       int var=65+(n-i);
       for(int j=1;j<=i;j++){
           cout<<(char)var;
           var++;
          
       }
       cout<<endl;
     
    }
 
 return 0;
}