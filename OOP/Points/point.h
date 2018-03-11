#ifndef HEADER_H
#define	HEADER_H

class Point{
  private:
    double x,y;
  public:
    Point();
    Point(double , double);
    void shift(double, double);
    double get_x() const;
    double get_y() const;
    void reset(double, double);
    void setYtoX();
    void setXtoY();
};

#endif //HEADER_H
