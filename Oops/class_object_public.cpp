#include<iostream>
#include<string>
#include<vector>
using namespace std;

class student{
    public:
        string name{};
        int age{};
        int marks{};
        string print_name(){
           return name+" is a computer student";
        }
    
};
int main(){
    student s1;
    s1.name="saurabh";
    s1.age=22;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.print_name();
   

    return 0;
}
