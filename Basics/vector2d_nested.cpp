#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> vector_2d
    {
       {5,10},
       {20,25,35},
       {10,78,36,42,39}

    };
    for(auto vec : vector_2d){
        for(auto value:vec){
          
            cout<<value<<" ";
          
        }
        cout<<endl;
    }


}

