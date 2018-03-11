//Jonathan James
#include <iostream>
#include <string>
using namespace std;
#include "car.h"

int main(){
  Car Honda(50);
  Honda.set_fuel(121);

  cout<<"("<<Honda.x_coordinates()<<", "<<Honda.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Honda.get_fuel()<<". Speed: "<<Honda.get_speed()<<"\n\n";

  Honda.turn('L');
  Honda.move(13);
  cout<<"("<<Honda.x_coordinates()<<", "<<Honda.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Honda.get_fuel()<<". Speed: "<<Honda.get_speed()<<"\n\n";

  Honda.turn('L');
  Honda.move(13);
  cout<<"("<<Honda.x_coordinates()<<", "<<Honda.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Honda.get_fuel()<<". Speed: "<<Honda.get_speed()<<"\n\n";

  Honda.turn('L');
  Honda.move(13);
  cout<<"("<<Honda.x_coordinates()<<", "<<Honda.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Honda.get_fuel()<<". Speed: "<<Honda.get_speed()<<"\n\n";

  Honda.turn('L');
  Honda.move(13);
  cout<<"("<<Honda.x_coordinates()<<", "<<Honda.y_coordinates()<<")\n";
  cout<<"Fuel :"<<Honda.get_fuel()<<". Speed: "<<Honda.get_speed()<<"\n\n";
  return 0;
}
