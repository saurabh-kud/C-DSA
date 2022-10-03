// calculate total sale revenue of a company for both the year 


#include<bits/stdc++.h>
using namespace std;

class company{
    int year[2]={2016,2017};
    long long flat_roll_still_sipment[2];
    long long avg_net_selling_price[2];
    long long total_revenue=0;
    public:
    friend void cal_total_sale_revenue(company);

    company(){
        for(int i=0;i<2;i++){
            cout<<"enter flat roll shipments(in tons) for year "<<year[i]<<" : ";
            cin>>flat_roll_still_sipment[i];
            cout<<"enter average net selling price for year "<<year[i]<<" : ";
            cin>>avg_net_selling_price[i];
            cout<<endl<<"-------------------"<<endl;
        }
    }


};

void cal_total_sale_revenue(company r){

    for (int i=0;i<2;i++){
        long long revenue_one=r.avg_net_selling_price[i]*r.flat_roll_still_sipment[i];
        r.total_revenue+=revenue_one;
        
        cout<<"total sales revenue for year "<<r.year[i]<<" is :"<<revenue_one<<endl;

    }


    cout<<"total revenue of both year is "<<r.total_revenue<<endl;



}



 
int main(){
 
 company c1;
 cal_total_sale_revenue(c1);
 return 0;
}