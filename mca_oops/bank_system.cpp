#include<bits/stdc++.h>
using namespace std;

class account {
    int bank_bal{};

    public:

    account(){
        bank_bal=1000;
    }

    void withdrawal(){
        int withdrawal_amount{};
        cout<<"enter withdrawal amount ";
        cin>>withdrawal_amount;
        
        if(bank_bal>1000&& (bank_bal-withdrawal_amount)>1000){
            bank_bal-=withdrawal_amount;
            cout<<"withdrawal completed of "<<withdrawal_amount<<endl;
        }else{
            cout<<"your bank balance is less than 1000 can't withdrawal"<<endl;
        }
    }

    void deposite(){
        int deposite_amount{};
        cout<<"enter deposite amount ";
        cin>>deposite_amount;

        bank_bal+=deposite_amount;

        cout<<"deposite completed of "<<deposite_amount<<endl;
    }

    void chek_bal(){
        cout<<"your bank balance is "<<bank_bal<<endl;
    }

};
 
int main(){

    account a1;

    int option{};


  do{
    cout<<"1: for deposite "<<endl;
    cout<<"2: for check balance "<<endl;
    cout<<"3: for withdrawal "<<endl;
    cout<<"0: for quit the program"<<endl<<endl;
    cout<<"enter your option ";
    cin>>option;
    switch(option){
        case 1: 
          a1.deposite();
          break;
        case 2: 
           a1.chek_bal();
           break;
        case 3: 
         a1.withdrawal();
           break;
        default:
         cout<<"you enter wrong option";
         break;
    }
  }while(option);

   
    // a1.deposite();
    // a1.chek_bal();
    // a1.withdrawal();
 
 return 0;
}