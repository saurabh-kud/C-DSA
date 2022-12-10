#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){

    ofstream fout;
    fout.open("saroj.txt");

    fout<<"saroj kumar"<<endl;
    fout<<"manoj mehra"<<endl;
    fout<<"sushil gupta"<<endl;
    fout<<"vikash prashad"<<endl;

    fout.close();

    ifstream fin;
    fin.open("saroj.txt");

    // eof() return 1 when it reached in the end of file.

    while(1){
        if(fin.eof()!=0){
            fin.close();
            exit(0);
            
        }else{
            string str;
            getline(fin,str);
            cout<<str<<endl;
        }

    }

  
return 0;
}