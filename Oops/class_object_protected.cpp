#include<bits/stdc++.h>
using namespace std;

class room{
    protected:
          int room_no{};
          string location{};

};

class child_room: public room
{
    public:
        void set_data(int id,string loc){
            room_no=id;
            location= loc;
        }
        void get_data(){
            cout<<"your room no is "<<room_no<<endl;
            cout<<"your address is "<<location<<endl;
        }
};

int main(){
    child_room room1;
    room1.set_data(502,"boring road patna");
    room1.get_data();
    // cout<<room1.room_no<<endl;
}