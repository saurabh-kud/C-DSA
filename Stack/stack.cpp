#include "stack_class_template.cpp"
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 stack<int> s;

 s.push(10);
 s.push(20);
 cout<<s.Peek()<<endl;
 s.push(50);
 cout<<s.pop()<<endl;
 s.push(5);
 s.push(89);
 s.push(100);
 cout<<s.Peek()<<endl; 
 s.push(78);
 s.pop();
 cout<<s.Peek()<<endl; 
 cout<<s.isEmpty()<<endl;
 
 
 return 0;
}