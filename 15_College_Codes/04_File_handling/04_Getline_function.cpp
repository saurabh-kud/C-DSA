#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){

    // string arr;
    // string arr2[100];
    // cout<<"enter your name "<<endl;
    // getline(fout,arr);
    // cin.getline(arr2,100);

    ofstream fout;
    fout.open("xyz.txt");
    fout<<"my name is saroj"<<"\n";
    fout<<"my friend is neha and riya";
    fout.close();

    ifstream fin;
    fin.open("xyz.txt");

    // char ch[100];
    // char ch2[100];

    // fin.getline(ch,100);
    // fin.getline(ch2,100);
   
     string str;
     string str2;

     getline(fin,str);
     getline(fin,str2);

    cout<<"your name is "<<str<<endl;
     cout<<"your name is "<<str2<<endl;

    fout.close();

  

return 0;
}