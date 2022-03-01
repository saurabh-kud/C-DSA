#include<bits/stdc++.h>
using namespace std;
void remove_dup(char *str){
    if(str[0]=='\0'){
        return;
    }
    for(int i=1;str[i]!='\0';i++){
        if(str[0]==str[i]){
            int j=i;
            for(;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
        
    }
  
    remove_dup(str+1);
  
}

int main(){
 char str[30]{};
 cout<<"enter string ";
 cin.getline(str,30);
 remove_dup(str);
 cout<<"after remove duplicate "<<endl;
 cout<<str;

 return 0;
}