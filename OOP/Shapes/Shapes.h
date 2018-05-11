#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>
using namespace std;

class Shape{
  protected:
    int x,y;
  public:
    Shape();
    Shape(int, int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
};

Shape::Shape(){
  x = y = 0;
}

Shape::Shape(int x, int y){
  this->x = x;
  this->y = y;
}

void Shape::setX(int x){
  this->x = x;
}

void Shape::setY(int y) {
  this->y = y;
}

int Shape::getX(){
  return x;
}

int Shape::getY(){
  return y;
}

#endif //SHAPES_H
