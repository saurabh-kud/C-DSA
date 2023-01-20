#include<bits/stdc++.h>
using namespace std;

class calculator{
    int a,b,sum;
    public:
    calculator(){
        a=0,b=0,sum=0;
    }
    calculator(int a,int b){
        this->a=a;
        this->b=b;
    }
    calculator(calculator& cal){
        this->a=cal.a;
        this->b=cal.b;
        
    }

    void allcal(){
        
        cout<<"sum is "<<a+b<<endl;
        cout<<"substaction is "<<a-b<<endl;
        cout<<"multiply is "<<a*b<<endl;
        cout<<"devide is "<<a/b<<endl;
    }

   friend void get_details(calculator);
   void some();
   
    // operator overloading unary
    void  operator++(int){
        a++;
        b++;
    }
    //binary overloading 
    calculator operator+(calculator c){
         calculator newcal;
         newcal.a=a+c.a;
         newcal.b=b+c.b;
         return newcal;
    }



};

 void calculator::some(){
    cout<<"member function is ";
    cout<<"a is "<<a<<endl;
 }

void get_details(calculator c){
    cout<<"a is"<<c.a<<endl;
    cout<<"b is "<<c.b<<endl;
}

 
int main(){
 
 cout<<"first"<<endl<<endl;
 calculator c(10,5);
 c.allcal();
 get_details(c);
 c.some();
 cout<<endl<<endl;

 cout<<"second"<<endl<<endl;

 c++;
 c.allcal();
 calculator d(45,9);
 calculator e;
 cout<<endl<<endl;

 cout<<"after binary overloading"<<endl;
 e=c+d;
 e.allcal();
 get_details(e);
 return 0;
}