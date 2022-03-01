#include<stdio.h>
void encrypt (char *s[]);
int main()
{
    char s[100];
    gets(s);
    encrypt(s);
    puts(s);
    return 0;
}
void encrypt (char *s[])
{
    char *ptr=s;
    char  str[30]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    char str1[30]= {'#','/','&','+','-','(',';','!','#','&','%','@','?','£','?','#','-','^','{','$','€','¥','%','¢','}','#','\0'};
    while(*ptr!='\0')
    {
        for(int i=0; i<26; i++)
        {
            if(*ptr==str[i])
            {
                *ptr=*ptr+1;
                *ptr=str1[i];
            }
        }
        ptr++;
    }

}