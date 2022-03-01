#include<bits/stdc++.h>
using namespace std;

int count_zero(int n){
     int counter{};
     if(n==0){
         return counter;
     }
     int small= count_zero(n/10);
     
     if(n%10==0){
         ++counter;

        }
     
     return small+counter;

}
int main(){
 int n{};
 cin>>n;
 int result=count_zero(n);
 cout<<result<<endl;
 return 0;
}