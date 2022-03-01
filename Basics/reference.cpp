#include<iostream>
#include<vector>

using namespace std;
int main(){
    int num{100};
    int &ror{num};
    cout<<num<<endl;
    cout<<ror<<endl;
    num=200;
    cout<<num<<endl;
    cout<<ror<<endl;
    ror=500;
    cout<<num<<endl;
    cout<<ror<<endl;
    vector<string> frien{"saurabh","satish","saroj"};
    for(auto str:frien)
     str="rahul";

    for(auto str:frien){
        cout<<str<<endl;
    }
    for(auto &str:frien)
     str="rahul";
     for(auto const &str:frien)
     cout<<str<<endl;
    vector<int> name {10,52,46,12};
    for(auto temp:name)
      temp+=10;
    for(auto temp:name){
     cout<<temp<<endl;
    }
    for(auto &x:name)
     x+=10;
     for(auto const &x:name)
     //  x+=2;
     cout<<x<<endl;

}