#include<bits/stdc++.h>
using namespace std;

 template <typename to>

  void mall(to option){
    if(option==1 || option ==2){
        cout<<"you will get 5% discout"<<endl;   
    }else if(option ==3){
        cout<<"you will get 10% discount"<<endl;
    }

  }
  
 
int main(){
   
   int option;
    int exit=1;
    do{
        cout<<"select option: "<<endl;
        cout<<"1.only Mobile"<<endl;
        cout<<"2.only powerbank"<<endl;
        cout<<"3.mobile with powerbank"<<endl;
        cout<<"4.nothing";
        cin>>option;
        switch(option){
            case 1: mall(1);
                   break;
            case 2 :mall(2);
                    break;
            case 3 : mall(3);
                    break;
            case 4 : exit=0;
                   break;
        }
    }while(exit==1);
   


 return 0;
}