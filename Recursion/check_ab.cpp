#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    if(s.size()==0){
       return true;
    }
   
    if(s[0]=='a'){
        if(s.size()>1 && s.substr(1,3)=="bb"){
            return check(s.substr(3));
        }else{
            return check(s.substr(1));
        }

    }else{
        return false;
    }
    
}
 
int main(){
 string s{};
 getline(cin,s);
 bool result=check(s);
 result==true?cout<<"true":cout<<"false";
 return 0;
}