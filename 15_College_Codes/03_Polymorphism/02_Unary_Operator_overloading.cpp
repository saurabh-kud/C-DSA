#include<iostream>
using namespace std;

class rectangle{
    int length;
    int width;

    public:

    rectangle(int len, int wid ){
        length=len;
        width=wid;
    }

    void area(){
        cout<<"Area is "<<(length*width)<<endl;
    }

    void operator++(int){
        length++;
        width++;
    }

    void operator--(int){
        length--;
        width--;
    }

};

                    
int main(){

    rectangle r(10,20);
    r.area();

    r++;
    r.area();

    r--;
    r.area();
  
return 0;
}