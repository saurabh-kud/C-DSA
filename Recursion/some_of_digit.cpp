#include<bits/stdc++.h>
using namespace std;
int some_of_digit(int n){
    if(n==0){
        return 0;
    }
    int last=n%10;
    int remening=n/10;
    return last+some_of_digit(remening);
    
}
 
int main(){
 int n{};
 cin>>n;
 int result=some_of_digit(n);
 cout<<result<<endl;
 return 0;
}