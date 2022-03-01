#include<bits/stdc++.h>
using namespace std;
 
void replace_char(char s[],char a,char change,int i){
    if(s[i]=='\0'){
        return;
    }
    if(s[i]==a){
        s[i]=change;
    }
 
    replace_char(s,a,change,i+1);
}


int main(){
   char s[50]{};
    cout<<"enter string ";
  cin.getline(s,50);
  char a{};
  char change{};
  cout<<"enter the char who want to replace and character from replace respectively ";
 cin>>a>>change;
 cout<<"entered string is "<<s<<endl;
 cout<<" el "<<a<<" change "<<change<<endl;
   replace_char(s,a,change,0);
  cout<<"after replace "<<endl;
  cout<<s<<endl;
 return 0;
}