#include "baseball.h"

int main(){
  //Generates the seed for the random numbers

  srand(time(NULL));
  //Object's instantiation
  BaseBall Player;
  Player.pitch();
  Player.pitch();
  Player.pitch();
  Player.pitch();

  cout<<"Pitches "<<Player.getPitches()<<"\n";
  cout<<"Hits "<<Player.getHits()<<"\n";
  cout<<"Misses "<<Player.getMisses()<<"\n";
  cout<<"Home Runs "<<Player.getHomeRuns()<<"\n";
  cout<<"Batting Average "<<Player.battingAverage()<<"\n";

  return 0;
}
