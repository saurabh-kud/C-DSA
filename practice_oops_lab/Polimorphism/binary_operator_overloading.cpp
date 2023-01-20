#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
    int height;
    int width;
    shape(){
        height=0;
        width=0;
    }
    shape(int he,int wi){
        height=he;
        width=wi;

    }

    shape operator + (shape& s){
        shape d;
        d.height=height+s.height;
        return d;

    }
    void show(){
        cout<<"height is "<<height<<endl;
    }
     
     
};



 
int main(){
     shape s(10,20);
     shape s2(20,40);
     shape s3;
     s3=s+s2;
     s3.show();
 return 0;
}