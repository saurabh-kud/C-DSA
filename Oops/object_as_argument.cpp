//this program illustrate how can we pass object as function arguments
#include<bits/stdc++.h>
using namespace std;
class add_obj{
    public:
    int a{};
     void add(add_obj b){
         a+=b.a;
     }
};

main(){
    add_obj sau,gau;
    sau.a=50;
    gau.a=75;
    cout<<"before add object value "<<sau.a<<" "<<gau.a<<endl;
    gau.add(sau);
    cout<<"after addd object value "<<sau.a<<" "<<gau.a<<endl;
}