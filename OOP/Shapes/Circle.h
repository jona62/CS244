#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shapes.h"
#define PI 3.14159265359

class Circle: public Shape{
  private:
    int radius;
  public:
    Circle();
    Circle(int);
    void setRadius(int);
    int getRadius();
    int area();
    int circumference();
};


Circle::Circle(){
  cout<<"Circle Object Created.\n";
  radius = 0;
}

Circle::Circle(int radius){
  cout<<"Circle Object Created.\n";
  setRadius(radius);
}

int Circle::getRadius(){
  return radius;
}

void Circle::setRadius(int radius){
  this->radius = radius;
}

int Circle::area(){
  return (PI*radius*radius);
}

int Circle::circumference(){
  return (2*PI*radius);
}

#endif //CIRCLE_H
