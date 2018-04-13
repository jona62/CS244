#include "windows.h"

int main(){
  Windows Microsoft;
  Microsoft.openWindow();

  cout<<endl;

  cout<<"Edited Windows\n";
  Microsoft.editWindow(20,20);

  cout<<"Windows Minimized\n";
  Microsoft.minimize();

  cout<<"Windows Maximized\n";
  Microsoft.maximize();
  return 0;
}
