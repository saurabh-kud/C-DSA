#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     const float small_room_price {25};
     const float large_room_price {35};
     const float tax_value {0.06};
     const int  valid_for {30};
    cout << "  welcome to saurabh carpet cleaning service :)"<<endl;
    cout << "\n  how many small room would you like to cleaned? ";
    int small_room {0};
    cin>>small_room;
    cout<<"  how many large room would you like to cleaned? ";
    int large_room {0};
    cin>>large_room;
    cout<<"\n  estimated for carpet cleaning service"<<endl;
    cout<<"  number of small room: " <<small_room<<endl;
    cout<<"  number of large room: " << large_room<<endl;
    cout<<"  price per small room: $" <<small_room_price<<endl;
    cout<<"  price per large room: $" <<large_room_price<<endl;
    int cost = (small_room_price*small_room)+(large_room_price*large_room);
    int tax= cost*tax_value;
    cout <<"  cost : $"<<cost<<endl;
    cout<<"  tax : $"<<tax<<endl;
    cout<<"  ========================="<<endl;
    cout<<"  total estimated :  $"<<cost+tax<<endl;

    cout<<"  this estimated is valid for "<<valid_for<<" days"<<endl;
    cout<<"  press any key to continue ";
   getch();

    return 0;


}
