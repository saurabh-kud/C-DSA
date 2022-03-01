#include<bits/stdc++.h>
using namespace std;
 void bubble_short(int*,int);
 void re_arrange(int *,int);

int main(){
 int arr[]{8,7,1,6,5};
 int size=sizeof(arr)/sizeof(arr[0]);
 bubble_short(arr,size);
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 cout<<endl;
 re_arrange(arr,size);
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 return 0;
}

void bubble_short(int * arr,int size){
    for(int i{};i<size-1;i++){
        for(int j{i+1};j<size;j++){
            if(arr[i]>arr[j]){
                int temp{arr[i]};
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void re_arrange(int *arr,int size){
    int mid=size/2;
    for(int i{size-1};i>=mid;i--){
        int temp{arr[i]};
        arr[i]=arr[mid];
        arr[mid]=temp;
        mid++;
    }
}