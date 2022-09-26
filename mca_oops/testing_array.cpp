#include<bits/stdc++.h>
using namespace std;

class family {
    private:
    int n;
    string s="saurabh";
    int * arr;

   public:
   family(int a){
      arr=new int[a];
   }
   family(int a, string k){
    arr=new int[a];
    s=k;
   }

    
   void get_size(){
    //   cout<<sizeof(arr)/sizeof(arr[0]);
      cout<<s<<endl;
      cout<<arr<<endl;
   }

};



 
int main(){
family f1(10,"gaurav");

f1.get_size();

 family f2(5);
 f2.get_size();

    return 0;
}

 
