#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){

    fstream fin;
   
   fin.open("mahi.txt",ios::in);

   if(!fin.is_open()){
    cout<<"file doesn't exist";
   }
   else{

    char arr[100];

    while(1){

    fin.getline(arr,100);
    cout<<"1. "<<arr<<endl;
    if(fin.eof()){
        break;
    }
    }
   }

    fin.close();

    }

    
