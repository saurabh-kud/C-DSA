#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &vec);
int *apply_all(vector<int>&vec1,size_t,vector<int>&vec2,size_t);
void print(int *,size_t);
int main(){
    vector<int>vec1{10,12,15};
    vector<int> vec2{5,6,7,8};
    // cout<<"enter size of vector 1 ";
    // size_t size1{};
    // cin>>size1;
    // cout<<"enter vector element for vector 1 ";
    // int n{};
    // cin>>n;
    // for(int i{};i<size1;i++){
    // cin>>vec1.insert();
    // }
    // cout<<"enter size of vector 2 ";
    // size_t size2{};
    // cin>>size2;
    // cout<<"enter vector element for vector 2 ";
    // int num{};
    // cin>>num;
    // for(int i{};i<size2;i++)
    
    // cin>>vec2.insert(n);
    
    cout<<"vector 1:"<<endl;
    print(vec1);
    cout<<"vector 2:"<<endl;
    print(vec2);
    // size_t size1=vec1.size();
    // size_t size2{vec2.size()};
    int *po{nullptr};
    po=apply_all(vec1,vec1.size(),vec2,vec2.size());
    cout<<"result:"<<endl;
    print(po,(vec1.size()*vec2.size()));
    delete po;
    
}

void print(vector<int> &vec){
    cout<<"[ ";
    for(auto &temp:vec)
    cout<<temp<<" ";
    cout<<"]"<<endl;
}
int *apply_all(vector<int>&vec1,size_t size1,vector<int>&vec2,size_t size2){
    int *ptr{nullptr};
    ptr=new int [size1*size2];
   
    int temp{};
    for(int i{};i<size1;i++){
        for(int j{};j<size2;j++){
            // *ptr=0;
           
            *(ptr+temp)=vec1[i]*vec2[j];
            temp++;
           
            
        }
    }
   
    return ptr;
}
void print(int *ptr,size_t size){
    cout<<"[ ";
    for(int i{};i<size;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<"]"<<endl;
}