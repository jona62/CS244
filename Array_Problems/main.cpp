#include "arrProbs.h"

int main(){
  int arr1[10] = {1,2,4,3,4,0,0,1,2,3};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[15] = {15,2,10,2,7,17,5,10,10,3,5,17,14,4,2};
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  int arr3[14] = {146,74,93,108,114,78,119,135,67,55,136,108,133,106};
  int size3 = sizeof(arr3) / sizeof(arr3[0]);

  // randomizer(arr3, size);
  cout<<"Question 1: \n";
  findGPA(arr1, size1);
  cout<<"Question 2: \n";
  sumOfEven(arr2, size2);
  cout<<"Question 3: \n";
  temperature(arr3, size3);
  return 0;
}
