#include<stdio.h>

int main(){
    int num=0;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=num;j++){
            int mult=i*j;
           if(mult<10)
            printf("%d   ",mult);
            else if(mult>99){
                printf("%d ",mult);
            }
            else
            printf("%d  ",mult);
            
        }
        printf("\n");
    }
}