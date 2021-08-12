#include <iostream>

int main(){
//     int fav_number;
//     float num;
//    std::cout << "enter your favorite number  ";
//    std::cin>> fav_number;
//    std::cin>> num;
//    std::cout<<"Amezing!! that's my favorite number too"<<std::endl;
//    std::cout<<"no really!, "<<fav_number <<" is my favorite number."<<std::endl;
// //    printf("really! %d is my favorite number",fav_number);
//   std::cout<<num;

    int age,a;
    std::cout <<"enter your age ";
    std::cin>> age;
    if(age>=18){
      std::cout<<"you are adult"<<std::endl;
    }else{
      if(age>=3)
      std::cout<<"you are baby"<<std::endl;
      else{
        std::cout<<"you are infant"<<std::endl;
      }
    }
    std::cout<<"press any key to continue ";
    std::cin>>a;
 return 0;
}