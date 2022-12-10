
// using the constructor function of the class  --> used for single file  
// using member function open() of the class --> used for multiple file

//we use close function because in one time a stream object can attach with only one file


#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){

string name;
int rollNo;

cout<<"enter name and rollNo"<<endl;
cin>>name>>rollNo;

ofstream fout("saroj.doc");
fout<<name<<"\n";
fout<<rollNo<<"\n";

fout.close();

ifstream fin("saroj.doc");

string name2;
int rollNo2;

fin>>name2;
fin>>rollNo2;

cout<<"name is "<<name2<<endl;
cout<<"rollNo is "<<rollNo2<<endl;

  
return 0;
}