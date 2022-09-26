#include<bits/stdc++.h>
using namespace std;
class inventory {
    string products[6]{"shirts","pants","T-shirt","sweaters","hats","bags"};
    int purchase_sale_data[6];
    int percentage_sold_data[6];
    int total_purchase=0;
    int total_percentage=0;
     public:
     inventory (){
        for(int i=0;i<6;i++){
            cout<<"enter purchase sale for "<<products[i]<<" : ";
            cin>>purchase_sale_data[i];
            cout<<"enter percentage sale for "<<products[i]<<" : ";
            cin>>percentage_sold_data[i];
        }
     }

     //declaring friend function
   
   friend void cal_percentage(inventory);

};

 //definition of friend function
void cal_percentage(inventory  t){
      cout<<endl<<endl<<"-----------------------------------------"<<endl;
      for(int i=0;i<6;i++){
         cout<<"percentage sale for "<<t.products[i]<<" is "<<(t.percentage_sold_data[i]*100.0)/t.purchase_sale_data[i]<<"%"<<endl;
          t.total_purchase+=t.purchase_sale_data[i];
          t.total_percentage+=t.percentage_sold_data[i];
      }
       cout<<endl<<endl<<"----------------------------------"<<endl;

      cout<<"total percentage is "<<(t.total_percentage*100.0)/t.total_purchase<<"%"<<endl;
   }
int main(){
 
  inventory r1;
  cal_percentage(r1);

 return 0;
}
