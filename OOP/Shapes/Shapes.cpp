#include "Shapes.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main(){
  Circle *c;
  c = new Circle[4];


  cout<<"\n"<<c.area();
  return 0;
}
