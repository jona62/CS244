#ifndef SolarSystem_H
#define SolarSystem_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SolarSystem{
  protected:
    string moons;
    string planet_id;
    int num_of_moons;
    double radius;
    double gravity_on_equator;
    double distance_to_sun;

  public:
    SolarSystem();
    void set_planet_id(string);
    void set_moons(string);
    void set_num_of_moons(int);
    void set_radius(double);
    void set_gravity_on_equator(double);
    void set_distance_to_sun(double);
    string get_moons();
    string get_planet_id();
    int get_num_of_moons();
    double get_radius();
    double get_distance_to_sun();
    double get_gravity_on_equator();

    //Overloaded Ostream Operator to print the data of a planet
    //setw() to setwidth of the display
    friend ostream& operator<<(ostream& outs, SolarSystem& source){
      outs<<setw(30)<<source.get_planet_id()<<"\n";
      outs<<setw(30)<<"Number of Moons: "<<source.get_num_of_moons()<<"\n";
      outs<<setw(30)<<"Names of the Moon(s): "<<source.get_moons()<<"\n";
      outs<<setw(30)<<"Radius: "<<source.get_radius()<<"\n";
      outs<<setw(30)<<"Distance From Sun in AE: "<<source.get_distance_to_sun()<<"\n";
      outs<<setw(30)<<"(1 AE = distance sun-earth)\n";
      outs<<setw(30)<<"Gravity: "<<source.get_gravity_on_equator()<<"\n\n";
      return outs;
    }
};

//All classes below inherit from the Base class SolarSystem
class Sun:public SolarSystem{
  public:
    Sun();
};

class Mercury:public SolarSystem{
  public:
    Mercury();
};

class Venus:public SolarSystem{
  public:
    Venus();
};

class Earth:public SolarSystem{
  public:
    Earth();
};

class Mars:public SolarSystem{
  public:
    Mars();
};

class Jupiter:public SolarSystem{
  public:
    Jupiter();
};

class Saturn:public SolarSystem{
  public:
    Saturn();
};

class Uranus:public SolarSystem{
  public:
    Uranus();
};

class Neptune:public SolarSystem{
  public:
    Neptune();
};

#endif //SolarSystem_H
