#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
  double fuel, speed;
  double x,y;

public:
  Car();
  Car(double);
  void set_fuel(double);
  void set_speed(double);
  void move(string);
  double get_fuel();
  double get_speed();
  double x_coordinates();
  double y_coordinates();
};
