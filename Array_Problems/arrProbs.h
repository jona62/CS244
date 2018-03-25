#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#ifndef ARRPROBS_H
#define ARRPROBS_H



void randomizer(int arr[], int size){ //Used this to generate values for to put in the arrays
  srand(time(NULL));
  for(int i=0; i<size; i++){
    arr[i] = rand() % 100 + 50;
    cout<<arr[i]<<",";
  }
  cout<<endl;
}


void findGPA(int arr[], int size){ //Prints out a Letter grade based on a score
  int average_grade=0; // Initiatization of the grade variable
  for(int i=0; i<size; i++){

    average_grade += arr[i]; // Holds the value of grade at every iteration
  }
  average_grade = average_grade/size;
  switch(average_grade){
    case 0:
      cout<<"Your grade is "<<average_grade<<".0 & Your GPA is F\n"; //Prints an F if grade is 0
      break;
    case 1:
      cout<<"Your grade is "<<average_grade<<".0 & Your GPA is D\n"; //Prints a D if grade is 1
      break;
    case 2:
      cout<<"Your grade is "<<average_grade<<".0 & Your GPA is C\n"; //Prints a C if grade is 2
      break;
    case 3:
      cout<<"Your grade is "<<average_grade<<".0 & Your GPA is B\n"; //Prints a B if grade is 3
      break;
    case 4:
      cout<<"Your grade is "<<average_grade<<".0 & Your GPA is A\n"; //Prints an A if grade is 4
      break;
  }
}

void sumOfEven(int arr[], int size){ //Prints out the sum of even numbers
  int sum = 0;  // Initiatization of of Sum variable
  for(int i=0; i<size; i++){
    if(arr[i] % 2 == 0){ // Check to see if number is even
      sum += arr[i]; // Adds it to sum
    }
  }
  cout<<sum<<"\n";
}

void temperature(int arr[], int size){ //Prints out the temperatures greater than 70
  for(int i=0; i<size; i++){
    if(arr[i] > 70){ // Checks if temperature greater than 70
      cout<<arr[i]<<", "; //Prints it
    }
  }
}

#endif //ARRPROBS_H
