#include<bits/stdc++.h>
using namespace std;

int powe(int x,int n){
    if(n==0){
        return 1;
    }
    int result= x*powe(x,n-1);
    return result;
}
 
int main(){
 int x{},n{};
 cin>>x>>n;
 cout<<powe(x,n);
 return 0;
}