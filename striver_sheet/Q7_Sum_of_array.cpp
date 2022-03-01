#include<bits/stdc++.h>
using namespace std;
int sum(int*,int);
 
int main(){
 int size;
 cout<<"enter size of array ";
 cin>>size;
 int * ptr_array=new int[size];
//  cout<<sizeof(ptr_array);
//  cout<<"enter array element ";
 for(int i{};i<size;i++){
     cout<<"enter "<<i<<" element: ";
     cin>>ptr_array[i];
 }
 for(int i{};i<size;i++){
     cout<<ptr_array[i]<<" ";
 }
 cout<<endl<<"sum is "<<sum(ptr_array,size)<<endl;
 return 0;
}

int sum(int *ptr,int size){
    int sum{};
    for(int i{};i<size;i++){
        sum+=ptr[i];
    }
   return sum;    
}