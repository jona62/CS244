//Jonathan James and Abigail Bisono
#include "car.h"

int main(){
  Car Toyota;

  cout<<"("<<Toyota.x_coordinates()<<", "<<Toyota.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toyota.get_fuel()<<". Speed: "<<Toyota.get_speed()<<"\n\n";

  Toyota.set_fuel(10);
  Toyota.set_speed(50);
  Toyota.move("north");

  cout<<"("<<Toyota.x_coordinates()<<", "<<Toyota.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toyota.get_fuel()<<". Speed: "<<Toyota.get_speed()<<"\n\n";

  Toyota.move("west");
  cout<<"("<<Toyota.x_coordinates()<<", "<<Toyota.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toyota.get_fuel()<<". Speed: "<<Toyota.get_speed()<<"\n\n";

  Toyota.move("south");
  cout<<"("<<Toyota.x_coordinates()<<", "<<Toyota.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toyota.get_fuel()<<". Speed: "<<Toyota.get_speed()<<"\n\n";

  Toyota.move("east");
  cout<<"("<<Toyota.x_coordinates()<<", "<<Toyota.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Toyota.get_fuel()<<". Speed: "<<Toyota.get_speed()<<"\n\n";

  return 0;
}
