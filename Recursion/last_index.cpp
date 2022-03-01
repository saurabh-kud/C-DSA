#include<bits/stdc++.h>
using namespace std;

int first_index(int * arr,int size,int x){

    if(size==0){
      return -1;
    }
    int result=first_index(arr+1,size-1,x);
    
    if(result!=-1){
        return result+1;
    }

    if(arr[0]==x){
        return 0;
    }else{
        return -1;
    }

   
    
        
    
}
 
int main(){
 int arr[]{1,2,1,2};
 int size=sizeof(arr)/sizeof(arr[0]);
 int x{};
 cin>>x;
 
 int  result=first_index(arr,size,x);
 cout<<result<<endl;
 return 0;
}