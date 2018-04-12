#include "windows.h"

Windows::Windows(){
  setHeight(40);
  setWidth(40);
  isOpen = true;
  isMaximized = true;
  isMinimized = false;
}

void Windows::setWidth(int width){
  WIDTH = width;
}

void Windows::setHeight(int height){
  HEIGHT = height;
}

void Windows::printScreen(int height = 40, int width = 40){
  for(int i=0; i<width; i++){
    for(int j=0; j<height; j++){
      if(i == 0 || i == height-1){
        cout<<"* ";
      }
      else{
        if( j== 0 || j == height-1){
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
      }
    }
      cout<<"\n";
    }
}

void Windows::openWindow(){
  printScreen();
}

void Windows::editWindow(int height, int width){
  printScreen(height, width);
}

void Windows::closeWindow(){

  printScreen();
}
