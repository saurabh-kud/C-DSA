#include<bits/stdc++.h>
using namespace std;
template <typename T>
 T factorial(T n){
    if(n<0){
        return -1;

    }
    if(n==0){
        return 1;
    }else{
        return(n*factorial(n-1));
    }
 }

int main(){
  int arr[]={10,12,15};
  float arr1[]={10.5,23.5,56.5};
  int size=sizeof(arr)/sizeof(arr[0]);
  int size2=sizeof(arr1)/sizeof(arr1[0]);
  cout<<size<<endl;
  cout<<"this for int "<<endl;
  for(int i=0;i<size;i++){
  cout<<factorial(arr[i])<<endl;

  }
  cout<<"this is for float"<<endl;
  for(int i=0;i<arr.size();i++){
  cout<<factorial(arr1[i])<<endl;

  }
 return 0;
}