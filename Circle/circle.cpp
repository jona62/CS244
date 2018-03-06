#include <iostream>
#include "circle.h"
using namespace std;

int main(){
  Circle cir1;
  cout<<"(x, y) = ("<<cir1.get_x()<<", "<<cir1.get_y()<<")"<<"\n";
  cout<<"radius = "<<cir1.get_radius()<<"\n";
  cout<<"Area = "<<cir1.calculate_area()<<"\n";
  cout<<"Perimeter/ Circumference = "<<cir1.calculate_p()<<"\n\n";

  Circle cir2(2.0, 6.0);
  cout<<"(x, y) = ("<<cir2.get_x()<<", "<<cir2.get_y()<<")"<<"\n";
  cout<<"radius = "<<cir2.get_radius()<<"\n";
  cout<<"Area = "<<cir2.calculate_area()<<"\n";
  cout<<"Perimeter/ Circumference = "<<cir2.calculate_p()<<"\n\n";

  Circle cir3(2.0, 3.6, 4.7);
  cout<<"(x, y) = ("<<cir3.get_x()<<", "<<cir3.get_y()<<")"<<"\n";
  cout<<"radius = "<<cir3.get_radius()<<"\n";
  cout<<"Area = "<<cir3.calculate_area()<<"\n";
  cout<<"Perimeter/ Circumference = "<<cir3.calculate_p()<<"\n\n";

  Circle cir4;
  cir4.set_xy(7.6,8.65);
  cir4.set_radius(6.56);
  cout<<"(x, y) = ("<<cir4.get_x()<<", "<<cir4.get_y()<<")"<<"\n";
  cout<<"radius = "<<cir4.get_radius()<<"\n";
  cout<<"Area = "<<cir4.calculate_area()<<"\n";
  cout<<"Perimeter/ Circumference = "<<cir4.calculate_p()<<"\n\n";

  return 0;
}
