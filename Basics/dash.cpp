#include<iostream>
using namespace std;
#include<vector>
main(){
    int num{};
    cout<<"how much you have data: ";
    cin>>num;
     vector<int> vec;
    for(int i{1};i<=num;i++){
       
        int temp{};
        cout<<"enter dataset "<<i<<": ";
        cin>>temp;
        vec.push_back(temp);
    }
   
    for(auto val:vec){
        // cout<<val<<endl;
        for(int i{1};i<=val;i++){
            if(i%5==0){
              cout<<":)";
            }else
            cout<<"-";
        }
      cout<<endl;
    }
}