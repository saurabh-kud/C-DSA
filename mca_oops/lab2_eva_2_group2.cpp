#include<bits/stdc++.h>
using namespace std;

class shape{
  
  int height,width,side,perimeter;


  public:
   
   //overloading function for calculating area for different shape
   void calc_perimeter(float sid){
     side=sid;

     perimeter=4*side;
     cout<<endl<<endl<<"######--------######"<<endl;
     cout<<endl<<"perimeter of square is "<<perimeter<<endl;
   }

   void calc_perimeter(int hei,int wid){
    height=hei;
    width=wid;
    perimeter= 2*height*width;
    cout<<endl<<endl<<"######--------######"<<endl;
     cout<<endl<<"perimeter of rectangal is "<<perimeter<<endl<<endl;
   }
};

 
int main(){
 
   int side;
   cout<<"enter side for calculate squrare perimeter : ";
   cin>>side;
   
   int height,width;

   cout<<"enter height and width for calcuate rectangal perimeter : ";
   cin>>height>>width;
   
   shape squrare;
   squrare.calc_perimeter(side);
   shape rectangal;
   rectangal.calc_perimeter(height,width);

 return 0;
}