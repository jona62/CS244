#include "car.h"

Car::Car(){
  fuel = 0;
  speed = 0;
  x = y = 0;
}

Car::Car(double f){
  fuel = f;
}

void Car::set_fuel(double f){
  fuel = f;
}

void Car::set_speed(double s){
  speed = s;
}

void Car::move(string str){
  if(str == "north"){
    y+= speed;
    fuel--;
  }

  if(str == "west"){
    x-= speed;
    fuel--;
  }

  if(str == "east"){
    x+= speed;
    fuel--;
  }

  if(str == "south"){
    y-= speed;
    fuel--;
  }

}
double Car::get_fuel(){
  return fuel;
}

double Car::get_speed(){
  return speed;
}

double Car::x_coordinates(){
  return x;
}

double Car::y_coordinates(){
  return y;
}
