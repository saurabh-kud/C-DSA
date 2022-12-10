#include<iostream>
using namespace std;
   // basic to class conversdion
class Time{
    int hours;
    int minutes;

    public:

    Time(int x){
        hours=x/60;
        minutes=x%60;
    }

    void showTime(){
        cout<<hours<<" hours "<<minutes<<" minutes "<<endl;
    }

};
                    
int main(){

    Time t(220);

    t.showTime();
  
return 0;
}