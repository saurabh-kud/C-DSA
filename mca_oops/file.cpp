#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    string name;
    int rollno;
    string city;
   cout<<"enter mame,rollno and city"<<endl;
   cin>>name>>rollno>>city;
   ofstream outf("saurabh.txt");
   outf<<name<<endl;
   outf<<rollno<<endl;
   outf<<city<<endl;
   outf.close();

   string s,r;
   int x;
   ifstream inf("saurabh.txt");
   inf>>s;
   inf>>x;
   inf.r;
   inf.close();
   cout<<s<<endl;
   cout<<x<<endl;
   cout<<x<<endl;

 return 0;
}