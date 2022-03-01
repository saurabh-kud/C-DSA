#include<bits/stdc++.h>
using namespace std;
int * rotate_array(int*,int,int);

int main(){
 int size;
 cin>>size;
 int *dma_prt=new int[size];
  for(int i{};i<size;i++){
     cout<<"enter "<<i<<" element: ";
     cin>>dma_prt[i];
 }
 cout<<"entered array"<<endl;

 for(int i{};i<size;i++){
     cout<<dma_prt[i]<<" ";
 }

 cout<<endl;
 cout<<"enter k value ";
 int k{};
 cin>>k;
 int * ptr=rotate_array(dma_prt,size,k);
 cout<<"rotated array"<<endl;
 for(int i{};i<size;i++){
     cout<<ptr[i]<<" ";
 }
 delete[] dma_prt;
 delete[] ptr;
 return 0;
}

int * rotate_array(int *ptr,int size,int k){
     int temp=k;
    int *dma_prt=new int[size];
    int i={};
    for(temp;temp<size;temp++){
        
        dma_prt[i]=ptr[temp];
        i++;
      
    }

    for(int j{};j<=k;j++){
        dma_prt[i]=ptr[j];
        i++;
    }
    return dma_prt;
}

