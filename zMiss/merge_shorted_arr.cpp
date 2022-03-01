#include<bits/stdc++.h>
using namespace std;
 
int * merging(int arr1[],int arr2[],int size1,int size2){
    int * ptr=new int [size1+size2];
    
    int i{},j{},k{};
   while(i<size1 && j<size2){
       
           if(arr1[i]<arr2[j]){
               ptr[k]=arr1[i];
               k++;
               i++;
           }else{
                ptr[k]=arr2[j];
                k++;
                j++;
           }
   }
   while(i<size1){
       ptr[k++]=arr1[i++];
   }
   while(j<size2){
       ptr[k++]=arr2[j++];
   }

    return ptr;
}

int main(){
 int arr1 []{5,6,9,10,12};
 int arr2[]{1,7,11,15,78,85};
 int size1=sizeof(arr1)/sizeof(arr1[0]);
 int size2=sizeof(arr2)/sizeof(arr2[0]);
    int * ptr=merging(arr1,arr2,size1,size2);
    cout<<"after merge "<<endl;
    for(int i{};i<size1+size2;i++){
        cout<<ptr[i]<<endl;
    }
    delete [] ptr;
 return 0;
}