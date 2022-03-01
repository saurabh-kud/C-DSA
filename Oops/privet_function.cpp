#include<bits/stdc++.h>
using namespace std;

class account{
    int balance{};
    void upd_balance(int b){
      balance=b;
    }
    void close_acc();
    public:
      void read(int m){
          upd_balance(m);
      }
      void get_balance(){
          cout<<"your account balance is "<<balance<<endl;
      }
      void close(){
          close_acc();
      }
};
void account::close_acc(){
    cout<<"we are closing your account,thanks for joining us :)"<<endl;
}

int main(){
    account saurabh;
    saurabh.read(500);
    saurabh.get_balance();
    saurabh.close();
}