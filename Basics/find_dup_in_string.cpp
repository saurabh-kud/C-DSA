#include<iostream>
using namespace std;
string removeDups(string);

int main(){
string s;
getline(cin,s);
cout<<removeDups(s);
}
		
string removeDups(string S) 
	{
	    // Your code goes here
	   int size=S.length();
       int count{};
	   for(int i=0;i<size;i++){
	   
	       
	       for(int j=i+1;j<size;j++){
	         if(i+1<size){
	             int temp=j++;
	           if(S[i]==S[j]){
                   count++;
	            S.erase(S.begin()+j);
                 size=S.length();
	            
	           }
              
               cout<<S<<" "<<size<<" "<<temp<<" ";
               
	         
	         }
            }
              
	           size=S.length();
               cout<<endl;
               cout<<"from outer loop ";
               cout<<S<<endl;
	       }
	       cout<<count<<endl;
	       return S;
	   }