<<<<<<< HEAD
#ifndef WINDOWS_H
#define WINDOWS_H
#include <iostream>
using namespace std;

class Windows{
  private:
    bool isOpen;
    bool isMaximized;
    bool isMinimized;
    int HEIGHT, WIDTH;
  public:
    Windows();
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
=======
#ifndef WINDOWS_H
#define WINDOWS_H
#include <iostream>
using namespace std;

class Windows{

};

#endif //WINDOWS_H
>>>>>>> bb18d7e204cac975efef5dbc09d3e6208eec4d1b
