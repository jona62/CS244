#include <iostream>
using namespace std;

int main(){
  int gradeList[8] = {92,85,75,88,79,54,34,96};
  // int *myGrades = gradeList;
  // cout << gradeList[1]<<endl;
  // cout << *myGrades<<endl;
  // cout << *(myGrades + 2)<<endl;
  // cout << myGrades[3]<<endl;

  int *ptr;
  cout<<ptr<<endl;
  ptr = new int;
  cout<<ptr<<endl;
  *ptr = 22;

  cout<<*ptr<<endl;
  delete ptr;

  ptr = NULL;
  cout<<ptr<<endl;

  return 0;
}
