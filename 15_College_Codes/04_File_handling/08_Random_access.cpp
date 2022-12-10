#include<iostream>
#include<fstream>
using namespace std;

/* 
seekp() -> is used to move the file pointer at the time of writing.

tellp() -> is used to get the location of the file pointer at the time of writing.

seekg() -> is used to move the file pointer at the time of reading.

tellg() -> is used to get the location of the file pointer at the time of reading.

*/
                    
int main(){

    ofstream fout;
    fout.open("test.txt");

    cout<<fout.tellp()<<endl;
    fout<<"saroj kumar"<<endl;
    cout<<fout.tellp()<<endl;

    fout.seekp(-7,ios::end);
    cout<<fout.tellp()<<endl;

    fout<<"sangam"<<endl;

    fout.close();

    ifstream fin;
    fin.open("test.txt");

    cout<<fin.tellg()<<endl;

    fin.seekg(5,ios::beg);

    cout<<fin.tellg()<<endl;

    string str;

    fin>>str;

    cout<<str<<endl;


return 0;
}