#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char first[20]{};

    char last[20]{};

    char full[50]{};

    char temp[50]{};
    cout<<"enter your first name ";
    cin.getline(first,20);
    cout<<"enter your last name ";
    cin.getline(last,20);
    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);
    cout<<"your full name "<<full<<endl;
    cout<<first<<" name has "<<strlen(first)<<" characters"<<endl;
    cout<<last<<" name has "<<strlen(last)<<" characters"<<endl;
    cout<<"----------------"<<endl;
    strcpy(temp,full);
    if(strcmp(temp,full)==0){
        cout<<temp<<" "<<full<<" have same characters"<<endl;

    }else{
        cout<<temp<<" "<<full<<" have not same characters"<<endl;
    }
    cout<<"----------------"<<endl;
  
    cout<<"result of comparison "<<full<<" and "<<temp<<" "<<strcmp(full,temp)<<endl;
    cout<<"result of comparison "<<temp<<" and "<<full<<" "<<strcmp(temp,full)<<endl;


   cout<<"-------------"<<endl;
   for(size_t i{};i<strlen(full);i++){
       if(isalpha(full[i])){
       full[i]=toupper(full[i]);
       }
   }
   cout<<"your name in upper: "<<full<<endl;
   if(strcmp(temp,full)==0){
        cout<<temp<<" "<<full<<" have same characters"<<endl;

    }else{
        cout<<temp<<" "<<full<<" have not same characters"<<endl;
    }

    cout<<"result of comparison "<<full<<" and "<<temp<<" "<<strcmp(full,temp)<<endl;
    cout<<"result of comparison "<<temp<<" and "<<full<<" "<<strcmp(temp,full)<<endl;
}