#include<bits/stdc++.h>
using namespace std;

string numberToStr(int n){
    if(n>=0){
        if(n==0){
            return "zero";
        }else if(n==1){
            return "one";
        }else if(n==2){
            return "two";
        }else if(n==3){
            return "three";
        }else if(n==4){
            return "four";
        }else if(n==5){
            return "five";
        }else if(n==6){
            return "six";
        }else if(n==7){
            return "seven";
        }else if(n==8){
            return "eight";
        }else if(n==9){
            return "nine";
        }else{
            return "invalid";
        }
    }
}

 
int main(){
 int n;
 cin>>n;
 int rev{};
 while(n){
     rev=rev*10+n%10;
     n/=10;
 }
   while(rev){
       int k=rev%10;
       cout<<numberToStr(k)<<" ";
       rev/=10;
   }



 return 0;
}