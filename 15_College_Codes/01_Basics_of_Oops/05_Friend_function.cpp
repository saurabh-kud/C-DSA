#include<iostream>
using namespace std;

class Branch2; // forward declaration

class Branch1{

     int emp1_salary;
     int emp2_salary;
     int emp3_salary;
     float average_salary;

     public:

     void setSalary(){
        cout<<"Enter salary of 1, 2 and 3 employee"<<endl;
        cin>>emp1_salary>>emp2_salary>>emp2_salary;
     }

     friend void compare_salary(Branch1,Branch2);

     float calculate_Average_salary(){
        average_salary=(emp1_salary+emp2_salary+emp3_salary)/3;
        return average_salary;
     }

     
};

class Branch2{

    int emp1_salary;
    int emp2_salary;
    int emp3_salary;
    float average_salary;

    public:

    void setSalary(){
        cout<<"Enter salary of 1, 2 and 3 employee"<<endl;
        cin>>emp1_salary>>emp2_salary>>emp2_salary;
     }

     friend void compare_salary(Branch1,Branch2);

     float calculate_Average_salary(){
        average_salary=(emp1_salary+emp2_salary+emp3_salary)/3;
        return average_salary;
     }

};


void compare_salary(Branch1 b1, Branch2 b2){
    if(b1.calculate_Average_salary()>b2.calculate_Average_salary()){
        cout<<"Branch1 salary is greater "<<endl;
    }else{
        cout<<"Branch2 salary is greater "<<endl;
    }

}
                    
int main(){
    Branch1 b1;
    b1.setSalary();

    Branch2 b2;
    b2.setSalary();

    compare_salary(b1,b2);

  
return 0;
}