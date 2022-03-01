#include<bits/stdc++.h>
using namespace std;

class car{
    private:
        int wheel{};
        int speed{};
     public:
     void set_data(int wh,int spd){
         wheel=wh;
         speed=spd;
     }
     void get_data(){
       cout<<"car have "<<wheel<<endl;
       cout<<"car drive can "<<speed<<"km/h"<<endl;
     }
};

int main(){
    car bugati;
    bugati.set_data(4,300);
    bugati.get_data();
    cout<<bugati.wheel<<endl;
}