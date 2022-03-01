#include<bits/stdc++.h>
using namespace std;
 void duplicate(int *,int );
int main(){
 int arr[]{10,12,10,36,10,12,36,50,2,4};
 int size=sizeof(arr)/sizeof(arr[0]);
 duplicate(arr,size);
 return 0;
}

void duplicate(int *ptr,int size){
    bool visited[size]{false};
   
    for(int i{};i<size;i++){
       if(visited[i]!=true){
           visited[i]=true;
           int counter{1};
           for(int j{i+1};j<size;j++){
               if(ptr[i]==ptr[j]){
                   counter++;
                   visited[j]=true;

               }
           }
          if(counter>1){
              cout<<ptr[i]<<" ";
          }
       } 
       
    }
}