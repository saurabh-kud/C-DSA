
#include<bits/stdc++.h>
using namespace std;

template <typename T>
 
 T calc_area(T height,T width){
    return height*width;
 }

 
int main(){
   int height,width;
   cout<<"enter height ";
   cin>>height;
   cout<<"enter width ";
   cin>>width;
   cout<<calc_area(height,width)<<endl;
   cout<<calc_area(30.56,67.90)<<endl;

 return 0;
}