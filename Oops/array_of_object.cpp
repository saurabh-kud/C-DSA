#include<bits/stdc++.h>
#include<string>

using namespace std;

class student {
    string st_name;
    int roll_no{};
    

    public:
     void set_data();
     void get_data();

};

void student::set_data(){
    cout<<"enter your name ";
    getline(cin,st_name);
    
    cout<<"enter your roll number ";
    cin>>roll_no;
}

void student::get_data(){
    cout<<"your name is "<<st_name<<endl;
    cout<<"your roll number is "<<roll_no<<endl;
}
const int size=3;
int main(){
    student boys[size];
    for(int i{};i<size;i++){
        cout<<i<<endl;
        boys[i].set_data();
    }
    for(int i{};i<size;i++){
        cout<<"boys "<<i+1<<" data"<<endl;
        boys[i].get_data();
    }
}