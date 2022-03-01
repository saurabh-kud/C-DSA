//program to slice some word from  a sting
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[30]{};
    cout<<"enter string ";
    cin.getline(arr,30);
    cout<<"entered string is "<<arr<<endl;
   int count{};
   int i{};
   int temp{0};
   while(arr[i]!='\0'){
       count++;
       i++;

   }
 cout<<count;
 i=0;

 for(;i<count;i++){
     if(arr[i]==arr[(count-1-i)]){
        temp=1;
     }else{
         temp=0;
         break;
     }
 }
 if(temp==1){
     cout<<"palindrom sting"<<endl;
 }else{
     cout<<"non palindrom sting"<<endl;
 }
    
}