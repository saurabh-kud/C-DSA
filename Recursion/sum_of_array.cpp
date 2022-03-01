#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int size){
    if(size==1){
       return arr[size-1];
    }
    int result = arr[0]+sum(arr+1,size-1);
    return result;
}
 
int main(){
 int arr[]{1,2,3,4};
 int size=sizeof(arr)/sizeof(arr[0]);
 int result=sum(arr,size);
 cout<<result<<endl;
 return 0;
}