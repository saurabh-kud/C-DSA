#include<iostream>

using namespace std;
void display(int);
void display(std::string);


int main(){
    // display(10);
    display("hello saurabh");
}
void display(int x){
    cout<<"this is integer display function "<<x<<endl;

}
void display(string s){
    cout<<"this is from string display function "<<s<<endl;
}
