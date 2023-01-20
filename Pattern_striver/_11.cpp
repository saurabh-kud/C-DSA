#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){

    bool isEven=i%2==0;
    bool valueToPrint=isEven;
    for(int j=1;j<=i;j++){
        if(valueToPrint){
            cout<<"0"<<" ";
            valueToPrint=!valueToPrint;
        }else{
            cout<<"1"<<" ";
            valueToPrint=!valueToPrint;
        }
    }
    cout<<endl;

  }

 return 0;
}