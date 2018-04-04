#ifndef BASEBALL_H
#define BASEBALL_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class BaseBall{
  private:
    double pitches;
    double missed;
    double hits;
    double homeRuns;
  public:
    BaseBall();
    double battingAverage();
    double getMisses();
    double getPitches();
    double getHits();
    double getHomeRuns();
    void pitch();
};

#endif //BASEBALL_H
