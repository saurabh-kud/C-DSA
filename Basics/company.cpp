#include<bits/stdc++.h>
using namespace std;
 
int main(){
     
     char gender;
      int age=0;
      cout<<"gender input";
      cin>>gender;
      cout<<"age input";
      cin>>age;
      int married=0;
      cout<<"married status";
      cin>>married;

      
    // if(married==1 && gender=='m'){
    //     cout<<"insurence given"<<endl;
    // }else if(gender=='m'&& age<=35){
    //     cout<<"insurence  given"<<endl;
    // }else if(gender=='m' && age>35){
    //     cout<<"insurence not given"<<endl;
    // }else if(gender=='f'&& age<=30){
    //     cout<<"insurence  given"<<endl;

    // }else if(gender=='f'&& age>30){
    //     cout<<"insurence not given"<<endl;

    // }else{
    //     cout<<"insurence  given"<<endl;

    // }
    if(married==1){
            cout<<"insurence given"<<endl;

    }else{
       
    if(gender=='m'){
        
            if(age<=35){
            cout<<"insurence given"<<endl;
                
            }else{
              cout<<"insurence not given"<<endl;

            }
        
    }else{
        
             if(age<=30){
            cout<<"insurence given"<<endl;
                
            }else{
              cout<<"insurence not given"<<endl;

            }
        

        
    }

    }


 
 return 0;
}