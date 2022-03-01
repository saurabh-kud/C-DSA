//program of example of pass by pointer through swap program
#include<iostream>
using namespace std;
int swap(int * ,int *);
int main(){
    int a{512},b{256};
    cout<<"before swap "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"after swap "<<a<<" "<<b<<endl;
}
int swap(int *x,int *y){
    int z=*x;
    *x=*y;
    *y=z;
   return 0;
}