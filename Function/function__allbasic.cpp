//program to use all basic thing with function to modularize
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display_menu();
char input_menu();
void print_number(vector<int>&vec);
void add_number(vector<int>&vec);
void mean_ofNumber(vector<int>&vec);
void small_num(vector<int>&vec);
void large_num(vector<int>&vec);
void clear_list(vector<int>&vec);
void find_num(vector<int>&vec);
void switching(char,vector<int>&vec);

int main(){
    vector<int> vec{};
    char a;
    cout<<endl<<endl<<" welcome to this game :) "<<endl;

 do {
  display_menu();
  a =input_menu();
  switching(a,vec);
 } while(1);
  
}
//function for switching through selected input
void switching(char a,vector<int>&vec){
    switch(a){
      case 'P':{
                print_number(vec);
                break;
               }
      case 'A':{
                add_number(vec);
                break;
               }
      case 'M':{
                 mean_ofNumber(vec);
                 break;
               }
       case 'S':{
                 small_num(vec);
                 break;
                }
       case 'L':{
                 large_num(vec);
                 break;
                }    
        case 'C':{
                 clear_list(vec);
                 break;
                 }     
        case 'F':{
                  find_num(vec);
                  break;
                 }
        default :{
                  cout<<"invalid input!"<<endl;
                  break;
                 }
        case 'Q':{
                  cout<<"godbye.....:)"<<endl;
                   exit(0);

                 }
  }
}
//function to display all functionality
void display_menu(){
    cout<<endl<<"P - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"F - Find a number"<<endl;
    cout<<"C - Clear the list"<<endl;
    cout<<"Q - Quit"<<endl<<endl;
    cout<<"Enter your choice : ";
}
//function to take input from user and do it in upper case
char input_menu(){
    char a;
    cin>>a;
    a=toupper(a);
    return a;

}
//function to print all element on vector
void print_number(vector<int>&vec){
    if(vec.size()==0){
        cout<<"[ ] list is empty"<<endl;
    }else{
        cout<<"[ ";
        for(auto x:vec){
        cout<<x<<" ";
        }
        cout<<"]"<<endl;
        
    }
}
//function to add number in vector and aslo check duplicate and not input
void add_number(vector<int>&vec){
    cout<<"Enter a number ";
    int num{};
    cin>>num;
    if(vec.size()==0){
        vec.push_back(num);
        cout<<num<<" "<<"added"<<endl;
    }else{
        for(auto x:vec){
            if(x==num){
                cout<<"value already avilable in list"<<endl;
            }else{
                vec.push_back(num);
                cout<<num<<" "<<"added"<<endl;
                break;

            }
        }
    }
}
//function to calculate mean of number
void mean_ofNumber(vector<int>&vec){
    if(vec.size()==0){
        cout<<"[ ] - list is empty (:"<<endl;
    }else{
        float mean{};
        for(auto x:vec){
          mean+=x;
        }
        cout<<"mean is "<<mean/vec.size()<<endl;
    }
}
//function to find minumum among list
void small_num(vector<int>&vec){
    if(vec.size()==0){
        cout<<"[ ] - list is empty (:"<<endl;
    }else{
        cout<<"Small number is "<< *min_element(vec.begin(),vec.end())<<endl;
    }
}
//function to find largest number among list
void large_num(vector<int>&vec){
    if(vec.size()==0){
        cout<<"[ ] - list is empty (:"<<endl;
    }else{
       cout<<"Lagest number is "<<*max_element(vec.begin(),vec.end())<<endl; 
    }
}
//function to list clear
void clear_list(vector<int>&vec){
    if(vec.size()==0){
        cout<<"[ ] - list is already empty (:"<<endl;
    }else{
        vec.clear();
        cout<<"list cleared (:"<<endl;
    }
}
//function for find given number in list
void find_num(vector<int>&vec){
    
    
    if(vec.size()==0){
        cout<<"[ ] - list is empty (:"<<endl;
    }else{
         int num{};
         cout<<"enter a number to find in list ";
         cin>>num;
         int counter{};
         for(auto x:vec){
             if(x==num)
                counter++;
            } 
            if(counter){
                cout<<num<<" "<<"founded in list"<<endl;
            }else{
                cout<<num<<" "<<"not avilable in list"<<endl;
            }



    }
}
