#include<iostream>
#include<string>
using namespace std;
int encripting(std::string);
int decripting(std::string);
 string alpha {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
 string cypher{"[KTMLOSJ`CBRZQDWFI_EUYHXGVNtirsoqpwuhygfdbmlzcaxnvkje"};
 string encripted{};
int main(){


 string input{};
 cout<<"enter string ";
 getline(cin,input);
 cout<<"entered string "<<input<<endl;
 
 cout<<"encripting......"<<endl;
 encripting(input);
 cout<<"decripting......"<<endl;
 decripting(encripted);
 int ch {94};

  
}

 int encripting(string input){
      int counter{};
      string temp{input};

    for(int temp1 :input){
  
      if(temp1>=65&&temp1<=122){
       
       temp.at(counter) =cypher.at(alpha.find(static_cast<char>(temp1)));
       counter++;
      }else if(temp1>=48&&temp1<=57){
        temp.at(counter) =temp1;
        counter++;
      }else if(temp1==32){
         temp.at(counter) ='[';
         counter++;
      }else{
        temp.at(counter) =static_cast<char>(temp1);
        counter++;
    }
   }
    cout<<temp<<endl;
    
     encripted=temp;
    return 0;
 }

     
       
 int decripting(string dec){
     int counter{};
     string inp{dec};
    //  cout<<dec<<endl;
     for(int temp1:dec){
      
        if(temp1>=65&&temp1<=172)
        {
         
          inp.at(counter) =alpha.at(cypher.find(static_cast<char>(temp1)));
         counter++;
         
         
        }else{
           
             inp.at(counter) =static_cast<char>(temp1);
            counter++;
          
           
        }
      }
    cout<<inp<<endl;
    return 0;
 }