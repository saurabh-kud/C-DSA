#include<bits/stdc++.h>
using namespace std;

 int all_index(int * arr,int size,int x,int *inp ){
    
    if(size==0){
        return 0;
    }
    
    int result=all_index(arr+1,size-1,x,inp);

    if(arr[0]==x){
        for(int i=result-1;i>=0;i--){
            inp[i+1]=inp[i]+1;
        }

        inp[0]=0;
        result++;
    }else{
        for(int i=result-1;i>=0;i--){
            inp[i]=inp[i]+1;
        }
    }
    return result;
    
}
 
int main(){
 int arr[]{2,5,2,4,2,4};
 int size=sizeof(arr)/sizeof(arr[0]);
 int x{};
 cin>>x;
 int inp[size]{};
 
 int result=all_index(arr,size,x,inp);
 for(int i {};i<result;i++){
     cout<<inp[i]<<" ";
 }

 return 0;
}