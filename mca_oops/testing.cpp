#include<bits/stdc++.h>
using namespace std;

class ob{
    int a;
    int b;
    public:
      
      friend void print(ob);

};
void print(ob){
    cout<<" this is for priniin"<<endl;

}



 
int main(){
   ob ob1;
   print(ob1);
   
 return 0;
}