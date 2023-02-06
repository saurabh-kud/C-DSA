#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector <int> p(5);
    vector <int> arr={10,20,23};
    // cout<<* (p)<<endl;
    //point to the first memory location of that array
    vector<int>::iterator it= arr.begin();
    cout<<*(it)<<endl;
    vector<int>::iterator last=arr.end();
    cout<<*(last-1);
 return 0;
}