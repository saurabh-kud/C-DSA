#include<bits/stdc++.h>
using namespace std;

int first_index(int * arr,int size,int x){

    if(arr[0]==x){
        return 0;
    }
    if(size==0){
      return -1;
    }
    int result=first_index(arr+1,size-1,x);
    return (result!=-1)?1+result:-1;
}
 
int main(){
 int arr[]{10,12,10,15,42};
 int size=sizeof(arr)/sizeof(arr[0]);
 int x{};
 cin>>x;
 
 int  result=first_index(arr,size,x);
 cout<<result<<endl;
 return 0;
}