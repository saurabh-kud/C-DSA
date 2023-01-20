#include<bits/stdc++.h>
using namespace std;
 template <typename T>

 class salary{
    T base_sal=0;
    T hra,dra;
    T net_sal=0;
     public:
    void set_data(){
        cout<<"enter base salary ";
        cin>>base_sal;
        cout<<"enter hra ";
        cin>>hra;
        cout<<"enter dra ";
        cin>>dra;
    }

    void cal_sal(){
        T temp;
       T temp2;
        temp=(hra/100.0)*base_sal;
        temp2=(dra/100.0)*base_sal;
        
        
        net_sal=base_sal;
        net_sal+=temp;
        net_sal+=temp2;
        // net_sal=base_sal;

        // net_sal+=(hra/100)*base_sal;
        cout<<"net salary is "<<net_sal<<endl;
    }


 };



int main(){
  salary <float>s1;
  s1.set_data();
  s1.cal_sal();
 return 0;
}