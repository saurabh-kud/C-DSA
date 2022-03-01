#include<bits/stdc++.h>
using namespace std;

int powe(int x,int n){
    if(n==0){
        return 1;
    }
    int result= x*powe(x,n-1);
    return result;
}
 int subsequence(string s,string * output){
     if(s.length()==0){
         output[0]=" ";
         return 1;
     }
      string sub_str=s.substr(1);
      int smalloutput=subsequence(sub_str,output);
      for(int i{};i<smalloutput;i++){
          output[i+smalloutput]=s[0]+output[i];
      }
      return 2*smalloutput;
}

int main(){
   string s{};
   cin>>s;
   int size=powe(2,s.length());
    string * output=new string [size];
    int si= subsequence(s,output);
    for(int i{};i<size;i++){
        cout<<output[i]<<endl;
    }
    delete [] output ;

    for(int i{};i<size;i++){
        cout<<output[i]<<endl;
    }
 return 0;
}