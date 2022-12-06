#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int t=0;
 cin>>t;
 while(t--){
    vector<int> vec(4);
    for(int i=0;i<4;i++){
        cin>>vec[i];
    }
   int counter=0;
  if(vec[2]>vec[1]){
    counter++;
  }else if(vec[2]>vec[1]){
    counter++;
  }else if(vec[3]>vec[1]){
    counter++;
  }
  cout<<counter<<endl;


 }
 return 0;
}