#include<bits/stdc++.h>
using namespace std;
 
int main(){
 cout<<"enter size of that pattern"<<endl;
    int size;
    cin>>size;
   
    for(int i=1;i<=size;i++){

            int count=0;
        char var='A';
        bool tochek=true;
        for(int j=1;j<=(size*2)-1;j++){

           if(j<=size){
            if(size-i>=j){
                cout<<" ";
            }else{
                cout<<var;var++;
                count++;
            }
        
           }else{
            // cout<<"count"<<count<<endl;
            
            if((count-1)>0){
                if(tochek){
                    var--;var--;
                    tochek=false;
                }
                cout<<var;var--;
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