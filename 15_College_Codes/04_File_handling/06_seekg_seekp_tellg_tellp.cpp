#include<iostream>
#include<fstream>
// 1. seekg()->Move the get pointer to the specified location.
// 2. seekp()->Move the put pointer to the specified location.
// 3. tellg()->Gives the current position of get pointer.
// 4. tellp()->Gives the current position of put pointer.

using namespace std;
                    
int main(){

   fstream f;

   f.open("hii.txt",ios::out);

   f<<"saroj"<<"\n";
   f<<"manoj"<<"\n";
   f<<"somnath"<<"\n";

   f.close();

   fstream fi;

   fi.open("hii.txt",ios::in);

   fi.seekg(2);

   cout<<fi.tellg();

   string str;

   fi>>str;

   cout<<str;

   fi.close();

  
return 0;
}