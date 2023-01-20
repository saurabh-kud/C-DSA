#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
   int counter=1;
  
   
    int spaceCoutner=0;

    for(int j=1;j<=n;j++){
        if(j<=i){
            cout<<j;
        }else{
            cout<<" ";
            spaceCoutner++;

        }
       
    }
    for(int k=n;k>=1;k--){
      
        if(spaceCoutner>=1){
            cout<<" ";
           spaceCoutner--;
        }else{
            cout<<k;
        }
    }
    cout<<endl;

  }

 return 0;
}