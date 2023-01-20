#include<bits/stdc++.h>
using namespace std;
 
int main(){
      
   try{
      int a,b;
      cin>>a>>b;

      if(b<=0){
        throw 10.56;
      }else{
        cout<<a/b<<endl;
      }
       
   }catch(int b){
     cout<<"error cought with value "<<b<<endl;
   }catch(char c){
    cout<<"error cought with character"<<endl;
   }catch(...){
    cout<<"this is default exception"<<endl;
   }

 return 0;
}