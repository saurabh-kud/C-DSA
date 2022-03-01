#include<bits/stdc++.h>
using namespace std;
class insert{

    private: int *ptr{};
            int size{};
    public:
          
         insert(int count){
             size=count;
             ptr= new int[size];
             for(int i{};i<size;i++){
                 cout<<"enter "<<i+1<<" element :";
                 cin>>ptr[i];
             }
             
         }
           void insert_beginning();//declaration
           void insert_last();
           void insert_position();

           void getter(){
            cout<<"array is [ ";
             for(int i{};i<size;i++){
                cout<<ptr[i]<<" ";
             }
             cout<<"]"<<endl;
             
           }
};

void insert::insert_beginning(){
    
    size+=1;
    int *nw=new int[size];
    cout<<"enter element to insert in biginning ";
    int ele{};
    cin>>ele;
    nw[0]=ele;
    for(int i{1};i<size;i++){
        nw[i]=ptr[i-1];
    }
    delete []ptr;
    ptr=nw;
    nw=NULL;
   
}

void insert::insert_last(){
    size+=1;
    int *nw=new int[size];
    cout<<"enter element to insert in last ";
    int ele{};
    cin>>ele;
    nw[size-1]=ele;
    for(int i{};i<size-1;i++){
        nw[i]=ptr[i];
    }
    delete []ptr;
    ptr=nw;
    nw=NULL;
    
}
void insert:: insert_position(){
    cout<<"enter position to insert element ";
    int pos{};
    cin>>pos;
    size+=1;
    if(pos<size){
    int *nw=new int[size];
    int ele{};
    cout<<"enter element to insert in that position ";
    cin>>ele;
    nw[pos]=ele;
        int j{};
    for(int i{};i<size;i++){
        
        
       if(i!=pos){
           nw[i]=ptr[j];
           j++;
       }else{
           
       }
    }
    delete []ptr;
    ptr=nw;
    nw=NULL;
    }else{
        size--;
    }
}
 
int main(){
    int size{};
    cout<<"enter size of array ";
    cin>>size;
   insert sau(size);
   sau.getter();
 //    sau.insert_beginning();
 //    sau.getter();
 //    sau.insert_last();
 //    sau.getter();
   sau.insert_position();
   sau.getter();
 return 0;
}