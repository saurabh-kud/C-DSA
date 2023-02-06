#include<bits/stdc++.h>
using namespace std;
 
int main(){
 cout<<"enter size of array ";
 int n;
 cin>>n;
 int* arr= new int[n];
 for(int i=0;i<n;i++){
    cout<<"enter "<<i+1<<" element ";
    cin>>arr[i];
 }
 int item;
 cout<<"enter item which you want to search ";
 cin>>item;
 bool isfound=true;
 

 for(int i=0;i<n;i++){
    if(arr[i]==item){
        cout<<"item present at "<<i+1<<" location"<<endl;
        isfound=false;
        break;
       
    }
 }

  if(isfound){
     cout<<"item not found"<<endl;
  }

 return 0;
}