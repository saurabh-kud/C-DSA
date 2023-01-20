#include<bits/stdc++.h>
using namespace std;


int main(){
    ofstream outf("shubham.txt");
    outf<<"This is the first line"<<endl;
    outf<<"This is an open book test"<<endl;
    outf<<"The test is based on c++ file handling";
    
    outf.close();
    
    ifstream inf("shubham.txt");
    while(!inf.eof()){
    string s;
    getline(inf,s);
    
    
     int last=s.size()-1;
  
    for(int i=(s.size()-1);i>=0;i--){
        if(s[i]==' '){
            for(int j=i;j<=last;j++){
                cout<<s[j];
            }
            last=i;
        }
        if(i==0){
            for(int k=i;k>last;k++){
                cout<<s[k];
            }
          
        }
    }
    
   
    cout<<endl;
    }
    inf.close();
}