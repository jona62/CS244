//Jonathan James and Abigail Bisono
#include "car.h"

int main(){
  Car Toy;

  cout<<"("<<Toy.x_coordinates()<<", "<<Toy.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toy.get_fuel()<<". Speed: "<<Toy.get_speed()<<"\n\n";

  Toy.set_fuel(10);
  Toy.set_speed(50);
  Toy.move("north");

  cout<<"("<<Toy.x_coordinates()<<", "<<Toy.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toy.get_fuel()<<". Speed: "<<Toy.get_speed()<<"\n\n";

  Toy.move("west");
  cout<<"("<<Toy.x_coordinates()<<", "<<Toy.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toy.get_fuel()<<". Speed: "<<Toy.get_speed()<<"\n\n";

  Toy.move("south");
  cout<<"("<<Toy.x_coordinates()<<", "<<Toy.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toy.get_fuel()<<". Speed: "<<Toy.get_speed()<<"\n\n";

  Toy.move("east");
  cout<<"("<<Toy.x_coordinates()<<", "<<Toy.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toy.get_fuel()<<". Speed: "<<Toy.get_speed()<<"\n\n";

  return 0;
}
