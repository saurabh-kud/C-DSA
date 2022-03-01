#include<iostream>
#include<string>
using namespace std;
main(){
 string str{};
 string name;
 cout<<"enter your email : ";
 getline(cin,str);
 cout<<str<<endl;
  unsigned int temp{str.find('@')};
  int c{};
  for(auto ged : str){
      if(ged=='@'){
         c=1;
         break;
      }else{
          c=0;
          continue;
      }

  }
//   cout<<c<<endl;

  if(c){
      cout<<"email is valid"<<endl;
  }else{
  cout<<"email is not valid"<<endl;
  }

 //  cout<<temp<<endl;
  

 unsigned int count{str.find('@')};
 //  cout<<count<<endl;
  string uname{str.substr(0,str.find('@'))};
 //  string uname{"saurabh_2001F"};

  
 cout<<"your username is "<<uname<<endl;
 bool isvalid{};

 for(int one : uname){
     if(one>=65&&one<=122||one>=48&&one<=57||one==46||one==95){
      isvalid=true;
     }else{
         cout<<uname<<" invalid username"<<endl;
         isvalid=false;
         break;
     }
 }
 if(isvalid){
     cout<<uname<<" username is valid"<<endl;
 }





}