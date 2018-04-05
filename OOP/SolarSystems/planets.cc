#include "planets.h"

//Default constructor initializes variables
Planets::Planets(){
  set_planet_id("");
  set_num_of_moons(0);
  set_moons("");
  set_radius(0);
  set_gravity_on_equator(0);
  set_distance_to_sun(0);
}

//sets the planets name
void Planets::set_planet_id(string planet_id){
  this->planet_id = planet_id;
}

//sets the number of moons
void Planets::set_num_of_moons(int num_of_moons){
  this->num_of_moons = num_of_moons;
}

//sets the names of the moons
void Planets::set_moons(string moons){
  this->moons = moons;
}

//sets the radius of the planets
void Planets::set_radius(double radius){
  this->radius = radius;
}

//sets the gravity of the planet
void Planets::set_gravity_on_equator(double gravity_on_equator){
  this->gravity_on_equator = gravity_on_equator;
}

//sets the distance of the planet from the sun
void Planets::set_distance_to_sun(double distance_to_sun){
  this->distance_to_sun = distance_to_sun;
}

//returns the number of moons the planet has
string Planets::get_moons(){
  return(moons == "")?("None"):moons;
}

//returns the name of the planet
string Planets::get_planet_id(){
  return planet_id;
}

//returns the number of moons a planet has
int Planets::get_num_of_moons(){
  return num_of_moons;
}

//returns the radius of a planet
double Planets::get_radius(){
  return radius;
}

//returns the distance of the planet from the sun
double Planets::get_distance_to_sun(){
  return distance_to_sun;
}

//returns the gravity of the planet
double Planets::get_gravity_on_equator(){
  return gravity_on_equator;
}

//Default constructor initializes variables
Sun::Sun(){
  set_planet_id("Sun");
  set_num_of_moons(0);
  set_moons("");
  set_radius(696000);
  set_gravity_on_equator(274);
  set_distance_to_sun(0);
}

//Default constructor initializes variables
Mercury::Mercury(){
  set_planet_id("Mercury");
  set_num_of_moons(0);
  set_moons("");
  set_radius(2439.7);
  set_gravity_on_equator(3.7);
  set_distance_to_sun(0.35);
}

//Default constructor initializes variables
Venus::Venus(){
  set_planet_id("Venus");
  set_num_of_moons(0);
  set_moons("");
  set_radius(6051.9);
  set_gravity_on_equator(8.9);
  set_distance_to_sun(0.7);
}

//Default constructor initializes variables
Earth::Earth(){
  set_planet_id("Earth");
  set_num_of_moons(1);
  set_moons("Moon (Luna)");
  set_radius(6372.8);
  set_gravity_on_equator(9.8);
  set_distance_to_sun(1);
}

//Default constructor initializes variables
Mars::Mars(){
  set_planet_id("Mars");
  set_num_of_moons(2);
  set_moons("Phobos, Deimos");
  set_radius(3402.5);
  set_gravity_on_equator(3.7);
  set_distance_to_sun(1.55);
}

//Default constructor initializes variables
Jupiter::Jupiter(){
  set_planet_id("Jupiter");
  set_num_of_moons(69);
  set_moons("Ganymede, Callisto, Lo, Europa");
  set_radius(68366);
  set_gravity_on_equator(24.8);
  set_distance_to_sun(5.25);
}

//Default constructor initializes variables
Saturn::Saturn(){
  set_planet_id("Saturn");
  set_num_of_moons(62);
  set_moons("Titan, Rhea, Lapetus, Dione, Tethys, Enceladus, Mimas");
  set_radius(60268);
  set_gravity_on_equator(10.4);
  set_distance_to_sun(9.5);
}

//Default constructor initializes variables
Uranus::Uranus(){
  set_planet_id("Uranus");
  set_num_of_moons(27);
  set_moons("Ariel, Titania, Oberon, Umbriel, Miranda");
  set_radius(25559);
  set_gravity_on_equator(8.9);
  set_distance_to_sun(19.2);
}

//Default constructor initializes variables
Neptune::Neptune(){
  set_planet_id("Neptune");
  set_num_of_moons(14);
  set_moons("Triton");
  set_radius(24622);
  set_gravity_on_equator(11.1);
  set_distance_to_sun(30.8);
}
