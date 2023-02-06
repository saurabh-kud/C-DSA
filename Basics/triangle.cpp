#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n;
 cin>>n;
 int height=0;
 int count=1;
 int temp=n;

    for(int i=1;i<n;i++){
      if(temp>=i){
        height++;
        temp-=1;
      }
        
    }
    cout<<height<<endl;
 return 0;
}