#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr){
    for(int i{};i<arr.size();i++){
        for(int j{};j<arr.size()-i;j++){
          if(arr[j]>arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;

          }
        }
    }
    
}
 
int main(){
     vector<int> arr{10,5,45,89,9};
    bubble(arr);
    for(auto temp:arr){
        cout<<temp<<" ";
    }
   cout<<endl;
 return 0;
}