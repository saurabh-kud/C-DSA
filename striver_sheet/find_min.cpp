#include<bits/stdc++.h>
using namespace std;
int find_min(int *,int);

int main(){
    int arr[]{10,5,6,20,89,56,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=find_min(arr,size);
    cout<<min<<endl;
}
//using a min variable to store minimum
// int find_min(int *arr_ptr,int size){
//         int min=arr_ptr[0];
//     for (int i{};i<size;i++){
//         if(arr_ptr[i+1]<min){
//             min=arr_ptr[i+1];
//         }
//     }
//     return min;
// }
//using first index for store min value
int find_min(int *arr_ptr,int size){
        
    for (int i{};i<size;i++){
        if(arr_ptr[i+1]<arr_ptr[0]){
            int temp=arr_ptr[i+1];
            arr_ptr[i+1]=arr_ptr[0];
            arr_ptr[0]=temp;
        }
    }
    // int min=arr_ptr[0];
    return arr_ptr[0];
}