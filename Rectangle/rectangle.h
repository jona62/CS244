#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
	private:
		double width;
		double length;
	public:
		Rectangle();
		Rectangle(double, double);
		void set_width(double w);
		void set_length(double l);
		double get_width();
		double get_length();
		double area();
		void draw();

};

Rectangle::Rectangle(){
	width = 0;
	length = 0;
}

Rectangle::Rectangle(double l, double w){
	width =  w;
	length = l;
}

void Rectangle::set_width(double w){
	width = w;
}

void Rectangle::set_length(double l){
	length = l;
}

double Rectangle::get_width(){
	return width;
}

double Rectangle::get_length(){
	return length;
}

double Rectangle::area(){
	return length * width;
}

void Rectangle::draw(){
    for(int i=0; i<length; i++){
        for(int j=0; j<width;  j++){
	    cout<<"* ";
	}
	cout<<"\n";
    }
}

#endif //RECTANGLE_H
