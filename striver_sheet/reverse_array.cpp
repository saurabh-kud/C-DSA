#include<bits/stdc++.h>
using namespace std;
 void reverse_arr(int *,int);

int main(){
 int arr[]={10,56,23,74,45,2};
 int size=sizeof(arr)/sizeof(arr[0]);
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 cout<<endl;
 reverse_arr(arr,size);
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 return 0;
}
void reverse_arr(int *arr, int size){
    int start{0},end{size-1};
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}