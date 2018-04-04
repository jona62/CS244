#ifndef BASEBALL_H
#define BASEBALL_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class BaseBall{
  private:
    int pitches;
    int missed;
    int hits;
    int homeRuns;
  public:
    BaseBall();
    double battingAverage();
    int getMisses();
    int getPitches();
    int getHits();
    int getHomeRuns();
    void pitch();
};

#endif //BASEBALL_H
