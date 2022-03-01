#include<iostream>
using namespace std;
int main(){

    for(int i{1};i<=10;i++){
        for(int j{1};j<=i;j++){
            if(j%2!=0)
            cout<<"  *";
            else cout<<"  #";

        }
        cout<<endl;
    }
    int x={8};
    int z[] {19,50,45,30};
    int* y =(z);
   cout<<*y<<endl;
 //   cout<<&x<<" "<<&y<<" "<<*y<<" "<<y<<" "<<&z<<endl;
   for(int i{0};i<3;i++){
       y+=(1);
       cout<<*y<<endl;
   }
//    y +=1;
//    y +=1;
//     y +=1;
//  y +=1;
//   y +=1;

 cout<<&x<<" "<<&y<<" "<<*y<<" "<<y<<" "<<&z<<endl;
    // cout<<sizeof(long long )<<endl;
}