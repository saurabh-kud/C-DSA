//PROGRAM TO IMPLEMETN LINEAR SEARCH IN ARRAY
#include<stdio.h>
#include<stdlib.h>

int liner_search(int *,int ,int);
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
    found =liner_search(arr,size,element);
    if(found==-1){
        printf("element not found\n");
    }else{
        printf("element found at location %d",found);
    }
}

int liner_search(int* arr,int size,int element){
   for(int i=0;i<size;i++){
       if(arr[i]==element){
           return i;
           break;
       }
       
   }
   return -1;
}