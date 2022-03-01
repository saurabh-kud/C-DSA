#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a{},b{};
    vector<string> str{"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cout<<endl;
    cin>>b;
    int temp{};
    int temp1{1};
    int temp3{};
    temp3=b<=9?b:9;
    if(a<=9){
        for(;a<=temp3;a++){
            cout<<str.at(a-temp1)<<endl;
            temp++;
        }
    }
    if(b>9){
        for(int temp{10};temp<=b;temp++){
            if(temp%2==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
}