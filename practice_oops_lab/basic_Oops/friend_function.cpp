#include<bits/stdc++.h>
using namespace std;

class calculate{
    int first;
    int second;
     public:

     void setData(){
        cout<<"enter first value"<<endl;
        cin>>first;
        cout<<"enter second value"<<endl;
        cin>>second;
     }

     int add(){
        return first+second;

     }
    int multiply(){
        return first*second;
    }

    int devide();
    //declaration of  friend function
    void friend compare(calculate,calculate);

};
class calculate1{
    int first;
    int second;
     public:

     void setData(){
        cout<<"enter first value"<<endl;
        cin>>first;
        cout<<"enter second value"<<endl;
        cin>>second;
     }

     int add(){
        return first+second;

     }
    int multiply(){
        return first*second;
    }

    
    //declaration of  friend function
    void friend compare(calculate,calculate1);

};

int calculate::devide(){
    return first/second;

}
  //defining friend function
 void compare(calculate a1,calculate1 a2){
      if(a1.multiply()>a2.multiply()){
        cout<<"first object multiplication is higher with  value"<<a1.multiply()<<endl;
      }else{
        cout<<"second object multiplication is low"<<endl;
      }

 }

 
int main(){
   calculate cal;
   cal.setData();
   cout<<cal.add()<<endl;
   cout<<cal.multiply()<<endl;
   cout<<cal.devide()<<endl;
   calculate1 cal2;
   cal2.setData();
   cal2.add();cal2.multiply();

   compare(cal,cal2);
   
   
 return 0;
}