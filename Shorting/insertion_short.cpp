#include<bits/stdc++.h>
using namespace std;
void insertion_short(int *,int);

int main(){
     int size{};
    cout<<"enter size of array ";
    cin>>size;
    int *ptr= new int [size];
    cout<<"enter "<<size<<" array element ";
    for(int i{};i<size;i++){
      int num{};
        cin>>num;
        *(ptr+i)=num;
     }
    cout<<"entered array is ";
    for(int i{};i<size;i++){
        
        cout<<*(ptr+i)<<" ";
     }
      insertion_short(ptr,size);
    cout<<endl<<"Shorted array is ";
    for(int i{};i<size;i++){
        
        cout<<*(ptr+i)<<" ";
     }
      delete [] ptr;
}
void insertion_short(int *ptr, int size){
    for(int i=1;i<size;i++){
        int key=ptr[i];
        int j=i-1;
        while(j>=0 && ptr[j]>key){
          ptr[j+1]=ptr[j];
          j--;
        }
        ptr[j+1]=key;
    }
}