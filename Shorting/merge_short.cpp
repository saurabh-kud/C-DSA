#include<bits/stdc++.h>
using namespace std;

 void merging(int *arr,int si,int mid,int ei){
     int size1{mid-si+1};
     int size2{ei-mid};
     int * subarray1=new int [size1];
     int * subarray2=new int [size2];
      cout<<"from merging "<<size1<<endl;
      cout<<"from merging 2"<<size2<<endl;
     for(int i{};i<size1;i++){
         subarray1[i]=arr[si+i];
     }
     for(int j{};j<size2;j++){
         subarray2[j]=arr[mid+1+j];
     }
      int i{},j{},k{si};

    while(i<size1&&j<size2){
      
           if(subarray1[i]<subarray2[j]){
               arr[k]=subarray1[i];
               k++;
               i++;
           }else{
                arr[k]=subarray2[j];
                k++;
                j++;
           }
    }   
    while(i<size1){
        arr[k++]=subarray1[i++];
    }
    while(j<size2){
        arr[k++]=subarray2[j++];
    }
      
}

 
void  merge_short(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    merge_short(arr,si,mid);
    merge_short(arr,mid+1,ei);
    merging(arr,si,mid,ei);

}

int main(){
 int arr[]{5,1,20,39,45,3,7};
 int size=sizeof(arr)/sizeof(arr[0]);

 merge_short(arr,0,size-1);
 cout<<"your shorted array is "<<endl;
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 return 0;
}