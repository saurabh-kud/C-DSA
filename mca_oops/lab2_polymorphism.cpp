#include<bits/stdc++.h>
using namespace std;

class shape{
    int height=0;
    int width=0;
    public:
    shape(){

    }
    
    shape(int he,int wid){
        height=he;
        width=wid;

    }

     shape operator+(shape const & ob1){
        shape res;
        res.height=height+ob1.height;
        res.width=width+ob1.width;
        return res;

        
     }
     int calculate_area(){
        return height*width;
     }

};
int main(){
 
   shape obj1(10,12),obj2(20,23);
  
   shape obj3=obj1+obj2;
   cout<<"area is "<<obj3.calculate_area()<<endl;


 return 0;
}