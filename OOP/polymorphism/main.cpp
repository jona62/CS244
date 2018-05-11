#include "class.h"

int main(){
  base *baseptr;
  derived d;

  baseptr = &d;

  baseptr->print();
  baseptr->show();
  return 0;
}
