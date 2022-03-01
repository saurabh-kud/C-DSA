// PROGRAM TO EX OF PASS BY REFERENCE by swap program
#include<iostream>
using namespace std;
int swap(int *,int *);

int main(){
 int a{5},b{10};
 cout<<a<<" "<<b<<endl;
 swap(a,b);
 cout<<"after swap ";
 cout<<a<<" "<<b<<endl;
 return 0;
}

int swap(int &a,int &b){
    int z=a;
    a=b;
    b=z;
    return 0;
}
