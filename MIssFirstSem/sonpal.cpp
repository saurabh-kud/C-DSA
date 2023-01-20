 #include <iostream>

#include <ios>

#include <istream>

#include <limits>

using namespace std;

template <typename Char>

void ignore_line(basic_istream<char>& in){

in.ignore (numeric_limits<streamsize>::max(), in.widen ('\n'));
}


int main(){



cout << "First input:";
 cin.get();

cout<<"Clearing cin In";

cin.clear();

ignore_line(cin);
 cout << "All done.In";

return 0;
 }