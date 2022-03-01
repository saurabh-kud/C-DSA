#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 int m{},n{};
 cin>>m>>n;
 int ** p=new int*[m];
 for(int i{};i<m;i++){
     p[i]=new int [n];
     for(int j{};j<n;j++){
         p[i][j]=i+j;
     }
    }
    for(int i{};i<m;i++){
        for(int j{};j<n;j++){
            cout<<p[i][j]<<" ";
            if(j==n-1){
                cout<<endl;
            }
        }
    }
 return 0;
}