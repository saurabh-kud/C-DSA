#include<bits/stdc++.h>
using namespace std;
void Selecton_short(int *,int);
void swap(int *,int *);
int main(){
    int arr[7]{17,75,12,42,9,96,3};
    int n{7};
    cout<<"unshorted array ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    Selecton_short(arr,n);
    cout<<"shorted array ";
    for(auto x:arr){
        cout<<x<<" ";
    }
}
void Selecton_short(int *arr,int n){
    for(int i{};i<n-1;i++){
        int min{i};
        for(int j{i+1};j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
       swap(arr[i],arr[min]);
       
    }
}
void swap(int *arr,int *brr){
    int temp=*arr;
    *arr=*brr;
    *brr=temp;
}