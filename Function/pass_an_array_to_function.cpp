#include<iostream>

using namespace std;
 int arrfun(int*,int);
int main(){
    int arr[5]{5,10,25,23,12};
    arrfun(arr,5);
}
 int arrfun(int * fun,int a){
    for(int i=0;i<a;i++){
        fun[i]+=2;
        cout<<fun[i]<<endl;
    }
    return 0;
}