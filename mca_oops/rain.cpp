#include<bits/stdc++.h>
using namespace std;


class rain{
  int rain_data[12]{};
  int total={};
  public:
  rain(){
    for(int i={};i<12;i++){
      cout<<"enter "<<i+1<<" month rain data " ;
      cin>>rain_data[i];
      
    }
  }

  void min(){
    for(int i={};i<12;i++){
        total+=rain_data[i];
    }
   cout<<"total rain is "<<total<<endl<<endl;
   cout<<"average rain is "<<total/12.0<<endl;
  }

  //get maximum
  void get_max_rain(){
    int max=rain_data[0];
    for(int i=1;i<12;i++){
        if(max<rain_data[i]){
            max=rain_data[i];
        }
    }
     cout<<"max rain in month is "<<max<<endl;
  }

  //get minimum
  void get_min_rain(){
    int min=rain_data[0];
    for(int i=1;i<12;i++){
        if(min>rain_data[i]){
            min=rain_data[i];
        }
    }
     cout<<"minimum rain in month is "<<min<<endl;
  }

};


 
int main(){
  rain rainobj;
  rainobj.min();
  rainobj.get_max_rain();
  rainobj.get_min_rain();
 return 0;
}