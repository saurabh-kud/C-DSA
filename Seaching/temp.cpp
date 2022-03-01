// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[]{5,10,20,36,56};
   int min{},max{4},mid{},key{};
   cout<<"enter to search ";
   cin>>key;
   while(min<=max){
       mid=(min+max)/2;
       if(key==arr[mid]){
           cout<<"found at "<<mid<<endl;
           break;
       }else if(key<arr[mid]){
           max=mid-1;
       }else if(key>arr[mid]){
           min=mid+1;
       }
   }
    return 0;
}