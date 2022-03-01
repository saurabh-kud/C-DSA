#include<bits/stdc++.h>
using namespace std;
 void non_repiting(int *,int);
int main(){
 int arr[]{10,15,2,10,15,2,5,6,9};
 int size=sizeof(arr)/sizeof(arr[0]);
 non_repiting(arr,size);

 return 0;
}

void non_repiting(int *ptr,int size){
  bool visited[size]{false};
  for(int i{};i<size;i++){
      if(visited[i]!=true){
          int counter{1};
          visited[i]=true;
          for(int j{i+1};j<size;j++){
              if(ptr[i]==ptr[j]){
                  counter++;
                  visited[j]=true;
               }
           }
           if(counter==1){
               cout<<ptr[i]<<" ";
           }
        }
   }
}