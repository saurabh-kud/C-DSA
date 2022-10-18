#include<bits/stdc++.h>
using namespace std;

class shape{
    int height=0;
    int width=0;
    int area=0;
    public:
   
    
    shape(){
        int he,wid;
        cout<<"enter shape height ";
        cin>>he;
        cout<<"enter shape width ";
        cin>>wid;
        height=he;
        width=wid;

    }
    void area_cal(){
        area=height*width;
    }

     shape operator*(shape  & ob1){
        shape res;
        res.area=area*ob1.area;
        return res;
    }
    

};
int main(){
 
   shape obj1 ,obj2;
  
 //    shape obj3=obj1+obj2;
//    cout<<"area is "<<obj3.area<<endl;
 return 0;
}