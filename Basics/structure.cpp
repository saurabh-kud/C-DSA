// some concept about structure
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct students{
    string name{};
    int age{};
     vector<int>marks{};
};
students get_data(students);
void print_data(students);

int main(){
    students sachin;
    sachin=get_data(sachin);
    // sachin=temp;
    print_data(sachin);
    // int 
   
}
students get_data(students sachin){
        cout<<"enter your name ";
        getline(cin,sachin.name);
        cout<<"enter your age ";
        cin>>sachin.age;
        cout<<"enter your marks of each subject ";
        int n;
        for(int i{};i<5;i++){
         cin>>n;
         sachin.marks.push_back(n);
        }
        
        return sachin;
    }

void print_data(students sachin){
    cout<<"name: "<<sachin.name<<endl;
    cout<<"age: "<<sachin.age<<endl;
    cout<<"marks is: ";
    for(auto &x:sachin.marks)
    cout<<x<<" ";

}