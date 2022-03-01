#include<iostream>
using namespace std;
int main(){
    cout<<"enter array size ";
    int n;
    cin>>n;
    n++;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter location to add in array ";
     int loc1;
     cin>>loc1;
     
    cout<<"enter value ";
    int val;
    cin>>val;
    int temp=n-2;
    
    
   
    for(temp;temp>=loc1;temp--){
      arr[temp+1] =arr[temp];
        

    }
    arr[loc1]=val;

   for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
   }


}