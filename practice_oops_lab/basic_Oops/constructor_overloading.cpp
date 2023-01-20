#include<bits/stdc++.h>
using namespace std;

class shape{
    int height;
    int width;
    public:
       shape(){
        height=0;
        width=0;
       } 
       shape(int height,int width){
        this->height=height;
        this->width=width;
       }

       shape(shape &s1){
        height=s1.height;
        width=s1.width;
       }

       void calculate(){
        cout<<"height is "<<height<<endl;
        cout<<"width is "<<width<<endl;
        cout<<"area is "<<(height*width)/0.5<<endl;
       }

};


 
int main(){
    shape triangle(10,15);
    triangle.calculate();
    shape triangle1;
    triangle1.calculate();
    shape triangle2(triangle);
    triangle2.calculate();
 return 0;
}