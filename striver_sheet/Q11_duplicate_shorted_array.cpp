#include<bits/stdc++.h>
using namespace std;
int duplicate(int*,int);

int main(){
 int arr[]{1,2,2,6,6,8,8};
 int  size=sizeof(arr)/sizeof(arr[0]);
 
 //  cout<<size;
 int count=duplicate(arr,size);
  for(int i{};i<count;i++){
      cout<<arr[i]<<" ";
   }
 return 0;
}

int duplicate(int *arr,int size){
  
 
    for(int i{};i<size;i++){
      
        while(arr[i]==arr[i+1]){
           
            for(int j{i+1};j<size;j++){
             
             arr[j]=arr[j+1];
            }
            size--;
        }
       
    }
    return size;
                                               
}