#include<bits/stdc++.h>
using namespace std;

class student{
    int marks[5]{};
    public:
    void setval();
    void getval();
    void total_marks();
};

void student::setval(){
    cout<<"enter your marks: "<<endl;
    for(int i{};i<5;i++){
        cout<<"enter your "<<i+1<<" marks: ";
        cin>>marks[i];
    }
}

void student::getval(){
    cout<<"your marks is ";
    for(int i{};i<5;i++)
    cout<<marks[i]<<" ";
    cout<<endl;
}

void student::total_marks(){
    cout<<"your total marks is ";
    int total{};
    for(int i{};i<5;i++)
     total+=marks[i];
     cout<<total<<endl;
}

int main(){
    student saurabh;
    saurabh.setval();
    saurabh.getval();
    saurabh.total_marks();
}