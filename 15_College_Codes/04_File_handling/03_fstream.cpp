
#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){

string name="sujeet";
int roll=90;

fstream file;
file.open("saroj2.doc",ios::out);

file<<name<<"\n";
file<<roll;

file.close();

fstream file2;
file2.open("saroj2.doc",ios::in);

string str;
int roll2;

file2>>str;
file2>>roll2;

cout<<str<<endl;
cout<<roll2<<endl;
cout<<"saroj kumar "<<endl;
cout<<"manoj kumar "<<endl;
  
file2.close();

return 0;
}