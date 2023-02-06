#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int n1,n2;
    cin>>n1>>n2;
    while(n1>0&&n2>0){
        if(n1>n2){
            n1=n1%n2;
        }else{
            n2%=n1;
        }
    }
    if(n1==0){
        cout<<"gcd is "<<n2<<endl;
    }else{
        cout<<"gcd is "<<n1<<endl;
    }
    // WE HAVE A GCD FUNCTION WHICH CALCULATE IT IS PART OF ALGORITHM IN C++
    // cout<<__gcd(n1,n2);
 
 return 0;
}