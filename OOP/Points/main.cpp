#include <iostream>
using namespace std;
#include "point.cc"

int main(){
  Point p1;
  Point p2(12,34);
  cout<<"\n("<<p1.get_x()<<", "<<p1.get_y()<<")\n";
  cout<<"\n("<<p2.get_x()<<", "<<p2.get_y()<<")\n";

  return 0;
}
