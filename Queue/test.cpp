#include<bits/stdc++.h>
using namespace std;
 
 void rec(int n){
    if(n==1){
        return;
    }
    rec(n-1);
   cout<<"hello "<<n<<endl;

 }

int main(){
  int n{};
  cin>>n;
  rec(n);

 return 0;
}