#include <iostream>
using namespace std;

//Minimum Integer In an Array
int min(int arr[], int size){
  int min = arr[0];
  for(int i=0; i<size; i++){
    (min > arr[i]) ? min = arr[i] : min = min;
  }
  return min;
}

int secondMin(int arr[], int size){
  int min = arr[0];
  int min2;
  for(int i=0; i<size; i++){
    (min > arr[i]) ? min = arr[i] : min = min;
  }

  for(int i=0; i<size; i++){
    if(arr[i] != min){
      (min2 > arr[i]) ? min2 = arr[i] : min2 = min;
    }
  }
  return min2;
}

//Maximum Number in an Array
int max(int arr[], int size){
  int max = arr[0];
  for(int i=0; i<size; i++){
    (max < arr[i]) ? max = arr[i] : max = max;
  }
  return max;
}

//Sorts an Array
void sort(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}


void sort(int arr[], int size){
  for(int i=0; i<size; i++){
    for(int j=0; j<size-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
}


void print(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<",";
  }
}

int main(){
  int arr[] = {47, 22, 3, 6, 1, 2, 2, 77, 41, 171, 44,787, 23, 68, 58, 66, 100};
  int size = sizeof(arr)/sizeof(arr[0]);

  // cout<<min(arr,size)<<endl;
  // cout<<max(arr,size)<<endl;
  // sort(arr,size);
  // print(arr,size);

  cout<<secondMin(arr, size);

  return 0;
}
