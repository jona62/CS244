class Car{
  private:
    double fuel, speed;
    double x,y;
    char face;

  public:
    Car();
    Car(double);
    void set_fuel(double);
    void set_speed(double);
    void move(double);
    void turn(char direction);
    double get_fuel();
    double get_speed();
    double x_coordinates();
    double y_coordinates();
};
