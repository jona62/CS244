#include "car.h"
Car::Car(){
  fuel = 0;
  speed = 0;
  x = y = 0;
  face = 'N';
}

Car::Car(double speed){
  fuel = 0;
  this->speed = speed;
  x = y = 0;
  face = 'N';
}

void Car::set_fuel(double fuel){
  this->fuel = fuel;
}

void Car::set_speed(double speed){
  this->speed = speed;
}

void Car::move(double DyDx){
  if(fuel > 0){
    fuel -= 1;
    if(face == 'N'){
        y+=(DyDx +(DyDx/speed));
    }
    else if(face == 'S'){
        y-=(DyDx +(DyDx/speed));
    }
    else if(face == 'W'){
        x-=(DyDx +(DyDx/speed));
    }
    else if(face == 'E'){
        x+=(DyDx +(DyDx/speed));
    }
  }
}

void Car::turn(char direction){
  if(fuel > 0){
    fuel -= 1;
    if(face == 'N' && direction == 'L'){
      face = 'W';
    }
    else if(face == 'N' && direction == 'R'){
      face = 'E';
    }
    else if(face == 'W' && direction == 'L'){
      face = 'S';
    }
    else if(face == 'W' && direction == 'R'){
      face = 'N';
    }
    else if(face == 'S' && direction == 'L'){
      face = 'E';
    }
    else if(face == 'S' && direction == 'R'){
      face = 'W';
    }
    else if(face == 'E' && direction == 'L'){
      face = 'N';
    }
    else if(face == 'E' && direction == 'R'){
      face = 'S';
    }
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
