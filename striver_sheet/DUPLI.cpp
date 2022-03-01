#include<bits/stdc++.h>
using namespace std;
 int duplicate(int *,int);
int main(){
 int arr[]{1,1,2,2,3};
 int size= sizeof(arr)/sizeof(arr[0]);
 duplicate(arr,size);
 for(int i{};i<size;i++){
     cout<<arr[i]<<" ";
 }
 return 0;
}

int duplicate(int *arr,int size){
    int i{};
    for(int j{1};j<size;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}