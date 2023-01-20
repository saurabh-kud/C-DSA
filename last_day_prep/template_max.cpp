#include<bits/stdc++.h>
using namespace std;
 template <typename T>
 T find_max(T a, T b){
    if(a>b){
        return a;
    }else{
        return b;
    }
 }
int main(){
   
   cout<<find_max(10,56)<<endl;
   cout<<find_max(50.6,10.9)<<endl;
   cout<<find_max('c','r')<<endl;


 return 0;
}