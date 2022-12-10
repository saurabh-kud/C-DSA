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

    Distance operator + (Distance& d2){
        Distance d3;
        d3.feet=feet+d2.feet;
        d3.inch=inch+d2.inch;
        return d3;
    }

    void show(){
        cout<<feet<<endl;
        cout<<inch<<endl;
    }

};
                    
int main(){

    Distance d1(10,20);

    Distance d2(20,30);

    Distance d3;

    d3=d1+d2;

    d3.show();
  
return 0;
}