#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &a,vector<int> b){
    int i{},j{};
    vector<int> c{};
    int m=a.size();
    int n=b.size();
     while(i<m && j<n){
         if(a[i]<b[j]){
             c.push_back(a[i++]);

         }else{
             c.push_back(b[j++]);
         }
     }
     while(i<m){
         c.push_back(a[i++]);
     }
     while(j<n){
         c.push_back(b[j++]);
     }

     return c;
}
 
int main(){
  vector<int> a(8){5,8,20,50,89};
  vector<int> b{10,12,29};
 vector<int> c= merge(a,b);
 for(auto temp:c){
     cout<<temp<<" ";
 }
 return 0;
}