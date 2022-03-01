#include<stdio.h>
int main(){
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    printf("sum is %d",sum);


}