#include<iostream>
#include<string>
using namespace std;
string firstAlphabet(string);
int main(){
    cout<<"enter a string "<<endl;
    string S;
    getline(cin,S);
    string outp=firstAlphabet(S);
    cout<<outp<<endl;

}
string firstAlphabet(string S)
	{
	    string final;
	    string::iterator i;
	    final+=S[0];
	  
	   int size=S.length();

	    for(int i=0;i<size;i++){
            if(S[i]==' '){
                final+=S[i+1];
            }
        }
	    return final;
	}