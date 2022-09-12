

#include<bits/stdc++.h>
using namespace std;


struct student{
     string s;

    int marks[5];
    
};
 
int main(){
 
   student sau1[2];


   for(int i=0;i<2;i++){
  cout<< "enter your name ";
   cin>>sau1[i].s;
   cout<<"enter your marks "<<endl;
      for(int j=0;j<5;j++){
     cin>>sau1[i].marks[j];
   }

   }
  

   


   cout<<"----students details------ "<<endl;
  

   
   for(int i=0;i<2;i++){
  cout<< "your name is "<<sau1[i].s<<endl;
     int total=0;
    for(int j=0;j<5;j++){
        total+=sau1[i].marks[j];
    }
    cout<<"total marks is "<<total<<endl;
    cout<<"your percentage is "<<total*100/500<<endl;
   }
  


   

   

   
   


 return 0;
}