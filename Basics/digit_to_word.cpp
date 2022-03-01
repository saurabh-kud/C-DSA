//digit to word with switch and loop statement

#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter a number who want to convert in word: ";
    int n;
    cin >> n;
   vector<int> vec{};
   int count{};


    while(n>0){
      vec.push_back(n%10);
      n/=10;
      count++;
   

    }

    for(int temp{count-1};temp>=0;temp--){

        switch(vec[temp]){
        case 0 : cout<<"zero ";break;
        case 1: cout<<"one ";break;

        case 2: cout<<"two ";break;
        case 3: cout<<"three ";break;
        case 4: cout<<"four ";break;
        case 5: cout<<"five ";break;
        case 6: cout<<"six ";break;
        case 7: cout<<"seven ";break;
        case 8: cout<<"eight ";break;
        case 9: cout<<"nine ";break;
        
        default :cout<< "invalid number";

      }
       cout<<" ";
    }
    return 0;
}