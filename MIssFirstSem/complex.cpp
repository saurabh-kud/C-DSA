#include<bits/stdc++.h>
using namespace std;

class complex1{
    public:
    int real,img;

    complex1(){
        real=0;
        img=0;
    }

    complex1(int re,int im){
        real= re;
        img=im;

    }
   friend void sum(complex1,complex1);

   void display(){
     cout<<"real part is "<<real<<endl;
     cout<<"imginary part is "<<img<<endl;
   }


};

void sum(complex1 a,complex1 b){
    complex1 d;
    d.real=a.real+b.real;
    d.img=a.img+b.img;
    cout<<"real part sum is "<<d.real<<endl;
    cout<<"imaginary part sum is "<<d.img<<endl;
}
 
int main(){

  complex1 first(20,30);
  complex1 second(30,50);

   first.display();
   second.display(); 
   cout<<"-------------sum calculation---------------"<<endl;
  sum(first,second);
 return 0;
}