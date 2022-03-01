#include<bits/stdc++.h>
using namespace std;
int no_of_digit(int n){
   
    if(n/10==0){
    return 1;
    }
    return 1+ no_of_digit(n/10);
    
}
 
int main(){
    int n{};
    cin>>n;
    int result=no_of_digit(n);
    cout<<result;
 
 return 0;
}