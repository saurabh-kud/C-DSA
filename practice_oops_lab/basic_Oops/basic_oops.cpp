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

};

int calculate::devide(){
    return first/second;

}

 
int main(){
   calculate cal;
   cal.setData();
   cout<<cal.add()<<endl;
   cout<<cal.multiply()<<endl;
   cout<<cal.devide()<<endl;
   
   
 return 0;
}