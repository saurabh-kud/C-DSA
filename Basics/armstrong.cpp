#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number ";
    cin>>num;
    int a=num;
    int c=num;
    int sum{};
    int count{};
    int z{1};
    while(num!=0){
       num= num/10;
        count++;
    }

    while(a!=0){
        int temp=a%10;
        
        for(int i=1;i<=count;i++){
            z*=temp;
        }
        sum+=z;
        a=a/10;
        z=1;
    }
    if(c==sum){
        cout<<c<<" "<<"is a armstrong number";
    }else{
        cout<<c<<" "<<"is not a armstrong number";
    }

}