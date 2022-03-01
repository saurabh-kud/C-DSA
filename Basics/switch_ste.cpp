#include<iostream>
using namespace std;
int main(){

//  cout<<"enter a character: ";
 enum cha{ red, green, blue};
//  cin>>cha;
cha color {red};

 switch(color){

     case red :{
                int a {5};
                if(a==5){
                cout<<"you entered "<<"red"<<endl;
                        }else cout<<"you entered other than "<<endl;
               break;
               }
      case 'b' :{cout<<"you entered b"<<endl;
              break;}

      default :{cout<<"you entered didn't match"<<endl;}


 }
}