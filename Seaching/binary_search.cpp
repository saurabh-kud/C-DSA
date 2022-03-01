// ROGRAM TO IMPLEMETN BINARY SEARCH IN ARRAY
#include<stdio.h>
#include<stdlib.h>

int binary_search(int *,int ,int);
void bubble_short(int *,int);

int main(){
    int n=0;
    printf("enter array size ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    printf("enter element for search ");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(arr[0]);
    int found;
    bubble_short(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    found =binary_search(arr,size,element);
    if(found==-1){
        printf("element not found\n");
    }else{
        printf("\nelement found at location %d",found);
    }
}
int binary_search(int *arr,int size,int element) {
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=low+(high-low)/2;
         if(element==arr[mid]){
             return mid;
         }else if(element<arr[mid]){
             high=mid-1;
         }else{
             low=mid+1;
         }
    }
    return -1;
}

void bubble_short(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}