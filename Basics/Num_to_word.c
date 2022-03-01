//program to number to word convert
#include<stdio.h>
// using namespace std;
void number_word(int);
char arr[][6]={"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    

int main(){
    int n;
 
   
  printf("enter a number ");
   scanf("%d",&n);
   number_word(n);

  return 0;
}

void number_word(int x){
    int temp[10] ;
    int  count=0;
   while(x >0){
       temp[count] = x%10;
       x/=10;
       count++;
   } 
   int temp1 =count-1;
  

   for(;temp1>=0;temp1--){
   
      printf("%s",arr[temp[temp1]]);
      printf(" ");
      
   }

      
}
