#include<bits/stdc++.h>
using namespace std;
class shape1;
class shape{
    int height;
    int width;
      public:
      //constructor
      shape(int height,int width){
         this->height=height;
         this->width=width;
      }
      
      int calc(){
        return height*width;
      }
    
    void friend compare(shape,shape1);
    

};
class shape1{
    int height;
    int width;
      public:
      shape1(int height,int width){
         this->height=height;
         this->width=width;
      }
      
      int calc(){
        return height*width;
      }
    
    void friend compare(shape,shape1);
};

//friend function definintion
void compare(shape s,shape1 s2){
    if(s.calc()>s2.calc()){
        cout<<"first object height width is greater"<<endl;
    }else{
        cout<<"second object height width is greater"<<endl;
    }
}
 
int main(){

    shape s(100,200);
    shape1 s2(45,50);
    //friend function calling 
    compare(s,s2);
 
 return 0;
}