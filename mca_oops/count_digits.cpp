#include<bits/stdc++.h>
using namespace std;

int count_digits_devide(int n){
    int count=0;

 while(n!=0){
    n=n/10;
    count++;
    
 }
 return count;
}
// by string method
int count_digits_string(int n){
     string s= to_string(n);
     return s.length();
}

 
int main(){
 
 int n=0;
 cin>>n;

 cout<<count_digits_devide(n)<<endl;
 cout<<count_digits_string(n)<<endl;
 return 0;
}