#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int first_index(vector<int> arr,int size,int x){

    if(arr[0]==x){
        return 0;
    }
    if(size==0){
      return -1;
    }
    int result=first_index(arr+1,size-1,x);
    return (result!=-1)?1+result:-1;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i{};i<n;i++){
        int inp{};
        cin>>inp;
        v.push_back(inp);
    }
    int q{};
    cin>>q;
    for(int i{};i<q;i++){
        int query{};
        cin>>query;
        
        int it=first_index(v,v.size(), query);
    
        if(it!=-1){
                cout<<"Yes "<<it<<endl;
        }else{
            int j{};
            while(j<v.size()){
        
                if(v[j]>query){
                    cout<<"No "<<j+1<<endl;
                    break;
                }
                j++;
            }
         
        }
    }
    return 0;
}
