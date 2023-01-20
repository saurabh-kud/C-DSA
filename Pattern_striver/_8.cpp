#include<bits/stdc++.h>
using namespace std;
 
int main(){
 cout<<"enter size of that pattern"<<endl;
    int size;
    cin>>size;
   
    for(int i=size;i>0;i--){

            int count=0;
        
        for(int j=1;j<=(size*2)-1;j++){

           if(j<=size){
            if(size-i>=j){
                cout<<" ";
            }else{
                cout<<"*";
                count++;
            }
        
           }else{
            // cout<<"count"<<count<<endl;
            if((count-1)>0){
                cout<<"*";
                count--;
            }else{
                break;
            }
           }
            

        }


        cout<<endl;
        count=0;
    }
 
 return 0;
}