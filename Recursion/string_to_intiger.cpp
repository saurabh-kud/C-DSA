#include<bits/stdc++.h>
using namespace std;
 int string_to_integer(string s,int i){
     int n{};
     if(i==s.length()){
         return n;
     }
     int temp{1};

     for(int j{0};j<=s.length()-1-i;j++){
         if(j==0){
             temp=1;
         }else if(j==1){
             temp=10;
         }else{
             temp*=10;
        }
     }
   
        
            n+=((s[i])-'0')*temp;
     
       
      return n+string_to_integer(s,i+1);
    
}

int main(){
 string s{};
 getline(cin,s);
 int result=string_to_integer(s,0);
 cout<<result<<endl;
 return 0;
}