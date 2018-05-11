#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;
class A{
  public:
    A(){
      cout<<"A:default"<<endl;
    }
    A(int a){
      cout<<"A:parameter"<<endl;
    }
    void message(){
      cout<<"I am A\n";
    }
};

class B: public A{
  public:
    // B(){
    //   cout<<"B:default"<<endl;
    // }
    B(int a){
      cout<<"B:parameter"<<endl;
    }
    void message(){
      cout<<"I am B\n";
    }
};

#endif //MAIN_H
