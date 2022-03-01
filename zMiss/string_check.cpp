#include<bits/stdc++.h>
using namespace std;
void change(string &s){
  
    s[2]='m';
    cout<<s[2]<<endl;
 
}
int main(){
 string s{};
 getline(cin,s);
 cout<<s<<endl;
 s[3]='u';
 cout<<&s<<endl;
 change(s);

 cout<<"after change ";
 cout<<s<<endl;
 return 0;
}