#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student
{
    int n;
    int * a;
    public:
    student(int x)
    {
        n=x;
       a=  new int [x];
       cout<<"input stude"<<x<<endl;
        cout<<"enter student marks:";
        for(int i=0;i<x;i++)
        {   cout<<"enter "<<i<<" input : ";
            cin>>a[i];
        }
    }
    int size()
    {
        return sizeof(a)/sizeof(a[0]);
    }
    void three()
    {
        
        sort(a,a+n);
      
        cout<<a[n-1];
    }


};
int main()
{
    int z;
    cout<<"enter how many student you have:";
    cin>>z;
    student a1(z);
    a1.three();
}