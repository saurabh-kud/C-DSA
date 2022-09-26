#include<bits/stdc++.h>
using namespace std;
 
 class famaly {
    int n{};
   int* age;
  public:
   famaly(int ag){
    n=ag;
     age=new int [ag];
      for(int i=0;i<n;i++){
            cout<<"enter "<<i+1<<" member age ";
            cin>>age[i];
        }
   }
    
    
   void calculate_price(){
     int total_price{};
     for (int i=0;i<n;i++){
        if(age[i]<10){
             
             total_price+=100;
        }else if(age[i]>=10&& age[i]<15){
            int discount{};
            discount=(100*10)/100;
            total_price+=(100-discount);
        }else if(age[i]>=15&&age[i]<=20){
            int dis{};
            dis=(100*5)/100;
            total_price+=(100-dis);
        }else{
            total_price+=100;
        }
     }
     cout<<"total price of ticket is "<<total_price<<endl;
   }


};


int main(){
  int n{};
  cout<<"enter how many famaly members ";
  cin>>n;

  famaly f1(n);
  
  f1.calculate_price();

 return 0;
}