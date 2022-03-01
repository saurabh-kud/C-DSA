// all basic function perform on vector
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>::iterator i;
    vector<int> v{10,50,36,78};
    for (i = v.begin(); i != v.end(); ++i) 
    {
        cout << *i << " ";
    
    }
    cout<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.resize(5);
    for (i = v.begin(); i != v.end(); ++i) 
    {
        cout << *i << " ";
    
    }
    cout<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    int* pos=v.data();
    cout<<*(pos+3)<<endl;
    v.insert(v.begin(),{3,5,9});
    for (i = v.begin(); i != v.end(); ++i) 
    {
        cout << *i << " ";
    
    }

    return 0;
}