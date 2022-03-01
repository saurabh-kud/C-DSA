//binary search on array
#include<bits/stdc++.h>
using namespace std;
int binary_search(int *,int,int);

int main(){
    int arr[]{10,12,36,56,69};
    int n{5};
    int num{};
    cout<<"enter elemet to search ";
    cin>>num;
    int found{};
    found=binary_search(arr,n,num);
    if(found>=0){
        cout<<"element found location "<<found<<endl;
    }else{
        cout<<"element not found!"<<endl;
    }
}
int binary_search(int *arr,int n,int num){
    int min{};
    int mid{};
    int max{n-1};
    while(min<=max){
      mid=(min+max)/2;
      if(num==arr[mid]){
          return mid;
      }else if(num<arr[mid]){
          max=mid-1;
      }else{
          min=mid+1;
      }
    }
    return -1;
}