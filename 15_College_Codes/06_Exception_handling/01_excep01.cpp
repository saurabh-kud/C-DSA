#include<iostream>
using namespace std;
                    
int main(){

    int a=10;
    int b=0;
    int c;

    try{
        if(b==0){
            throw 10.20;
        }else{
            c=a/b;
            cout<<c<<endl;
        }
    }

    catch(char c){
        cout<<"character found"<<endl;
    }

    catch(int a){
        cout<<"integer found"<<endl;
    }

    catch(float b){
        cout<<"float found"<<endl;
    }

return 0;
}