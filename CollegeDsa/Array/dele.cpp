#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int n;
     cout<<"enter size of array ";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" value ";
        int k;
        cin>>arr[i];
        
     }
     int pos=0;
     cout<<"ente the place where you wnt to delete ";
     cin>>pos;
    
   

     for(int i=pos;i<n;i++){
       arr[i]=arr[i+1];
        
     }
     

      cout<<"[";
     for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
        
     }
     cout<<"]";
 return 0;
}