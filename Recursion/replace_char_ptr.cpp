#include<bits/stdc++.h>
using namespace std;
 
 void replace_char_ptr(string &s,char a,char change,int i){
     if(s[i]==s.length()){
         return;
     }
     if(s[i]==a){
         s[i]=change;
     }
     replace_char_ptr(s,a,change,i+1);
 }


int main(){
 string s{};
 getline(cin,s);
 cout<<"enter change and from change value ";
 char a,change{};
 cin>>a>>change;
 replace_char_ptr(s,a,change,0);
 cout<<"after replace "<<s<<endl;
 return 0;
}