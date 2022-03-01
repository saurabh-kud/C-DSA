#include<iostream>
using namespace std;
int main(){
    int arr[]{10,20,78,20,30};
    for(auto temp :arr){
        cout<<(temp+=10)<<endl;
    }
}