#include<iostream>
using namespace std;
class two;
class one
{
    public:
    int a;

    one(int seta){
        a=seta;
    }
    friend int cal(one,two);

};
class two
{
    public:
    int b;
    two(int setb){
        b=setb;
    }
    friend int cal(one,two );

};

 int cal(one f,two g)
{
    int ans=(f.a>g.b)?f.a:g.b;
    return ans;
}
int main()
{
    one x(10);
    two y(20);
   cout<<"----------finding greater in both object---------------"<<endl;

   cout<<cal(x,y)<<endl;
}