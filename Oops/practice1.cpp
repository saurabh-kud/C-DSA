// Write a program by creating an 'Employee' class having the following functions and print the final salary.
#include<bits/stdc++.h>
using namespace std;

class employee{
    int sal{};
    // int number{};
    int work_time{};

   public:
       void getinfo(int,int);
       void add_sal();
       void add_work();
       void display_sal();

};

void employee::getinfo(int sa,int time){
    sal=sa;
    work_time=time;
}
void employee::add_sal(){
    if(sal<500){
        sal+=10;
    }
}
void employee::add_work(){
    if(work_time>6){
        sal+=5;
    }
}

void employee::display_sal(){
    cout<<"your final salary is "<<sal<<endl;
}

int main(){
    employee saurabh;
    saurabh.getinfo(450,7);
    saurabh.add_sal();
    saurabh.add_work();
    saurabh.display_sal();
}