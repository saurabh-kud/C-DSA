#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int marks[5];
    int total={};

    public:
      void set_data(){
        cout<<"enter your name ";
        cin>>name;
        cout<<"enter your marks one by one ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }

        for(int j=0;j<5;j++){
            total+=marks[j];
        }
      }
   
    void get_percentage(){
        cout<<"your total marks is "<<total<<endl;
        cout<<"your percentage is "<<(total*100)/500<<"%"<<endl;
    }

      
      
};


 
int main(){
 
 student s1;
 s1.set_data();
 s1.get_percentage();

 return 0;
}