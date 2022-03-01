//digit to word without using switch and if 

#include<iostream>
using namespace std;
void number_word(int);
char arr[][6]{"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    

int main(){
    int n;

   
    cout<<"enter a number ";
    cin >> n;
   number_word(n);

  return 0;
}

void number_word(int x){
    int temp[10] ;
   int  count {};
   while(x >0){
       temp[count] = x%10;
       x/=10;
       count++;
   } 
   int temp1 {count-1};
  

   for(;temp1>=0;temp1--){
   
       cout<<arr[temp[temp1]]<<" ";
      
   }

      
}

