#include<bits/stdc++.h>
using namespace std;
 
int main(){
   vector<int> arr ={2,1,5,3,1,5,6};
   vector<int> hash(10,0);
   for(int i=0;i<arr.size();i++){
     hash[arr[i]]+=1;
   }
   int n;
   cin>>n;
   cout<<hash[n];

 
 return 0;
}