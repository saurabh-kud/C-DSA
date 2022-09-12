#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
   int n{};
   cin>>n;
   int* arr=new int[n];
   for(int i{};i<n;i++){
       int el{};
       cin>>el;
       arr[i]=el;
   }
  int largest{0},secondLargest{-1};

  for(int i{};i<n;i++){
      if(arr[i]>arr[largest]){
          largest=i;
      }
  }
   for(int i{};i<n;i++){
       if(arr[i]!=arr[largest]){
           if(secondLargest==-1){
               secondLargest=i;
           }else if(arr[i]>arr[secondLargest]){
               secondLargest=i;
           }
       }
   }

  cout<<arr[secondLargest]<<endl;
 return 0;
}