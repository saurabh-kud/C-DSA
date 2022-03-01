#include<bits/stdc++.h>
using namespace std;

 int partion(int *arr,int si,int ei){
     int counter{};
      for(int i{si+1};i<=ei;i++){
          if(arr[i]<=arr[si]){
              counter++;
          }
      }
      int pi=si+counter;
      int temp=arr[si];
      arr[si]=arr[pi];
      arr[pi]=temp;
      int i{si},j{ei};
      while(i<pi && j>pi){
          if(arr[i]<arr[pi]){
             i++;
          }else if(arr[j]>arr[pi]){
              j--;
          }else{
              int temp1=arr[i];
              arr[i]=arr[j];
              arr[j]=temp1;
              i++;
              j--;
           }
        }
      return pi;
}

void quick_short(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int pi=partion(arr,si,ei);
    quick_short(arr,si,pi-1);
    quick_short(arr,pi+1,ei);

    
}

int main(){
 int n{};
 cout<<"enter array size ";
 cin>>n;
 int arr[n]{};
 cout<<"enter array element ";
 for(int i{};i<n;i++){
     cin>>arr[i];
 }
 cout<<"before shorting "<<endl;
 
 for(auto temp:arr){
     cout<<temp <<" ";
 }
 quick_short(arr,0,n-1);
 cout<<"after shorting "<<endl;

 for(auto temp:arr){
     cout<<temp <<" ";
 }
 return 0;
}