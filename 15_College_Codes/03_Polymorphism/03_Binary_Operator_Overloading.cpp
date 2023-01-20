#include<iostream>
using namespace std;

class Distance{

    public:
    int feet;
    int inch;
    
    Distance(){
        feet=0;
        inch=0;
    }

    Distance(int x, int y){
        feet=x;
        inch=y;
    }
    //copy consturctor
    Distance ( Distance &ibrar){
        feet=ibrar.feet;
        inch=ibrar.inch;
    }

    Distance operator + (Distance& ibrar){
        Distance d3;
        d3.feet=feet+ibrar.feet;
        d3.inch=inch+ibrar.inch;
        return d3;
    }

    void show(){
        cout<<"feet is "<<feet<<endl;
        cout<<"inch is "<<inch<<endl;
    }

};
                    
int main(){

    Distance d1(10,20);

    Distance d2(20,30);
 
  
    Distance d3;

    d3=d1+d3; d1+(d3)

    d3.show();
  
return 0;
}