#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <assert.h>
#define SIZEA 2
#define SIZEB SIZEA/2
using namespace std;


//Points class
class Points{
  private:
    double x,y;
  public:
    Points();
    void reset(double,double);
    double get_x();
    double get_y();
};

Points::Points(){
  x = 0;
  y = 0;
}

void Points::reset(double dx, double dy){
  x = dx;
  y = dy;
}

double Points::get_x(){
  return x;
}

double Points::get_y(){
  return y;
}



//Distance class
class Distance{
  private:
    Points initial_arr[SIZEA];
    double final_arr[SIZEB];
  public:
    Distance();
    void fill_finalArr();
    double calculateDistance(Points A, Points B);
    void print_finalArr();
    void print_initialArr();

};

Distance::Distance(){
  srand(time(NULL));
  double x1,y1;
  for(int i=0; i<SIZEA; i++){
    x1 = rand()% 100 + 1;
    y1 = rand()% 100 + 1;
    initial_arr[i].reset(x1,y1);
  }
}

void Distance::fill_finalArr(){
  int i=0, j=0;
  while(j<SIZEA -1){
    assert(j<SIZEA -1);
    final_arr[i] = calculateDistance(initial_arr[j], initial_arr[j+1]);
    i++;
    j+=2;
  }
}

double Distance::calculateDistance(Points A, Points B){
  double sumX, sumY, distance;
  sumX = pow((A.get_x() - B.get_x()), 2);
  sumY = pow((A.get_y() - B.get_y()), 2);
  distance = sqrt(sumX + sumY);
  return distance;
}

void Distance::print_finalArr(){
  for(int i=0; i<SIZEB; i++){
    cout<<final_arr[i]<<"\n";
  }
  cout<<"\n";
}

void Distance::print_initialArr(){
  for(int i=0; i<SIZEA; i++){
    cout<<"("<<initial_arr[i].get_x()<<","<<initial_arr[i].get_y()<<")"<<"\n";
  }
}
