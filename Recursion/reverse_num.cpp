#include<bits/stdc++.h>
using namespace std;

int powe(int x,int n){
    if(n==0){
        return 1;
    }
    int result= x*powe(x,n-1);
    return result;
}
int no_of_digit(int n){
   
    if(n/10==0){
    return 1;
    }
    return 1+ no_of_digit(n/10);
    
}
 
int reverse(int n){
    if(n==0){
        return 0;
    }

    int small=n/10;
    int rem=n%10;
    int result=rem*powe(10,(no_of_digit(n)-1));
    cout<<result<<endl;
    int smalloutput=reverse(small);

    
    return result+smalloutput;
}


int main(){
 

 cout<<reverse(536);
 return 0;
}