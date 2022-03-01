//program to illustrate all dynamic allocation in c++
#include<iostream>

using namespace std;
int main(){
    int *int_ptr{nullptr};
    int_ptr=new int;
    cout<<int_ptr<<endl;
    cout<<*(int_ptr)<<endl;
    *(int_ptr)=523;
    cout<<int_ptr<<endl;
    cout<<*(int_ptr)<<endl;
    string *string_ptr{new string};
    cout<<(string_ptr)<<endl;
    *(string_ptr)="hello saurabh ";
    cout<<*(string_ptr)<<endl;
    delete int_ptr;
    // cout<<*(int_ptr)<<endl;
    int *array_ptr{nullptr};
    size_t size{};
    cout<<"enter size ";
    cin>>size;
    array_ptr=new int[size];
    for(int i{};i<5;i++){
       cout<< array_ptr[i]<<endl;
        
    }
    cout<<array_ptr<<endl;
    cout<<array_ptr[0]<<endl;
    int count=sizeof(array_ptr);
    cout<<"size of array is "<<count<<endl;
    for(int i{};i<5;i++){
        *(array_ptr+i)=i+10;
        
    }
    for(int i{};i<5;i++){
       cout<< array_ptr[i]<<endl;
        
    }
    delete[] array_ptr;
     for(int i{};i<5;i++){
       cout<< array_ptr[i]<<endl;
        
    }

}