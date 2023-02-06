#include<stdio.h>

void main(){
    char *p1="name";

    char *p2;
    p2= (char*)malloc(20);
    memset(p2,0,20);
     while(*p2++=*p1++);
     printf("%s\n",p2);
}