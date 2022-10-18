#include<bits/stdc++.h>
using namespace std;

class shape{
  
  int height,width,radius,area;


  public:
   
   //overloading function for calculating area for different shape
   void calc_area(float rad){
     radius=rad;

     area=3.14*(radius*radius);
     cout<<endl<<endl<<"######--------######"<<endl;
     cout<<endl<<"area of circle is "<<area<<endl;
   }

   void calc_area(int hei,int wid){
    height=hei;
    width=wid;
    area=height*width;
    cout<<endl<<endl<<"######--------######"<<endl;
     cout<<endl<<"area of rectangal is "<<area<<endl<<endl;
   }

  

  
  

};

 
int main(){
 
   int radius;
   cout<<"enter radius for calculate circle area : ";
   cin>>radius;
   
   int height,width;

   cout<<"enter height and width for calcuate rectangal area : ";
   cin>>height>>width;
   
   shape circle;
   circle.calc_area(radius);
   shape rectangal;
   rectangal.calc_area(height,width);

 return 0;
}