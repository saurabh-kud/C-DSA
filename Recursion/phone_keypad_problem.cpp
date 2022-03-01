#include<bits/stdc++.h>
using namespace std;
 
void keypad(int n,vector<string>& output,string * str_arr,string ans){
  if(n==0){
    output.push_back(ans);
    return ;
  }
  int small{n/10};
  int remainder=n%10;
   string s= str_arr[remainder];
   for(int i{};i<s.size();i++){
     
      ans.push_back(s[i]);
      keypad(small,output,str_arr,ans);
      ans.pop_back();
   }
}

int main(){
 
  int n{};
  cin>>n;
  string str_arr[]{" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  vector <string> output{};
  string ans{" "};
  keypad(n,output,str_arr,ans);
 
  for(auto temp:output){
    cout<<temp<<endl;
  }
 return 0;
}