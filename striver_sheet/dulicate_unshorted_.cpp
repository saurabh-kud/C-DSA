#include<bits/stdc++.h>
using namespace std;
int duplicate(int *, int );
 
int main(){
 int arr[]{4,3,9,2,4,1,10,89,34};
 int size=sizeof(arr)/sizeof(arr[0]);
 int count= duplicate(arr,size);
 for(int i{};i<count;i++){
     cout<<arr[i]<<" ";
 }
 return 0;

}
int duplicate(int *arr,int size){
    
    for(int i{};i<size;i++){
        for(int j{i+1};j<size;j++){
          if(arr[i]==arr[j]){
            for(int k{j};k<size;k++){
               arr[k]=arr[k+1];
               
            }
            size--;
         
          }
      
        }
    }
    return size;
}

