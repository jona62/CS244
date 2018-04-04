#include "baseball.h"

int main(){
  srand(time(NULL));
  BaseBall Jackie;
  Jackie.pitch();
  Jackie.pitch();
  Jackie.pitch();
  Jackie.pitch();
  cout<<"Pitches "<<Jackie.getPitches()<<"\n";
  cout<<"Hits "<<Jackie.getHits()<<"\n";
  cout<<"Misses "<<Jackie.getMisses()<<"\n";
  cout<<"Home Runs "<<Jackie.getHomeRuns()<<"\n";
  cout<<"Batting Average "<<Jackie.battingAverage()<<"\n";

  return 0;
}
