#include "circle.h"
#define PI 3.14159265359

Circle::Circle ()
{
  radius = 0;
  center_x = 0;
  center_y = 0;
}

Circle::Circle (double x, double y)
{
  center_x = x;
  center_y = y;
  radius = 0;
}

Circle::Circle (double x, double y, double r)
{
  center_x = x;
  center_y = y;
  radius = r;
}

void Circle::set_xy(double x, double y)
{
  center_x = x;
  center_y = y;
}

void Circle::set_radius(double r)
{
  radius = r;
}

double Circle::calculate_area ()
{
  double area = PI * (radius*radius);
  return area;
}

double Circle::calculate_p ()
{
  double p = 2 * PI * radius;
  return p;
}
double Circle::get_x ()
{
  return center_x;
}
double Circle::get_y()
{
  return center_y;
}

double Circle::get_radius()
{
  return radius;
}
