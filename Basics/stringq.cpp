//program to slice some word from  a sting
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[30]{};
    cout<<"enter string ";
    cin.getline(arr,30);
    cout<<"entered string is "<<arr<<endl;
    int start{},end{};
    cout<<"enter two value from cut to cut ";
    cin>>start>>end;
    for(;start<=end;start++){
        cout<<arr[start];
    }
    
}