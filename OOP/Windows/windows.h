#ifndef WINDOWS_H
#define WINDOWS_H
#include <iostream>
using namespace std;

class Windows{
  private:
    bool isOpen;
    bool isMaximized;
    bool isMinimized;
    int prevWidth, prevHeight;
    int HEIGHT, WIDTH;
  public:
    Windows();
    int getHeight();
    int getWidth();
    void minimize();
    void maximize();
    void openWindow();
    void closeWindow();
    void addWindow();
    void setHeight(int);
    void setWidth(int);
    void editWindow(int,int);
    void printScreen(int, int);
};


#endif //WINDOWS_H
