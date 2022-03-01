//in this program we cover all basic topic like statement,control flow,array and vector

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    
    int temp{1};
    char a{};
    vector<int> vec{};
    // cout<<vec.size();

    do{
        // cout<<ok<<endl;
        cout<<endl;
        cout<<"P - print numbers"<<endl;
        cout<<"A - add a number"<<endl;
        cout<<"M - Display mean of the number"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"C - Clear all numbers"<<endl;
        cout<<"F - Find a number"<<endl;
        cout<<"Q - Quit"<<endl;
        
        cout<<"--------------"<<endl;
        cout<<"enter your choice ";
        cin>>a;
        // if(a=='t'){
        //   cout<<"from if"<<endl;
        //     // continue;
        // }else{
        //   cout<<"from else"<<endl;
        //   break;
        // }
       switch(a){
        case 'P':
        case 'p': {
                   if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                   }else{
                     cout<<"[ ";
                     for(auto val :vec){
                       cout<<val<<" ";

                     }
                     cout<<"]"<<endl;
                     continue;
                   }
                   break;
                  }
        case 'a':
        case 'A': {
                   cout<<"enter a number ";
                   int inp{};
                   cin>>inp;
                   if(vec.size()==0){
                      vec.push_back(inp);
                      cout<<inp<<" "<<"added"<<endl;
                   }else {
                     int count{};
                      for(auto val:vec){
                        if(val==inp){
                          count++;
                          cout<<inp<<" already avilable in list"<<endl;
                        }
                     }
                     if(!count){
                      
                        vec.push_back(inp);
                       cout<<inp<<" "<<"added"<<endl;
                        
                     }
                   }
                  
                   
                   break;
                  }
        case 'M':
        case 'm': {
                   if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                   }else{
                   double temp{};
                   for(auto val :vec){
                    temp+=val;
                   }
                   cout<<temp/vec.size()<<endl;
                   
                   }
                   break;
                  }
        case 's':
        case 'S': {
                 if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                   }else{

                    cout<< *min_element(vec.begin(), vec.end())<<endl; 
                  
                  
                   }
                   break;
                  }                    
        case 'l':
        case 'L': { 
                   if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                   }else{
                   cout<< *max_element(vec.begin(), vec.end())<<endl; 
                  
                  
                   }
                   break;
                   }
        case 'q':
        case 'Q': {
                   cout<<"goodbye....:)";
                    temp =0;
                    break;
                  }
        default:  {
                    cout<<"invalid input"<<endl;

                  }
        case'c':
        case'C':{
                 if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                  }else{
                   vec.clear();
                   cout<<"list cleared :("<<endl;
                   
                  }
                  break;
                  }
        case 'f':
        case'F':{
                 if(vec.size()==0){
                   cout<<"[] - the list is empty"<<endl;
                  }else{
                 int num {};
                 cout<<"enter number who you want to find in list ";
                 cin>>num;
                 int counter {0};

                  for(auto val:vec){
                    if(val==num){
                      counter++;

                    }
                  }
                  if(counter>=1){
                    cout<<num<<" "<<"finded in list "<<counter<<" times"<<endl;
                  }else
                   cout<<num<<" "<<"not matched in list"<<endl;
              
                  }
                  break;
                }                                       
      }

    }while(temp); 

  
  return 0;
}