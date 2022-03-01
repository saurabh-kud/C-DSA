#include<iostream>
using namespace std;

int main(){
    int n;
    bool temp{false};
    while(!temp){
        cout<<"enter a number between 0 and 10 ";
        cin>>n;
        if(n<=0||n>=10){

            cout<<"invalid number! "<<endl;
            // cin>>n;
           
        }else{
        temp=true; 
        cout<<"thanks";
        }

    }
}