// program to add 2nd array all element at desier location on first array.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter 2nd array size ";
    int second_arr_size{};
    cin>>second_arr_size;
    
    int arr2nd[second_arr_size]{};
    cout<<"enter 2nd array element ";
    for(int i=0;i<second_arr_size;i++){
        cin>>arr2nd[i];
    }
    cout<<"enter 1st array size ";
    int first_arr_size{};
    cin>>first_arr_size;
    int total_size=first_arr_size+second_arr_size;
    int arr1st[total_size]{};
    cout<<"enter 1st array element ";
    for(int j=0;j<first_arr_size;j++){
        cin>>arr1st[j];


    }
    


   cout<<"enter position where you want to add second array ";
   int size{};
   cin>>size;

   cout<<"your 1st array is [ ";
       for(int temp:arr1st){
           cout<<temp<<" ";
       }
       cout<<"]"<<endl;
   int accu_sizefirst=(first_arr_size-1);
   int acc_totalsize=total_size-1;
   int i{};
      //shifting first array element to last from given position
       for(int j{};accu_sizefirst>=size;accu_sizefirst--){
           
           arr1st[acc_totalsize]=arr1st[accu_sizefirst];
           arr1st[accu_sizefirst]=0;
           acc_totalsize--;
          //    j++;

       }
       cout<<"your 1st array after is [ ";
       for(int temp:arr1st){
           cout<<temp<<" ";
       }
       cout<<"]"<<endl;

      //assinging 2nd array in first array 
       for(int i{};i<second_arr_size;i++){
           arr1st[size]=arr2nd[i];
           size++;
       }
       

       cout<<"your 2nd array is [ ";
       for(int temp:arr2nd){
           cout<<temp<<" ";
       }
       cout<<"]"<<endl;

       cout<<"your 2nd array is added in 1st array at desier location [ ";
        for(int temp:arr1st){
           cout<<temp<<" ";
       }
       cout<<"]";
       
   
}