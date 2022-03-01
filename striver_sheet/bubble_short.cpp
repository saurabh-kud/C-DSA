#include<bits/stdc++.h>
using namespace std;
void bubble_short(int*, int);

int main(){
    int arr[]{10,5,69,36,56,89,95,200,100};
    int size{sizeof(arr)/sizeof(arr[0])};
    bubble_short(arr,size);
    for(auto temp:arr){
    cout<<temp<<" ";
    }
    cout<<endl<<"second smallest is "<<arr[1]<<" and Second largest is "<<arr[size-2]<<endl;
}

void bubble_short(int * arr_ptr, int size){
    for(int i{};i<size-1;i++){
        for(int j{i+1};j<size;j++){
            if(arr_ptr[i]>arr_ptr[j]){
                int temp=arr_ptr[i];
                arr_ptr[i]=arr_ptr[j];
                arr_ptr[j]=temp;
            }
        }
    }
}