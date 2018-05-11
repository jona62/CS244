#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape{
  private:
    int x,y;
  public:
    Rectangle();
    Rectangle(int,int);
    int area();
    int perimeter();
};

Rectangle::Rectangle(){
  x=y=0;
}

Rectangle::Rectangle(int x, int y){
  this->x = x;
  this->y = y;
}

int Rectangle::area(){
  return x*y;
}

int Rectangle::perimeter(){
  return 2*(x+y);
}


#endif //RECTANGLE_H
