#include<bits/stdc++.h>
#include"linked_list_class.cpp"
using namespace std;
 

int main(){
 Linked_list s1;
  s1.display();
  cout<<s1.length()<<endl;
  int n,data;
  cin>>n>>data;
  s1.del(n);
  s1.display();
 return 0;
}