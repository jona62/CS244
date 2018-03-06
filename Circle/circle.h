#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
  double radius;
  double center_x;
  double center_y;

public:
  Circle ();
  Circle (double, double);
  Circle (double, double, double);
  void set_xy(double, double);
  void set_radius(double);
  double calculate_area ();
  double calculate_p ();
  double get_x ();
  double get_y();
  double get_radius();
};

#endif //CIRCLE_H
