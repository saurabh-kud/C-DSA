#include<bits/stdc++.h>
using namespace std;
void bubble_short(int *,int);
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
      bubble_short(ptr,size);
    cout<<endl<<"Shorted array is ";
    for(int i{};i<size;i++){
        
        cout<<*(ptr+i)<<" ";
     }
      delete [] ptr;
}

void bubble_short(int *ptr,int size){
for(int i{};i<size-1;i++){
    for(int j{};j<size-1-i;j++){
        if(ptr[j]>ptr[j+1]){
            int temp=ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=temp;
        }
    }
}
}