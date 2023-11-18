#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // int a = 10;
    // int *b = &a;
    // cout << b << " " << &a << endl;

    // cout << *b << endl;
    // *b=*b + 15;
    // cout << *b << endl;

    // int n;
    // cout << "enter how many name you want to insert ";
    // cin >> n;

    // string arr[n];
    // for (int i = 0; i < n;i++){
    //     cout << "enter name ";
    //     cin >> arr[i];
    //     cout << arr[i] << endl;
    // }

    // for (int i = 0; i < 10;i++){
    //     cout << arr[i] << endl;
    // }

    int a = 5;
    int *b = &a;
    // int *b = &a;
    // *b += 1;
    // int *c = b;
    int arr[5];
    for (int i = 0; i < 5;i++){
        arr[i] = a;
        *b=*b+ 1;
    }

    for (int i = 0; i < 5;i++){
        cout << arr[i] << endl;
    }

        return 0;
}