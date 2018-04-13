#include "windows.h"

Windows::Windows(){
  setHeight(40);
  setWidth(40);
  isOpen = true;
  isMaximized = true;
  isMinimized = false;
  prevWidth = prevHeight = 0;

}

void Windows::setWidth(int width){
  WIDTH = width;
}

void Windows::setHeight(int height){
  HEIGHT = height;
}

int Windows::getHeight(){
  return HEIGHT;
}


int Windows::getWidth(){
  return WIDTH;
}

void Windows::printScreen(int height = 0, int width = 0){
  setHeight(height);
  setWidth(width);
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
  printScreen(40,40);
}

void Windows::editWindow(int height, int width){
  printScreen(height, width);
}

void Windows::minimize(){
  isMinimized = true;
  if(isMaximized){
    int prevHeight = getHeight();
    int prevWidth = getWidth();
    setHeight(0);
    setWidth(0);
    printScreen();
  }
}

void Windows::maximize(){
  isMaximized = true;
  if(isMinimized){
    // setHeight(prevHeight);
    // setWidth(prevWidth);
    printScreen(prevHeight,prevWidth);
  }
}

void Windows::closeWindow(){
  setHeight(0);
  setWidth(0);
  printScreen();
}
