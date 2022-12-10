#include<iostream>
using namespace std;

template <typename T> void Max(T x, T y){

    cout<<x+y;

}
                    
int main(){

 Max<int>(5,10);

 Max<float>(5.20f,10.20f);
  
return 0;
}