#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;

class base{
  protected:
    int x;
    int y;

  public:
     void print(){
      cout<<"Print base class\n";
    }
     void show(){
      cout<<"Show base class\n";
    }
};

class derived: public base{
  public:
    void print(){
      cout<<"Print derived class\n";
    }
    void show(){
      cout<<"Show derived class\n";
    }
};

#endif //CLASS_H
