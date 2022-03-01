#include<bits/stdc++.h>
using namespace std;
  
  string remove_x(string s,int i){
      string nw{};
      if(i==s.length()){
          return nw=s[i];
      }
      if(s[i]!='x'){
          nw+=s[i];
      }
      return nw+remove_x(s,i+1);
  }

int main(){
   string s{};
   getline(cin,s);
   string result=remove_x(s,0);
   cout<<result<<endl;
 return 0;
}