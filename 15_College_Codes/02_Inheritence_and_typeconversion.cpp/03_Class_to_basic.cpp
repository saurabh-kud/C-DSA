#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

    public:

    Time(int n){
        hours=n/60;
        minutes=n%60;
    }

    operator int(){
        int x;
        x=hours*60*60+minutes*60;
        return x;
    }

};
                    
int main(){

Time t(160);

int sec=t;

cout<<"total second is "<<sec;

  
return 0;
}