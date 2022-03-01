// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void shorting(int arr[],int);

int main() {
    int arr[]{10,25,36,78,15};
   int  size=sizeof(arr)/sizeof(arr[0]);
    
    shorting(arr,size);
   cout<<"shorted array is arr[";
   for(int temp:arr){
       cout<<" "<<temp;
   }
   cout<<" ]"<<endl;
    return 0;
}
void shorting(int arr[],int size){
    for(int i=0;i<(size-1);i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}