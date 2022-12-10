#include<iostream>
using namespace std;

template<class t>

class base{
    public:
    void func(){
        cout<<"func "<<endl;
    }
};

template<class t>
class derived: public base<t>{

public:
void callbase(){
    func();
}

};
                    
int main(){

    derived<int> Derived;
    Derived.callbase();
  
return 0;
}