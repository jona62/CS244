#include "baseball.h"

BaseBall::BaseBall(){
  missed = 0;
  hits = 0;
  pitches = 0;
  homeRuns = 0;
}

//returns the batting average
double BaseBall::battingAverage(){
  double average = hits/pitches;
  return average;
}

//returns number of misses
int BaseBall::getMisses(){
  return missed;
}

//returns number of pitches thrown
int BaseBall::getPitches(){
  return pitches;
}

//returns number of hits
int BaseBall::getHits(){
  return hits;
}

//returns number of Home runs
int BaseBall::getHomeRuns(){
  return homeRuns;
}

//Increments the pitches variable by 1 everytime the function is called
//Missed increments by 1 if chance is false and homeruns by 1 if chance is true
void BaseBall::pitch(){
  bool chance = rand()% 2 + 0;
  if(chance){
    hits++;
    homeRuns++;
  }
  else{
    missed++;
  }
  pitches++;

}
