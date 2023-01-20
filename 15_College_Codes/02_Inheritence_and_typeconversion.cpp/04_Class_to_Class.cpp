#include<iostream>
using namespace std;

class one{
    string s="saurabh kumar";
    
    public:

    string getString(){
        return s;
    }

    void show(){
        cout<<s<<endl;
    }
};

class two{
    string str;

    public:

    void operator=(one s){
        str=s.getString();
    }

    void show(){
        cout<<str<<endl;
    }
};
                    
int main(){

    one a;
    two b;

    b=a;

    a.show();
    b.show();
  
return 0;
}