#include "windows.h"

int main(){
  Windows Microsoft;
  Microsoft.openWindow();

  cout<<endl;

  Microsoft.editWindow(20,20);
  Microsoft.minimize();
  return 0;
}
