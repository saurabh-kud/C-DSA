#include<stdio.h>

 void add(int a[],int);
 void add(int arr[],int size){
   for(int i=0;i<size;i++){
     printf("%d square is: %d \n",arr[i],arr[i]*arr[i]);
      arr[i]=arr[i]*arr[i];
   }
 }


int main(){
  printf("from function\n");
  int arr[]={5,6,7,45,56,78};
  int n=sizeof(arr)/sizeof(arr[0]);
 
  // printf("%d",n);

  //call by value
  add(arr,n);


  for(int i=0;i<n;i++){
    printf("%d \n",arr[i]);
  }
  
  return 0;
}
