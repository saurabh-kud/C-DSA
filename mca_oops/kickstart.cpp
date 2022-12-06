#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int t;
 cin>>t;
 while(t--){
    int pass_length=0;
    cin>>pass_length;
    string s;
    cin>>s;
    bool isUppper=false;
    bool isLower=false;
    bool isSpecial=false;
    for(int i=0;i<s.size();i++){
    if(s[i]>='A' && s[i]<='Z'){
        isUppper=true;

    }else if(s[i]>='a'&& s[i]<='z'){
        isLower=true;
    }else if(s[i]=='#'|| s[i]=='@'||s[i]=='*'||s[i]=='&'){
        isSpecial=true;
    }
    }







    
   if(isLower&& isSpecial&& isUppper){
    cout<<s<<endl;

   }else if(!isUppper&& !isLower&& !isSpecial){
    s.push_back(R);
    s.push_back(a);
    s.push_back(@);
   }else if(!isUppper&&isLower&& isSpecial ){
    s.push_back(A);
   }else if(isUppper&& !isLower&& isSpecial){
    s.push_back(b);
   }else if(isUppper&& isLower && !isSpecial){
    s.push_back(@);
   }
   cout<<s<<endl;
 }

 return 0;
}