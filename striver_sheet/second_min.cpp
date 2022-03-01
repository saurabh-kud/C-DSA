#include<bits/stdc++.h>
using namespace std;
int find_min(int *,int);

int main(){
    int arr[]{10,5,6,20,89,56,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=find_min(arr,size);
    cout<<min<<endl;
}
using a min variable to store minimum
int find_min(int *arr_ptr,int size){
        int min=arr_ptr[0];
    for (int i{};i<size;i++){
        if(arr_ptr[i+1]<min){
            min=arr_ptr[i+1];
        }
    }
    int second_min=min
    for(int i{};i<size;i++){
       if(arr[i]>min)
    }
}