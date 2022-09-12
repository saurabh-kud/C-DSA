#include<bits/stdc++.h>
using namespace std;

void seletion(vector<int> &arr){
    for(int i{};i<arr.size();i++){
        int min=i;
        for(int j{i+1};j<arr.size();j++){
           if(arr[min]>arr[j]){
               min=j;
           }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
    
}
 
int main(){
     vector<int> arr{10,5,45,89,9};
  seletion(arr);
    for(auto temp:arr){
        cout<<temp<<" ";
    }
   cout<<endl;
 return 0;
}