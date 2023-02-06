#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int item);
 
int main(){
 cout<<"enter size of array ";
 int n;
 cin>>n;
 int* arr= new int[n];
 for(int i=0;i<n;i++){
    cout<<"enter "<<i+1<<" element ";
    cin>>arr[i];
 }
 int item;
 cout<<"enter item which you want to search ";
 cin>>item;

 cout<<"your array is "<<endl;
 cout<<"[ ";
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 cout<<"]"<<endl;
   
  int location=binarySearch(arr,n,item);
  if(location==-1){
    cout<<"item not present in array"<<endl;
  }else{
    cout<<"item present at "<<location+1<<" location"<<endl;
  }

 
 return 0;
}



int binarySearch(int arr[],int n,int item){
    
 int beg=0;
 int end=n;
 int mid=(beg+end)/2;

   for(beg;beg<=end;mid=(beg+end)/2){
     if(arr[mid]==item){
       
        break;
     }else if(arr[mid]>item){
        end=mid-1;
     }else{
        beg=mid+1;
     }
     mid=(beg+end)/2;
   }
   if(beg>=end){
      return -1;
   }else{
    return mid;
   }
  
}