#include "car.h"

//Default Constructor
Car::Car(){
  fuel = 0;
  speed = 0;
  x = y = 0;
  face = 'N';
}

//A constructor that sets the speed for the car
Car::Car(double speed){
  fuel = 0;
  this->speed = speed;
  x = y = 0;
  face = 'N';
}

//Sets the amount of fuel in the car
void Car::set_fuel(double fuel){
  this->fuel = fuel;
}

//Sets the speed of the car
void Car::set_speed(double speed){
  this->speed = speed;
}

//Changes the position of the car with respect to the coordinate system
//i.e if car is facing north it will increase y-coordinate and it will decreasing the value of the y-coordinate if the car is facing south.
//Everytime you move the fuel decreaments by one(1)
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

//Turns the car to a direction with respect to its current position
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
