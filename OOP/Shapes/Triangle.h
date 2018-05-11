#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shapes.h"

class Triangle: public Shape{
  private:
    int base, height;
  public:
    Triangle();
    Triangle(int, int);
    void setBase(int);
    void setHeight(int);
    int getBase();
    int getHeight();
    int area();
};

Triangle::Triangle(){
  cout<<"Triangle Object Created.\n";
  base = 0;
  height = 0;
}

Triangle::Triangle(int base, int height){
  setBase(base);
  setHeight(height);
}

void Triangle::setBase(int base){
  this->base = base;
}

void Triangle::setHeight(int height){
  this->height = height;
}

int Triangle::getBase(){
  return base;
}

int Triangle::getHeight(){
  return height;
}

int Triangle::area(){
  return (base*height)/2;
}

#endif //TRIANGLE_H
