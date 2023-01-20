#include<iostream>
using namespace std;


template <class T> 
void bubbleSort(T a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
}

                    
int main(){

    int arr[]={10,50,30,40,20};
    int n=5;

    bubbleSort<int>(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
  
return 0;
}