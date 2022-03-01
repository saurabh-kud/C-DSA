#include<iostream>
using namespace std;

int main(){
    cout<<"welcome to paisa to ruppes aatani converter"<<endl;
    cout<<"Enter an amount in paisa: ";
    int paisas{0};
    cin>>paisas;
    cout<<"you can provide this changes as follows: "<<endl;
    int ruppes{0};
    int aatani{0};
    int chaamani{0};
    int paisa10{0};
    int paisa5{0};
    int paisa{0};
    ruppes = paisas/100;
    paisas%=100;
    aatani =paisas/50;
    paisas%=50;
    chaamani = paisas/25;
    paisas%=25;
    paisa10 = paisas/10;
    paisas%=10;
    paisa5 = paisas/5;
    paisas%=5;
    paisa=paisas/1;
    cout<<"ruppess  :"<<ruppes<<endl;
    cout<<"aatani   :"<<aatani<<endl;
    cout<<"chaamani :"<<chaamani<<endl;
    cout<<"paisa10  :"<<paisa10<<endl;
    cout<<"paisa5   :"<<paisa5<<endl;
    cout<<"paisa    :"<<paisa<<endl;
}