#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){
    
string name;
int rollNo;

cout<<"enter name and rollNo"<<endl;
cin>>name>>rollNo;

ofstream fout;
fout.open("saroj2.doc");

fout<<name<<"\n";
fout<<rollNo<<"\n";

fout.close();

ifstream fin;
fin.open("saroj2.doc");

string name2;
int rollNo2;

fin>>name2;
fin>>rollNo2;

cout<<"name is "<<name2<<endl;
cout<<"rollNo is "<<rollNo2<<endl;

fin.close();


return 0;
}