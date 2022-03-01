#include<bits/stdc++.h>
using namespace std;

 void bubble_short(int * arr_ptr, int size);
 int binary_search(int *,int ,int);

int main(){
 int arr[]{10,5,56,2,36,46};
 int size=(sizeof(arr)/sizeof(arr[0]));
 bubble_short(arr,size);
 for(auto temp:arr){
     cout<<temp<<" ";
 }
 
 cout<<endl<<"enter to search ";
 int n;
 cin>>n;
 int result= binary_search(arr,size-1,n);
 (result==-1)?cout<<"item not avilable"<<endl:cout<<"item avilable at "<<result<<endl;
 
 return 0;
}
int  binary_search(int *arr,int size,int num){
 int start{0},end{size},mid{};
  while(start<=end){
      mid=(start+end)/2;
      if(arr[mid]==num){
          return mid;
      }
      if(arr[mid]>num){
          end=mid-1;
      }
      else{
          start=mid+1;
      }
  }
  return -1;
}



void bubble_short(int * arr_ptr, int size){
    for(int i{};i<size-1;i++){
        for(int j{i+1};j<size;j++){
            if(arr_ptr[i]>arr_ptr[j]){
                int temp=arr_ptr[i];
                arr_ptr[i]=arr_ptr[j];
                arr_ptr[j]=temp;
            }
        }
    }
}