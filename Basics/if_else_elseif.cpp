#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to if else and elseif statement :)"<<endl;
    cout<<"enter a number between 0 and 20 : ";
    int num {};
    cin>>num;

    if(num>0 && num<20){
        cout<<"your entered number in the range :) "<<endl;
    }
    else if(num==0 || num==20){
        if(num==0){
            cout<<"your entered number is 0"<<endl;
        }else{
            cout<<"your entered number is 20"<<endl;

        }

    } else{
       cout<<"your entered number is not in the range! plese enter correct number(:"<<endl;
    }


}