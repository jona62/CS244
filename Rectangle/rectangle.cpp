#include <iostream>
#include <string>
using namespace std;
#include "rectangle.h"

int main(){
	Rectangle rect;

	rect.set_width(9);
	rect.set_length(4);
	cout<<rect.area();

	cout<<"\n";
	rect.draw();

	cout<<"\n";

	Rectangle rect2(12,12);
	cout<<rect2.area();
	cout<<"\n";
	rect2.draw();

return 0;
}
