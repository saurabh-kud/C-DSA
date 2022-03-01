#include<bits/stdc++.h>
using namespace std;

class box{
    int height{};
    int width{};
    public:
      box(){
          height=5;
          width=10;
      }
     box operator + (const box& a){
         box c3;
         c3.height=this->height-a.height;
         c3.width= this->width-a.width;
         return c3;
     }
      void display_volume(){
          cout<<"volume is "<<height*width<<endl;
      }
};

int main(){
    box a1,b1,c1;
    a1.display_volume();
    b1.display_volume();
    c1=a1+b1;
    c1.display_volume();
}