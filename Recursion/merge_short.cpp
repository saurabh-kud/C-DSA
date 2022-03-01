#include<bits/stdc++.h>
using namespace std;
 

void merge_arr(int *arr,int si,int mid,int ei){
     int size1=mid-si+1;
     int size2=ei-mid;
     int *subarray1=new int[size1];
     int *subarray2=new int[size2];

    for(int i{};i<size1;i++){
        subarray1[i]=arr[i+si];
    }
    for(int k{};k<size2;k++){
        subarray2[k]=arr[mid+1+k];
    }
    int i{},j{},k{si};
    while(i<size1 && j<size2){
        if(subarray1[i]<subarray2[j]){
            arr[k++]=subarray1[i++];

        }else{
            arr[k++]=subarray2[j++];
        }
    }
    while(i<size1){
        arr[k++]=subarray1[i++];
    }
    while(j<size2){
        arr[k++]=subarray2[j++];
    }
}

void merge_short(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    merge_short(arr,si,mid);
    merge_short(arr,mid+1,ei);
    merge_arr(arr,si,mid,ei);
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

 merge_short(arr,0,n-1);
 cout<<"after shorting "<<endl;

 for(auto temp:arr){
     cout<<temp <<" ";
 }

 return 0;
}