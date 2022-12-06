#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int x;
 cin>>x;
  int counter=0;
  if(x==0 || x==1){
    cout<<"not a prime number"<<endl;
  }else{

  for(int i=2;i<x;i++){
      if(x%i==0){
        counter++;
        cout<<"not a prime number"<<endl;
        break;

      }
    
  }
  if(counter==0){
    cout<<"this is a prime number"<<endl;
  }
  }

 return 0;
}