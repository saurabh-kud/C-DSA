#include<bits/stdc++.h>
using namespace std;
bool palindram(string s,int i){
  if(i>(s.length())/2){
      return true;
  }
  return s[i]==s[s.length()-i-1] && palindram(s,++i);
}
 
int main(){
 string s{};
 getline(cin,s);

 bool result= palindram(s,0);
 cout<<(result==true?"yes":"NO");
 
 return 0;
}