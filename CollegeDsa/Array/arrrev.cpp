#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int n;
     cout<<"enter size of array ";
     cin>>n;
     int arr[n+1];
     for(int i=0;i<n-1;i++){
        cout<<"enter "<<i+1<<" value ";
        int k;
        cin>>arr[i];
        
     }
     int rotate;
     cout<<"enter"

     for(int i=n;i>=pos;i--){
       arr[i+1]=arr[i];
        
     }
     arr[pos]=num;

      cout<<"[";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
     }
     cout<<"]";
 return 0;
}