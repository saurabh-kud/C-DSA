
//ofstream
//ifstream
//fstream


#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
//    int a;
//    int b;

//    cout<<"enter a value"<<endl;
//    cin>>a;
//    cout<<"enter b value"<<endl;
//    cin>>b;
   
//    ofstream outf;
//    outf.open("ibrar.txt");
//    outf<<"a value is :"<<a<<endl;
//    outf<<"b value is :"<<b<<endl;
//    int sum=a+b;
//    outf<<"sum is :"<<sum<<endl;

//    outf.close();
    
//     ifstream fin;
//     fin.open("ibrar.txt");
//     string s1,s2,s3;
//     getline(fin,s1);
//     getline(fin,s2);
//     getline(fin,s3);
//     fin.close();

//     cout<<"getting details from file"<<endl;
//     cout<<s1<<endl;
//     cout<<s2<<endl;
//     cout<<s3<<endl;


    fstream fs;
    fs.open("saurabh.txt",ios::out);
    fs<<"my name is saurabh"<<endl;
    fs<<"this is testing file"<<endl;

    fs.close();
    fs.open("saurabh.txt",ios::in);
    while(1){
        if(!fs.eof()){
            string s;
            getline(fs,s);
            cout<<s<<endl;
        }else{
            exit(0);
        }
    }

    fs.close();

    

   




 return 0;
}
