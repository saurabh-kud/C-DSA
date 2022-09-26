#include<bits/stdc++.h>
using namespace std;


class income_tax{
    int sal,net_sal;
    string name;
    public:
    void details()
{ 
    cout<<"enter name: ";
    cin>>name;
     cout<<"nter your salary: ";
     cin>>sal;




}
      void tax()
      {
        if(sal<=500000)
       net_sal=sal-(sal*0.05);
        else if(sal>500000 && sal<1000000)
               net_sal=sal-(sal*10/100);
         else      
           net_sal=sal-(sal*25/100);
cout<<"Nt salary is : "<<net_sal;
      }
};

 
int main(){
 income_tax t1;
 t1.details();
 t1.tax();
    

 return 0;
}