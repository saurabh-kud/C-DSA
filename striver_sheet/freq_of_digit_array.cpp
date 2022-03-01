#include<bits/stdc++.h>
using namespace std;
 void frequency(int*,int);

int main(){
 int arr[]{10,5,6,10,5,20,5,10,6};
  int size=sizeof(arr)/sizeof(arr[0]);
  frequency(arr,size);
  return 0;
}
void frequency(int *arr,int size){
    bool visited[size]{false};

    for(int k{};k<size;k++){
        if(visited[k]==true){
            continue;
        }
        visited[k]=true;
        int couter{1};
        for(int j{k+1};j<size;j++){
            if(arr[k]==arr[j]){
                couter++;
                visited[j]=true;
            }

        }
        cout<<"frequecy of "<<arr[k]<<" is "<<couter<<endl;
    }
}