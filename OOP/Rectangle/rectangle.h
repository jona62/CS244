class Rectangle{
  private:
    double width;
    double length;
  public:
    Rectangle();
    void set_width(double);
    void set_length(double);
    void draw_rect();
    double get_width();
    double get_length();
    double get_area();
};

Rectangle::Rectangle(){
  width = 0;
  length = 0;
}

void Rectangle::set_width(double w){
  if(w >= 0){
      width = w;
  }
  else{
    width = w;
  }
}

void Rectangle::set_length(double l){
  if(l >= 0){
      length = l;
    }
  else{
    length = l;
  }
}

void Rectangle::draw_rect(){
    for(int i=0; i<length; i++){
      for(int j=0; j<width; j++){
        cout<<"*";
      }
      cout<<"\n";
    }
}

double Rectangle::get_width(){
  return width;
}

double Rectangle::get_length(){
  return length;
}

double Rectangle::get_area(){
  return length * width;
}
