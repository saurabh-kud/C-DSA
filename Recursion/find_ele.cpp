#include<bits/stdc++.h>
using namespace std;

bool find(int * arr,int size,int x){
    if(arr[0]==x){
        return true;

    }
    if(size==1){
        return false;
    }
    bool result =find(arr+1,size-1,x);
    return result;
}
 
int main(){
 int arr[]{10,15,2,5,4};
 int x{};
 cin>>x;
 int size=sizeof(arr)/sizeof(arr[0]);
 bool is_avl=find(arr,size,x);
 cout<<(is_avl?"avilable":"unavilable");
 return 0;
}