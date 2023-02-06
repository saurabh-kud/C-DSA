// in this we find how many inputed character avail into that string

#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int arr[26]={0};
    string s;
    getline(cin,s);
    cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']+=1;
    }
    cout<<"enter to find character ";
    char c;
    cin>>c;
    cout<<arr[c-'a'];
 
 return 0;
}