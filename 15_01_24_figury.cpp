
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Figure{
    protected:
        double x;
        double y;
    public:
        double getX() const { return x; }
        double getY() const { return y; }
        void setX(double x_p) {x = x_p; }
        void setY(double y_p) {y = y_p; }
};

class Circle : Figure{ 
public:
  Circle(double x_p=0, double y_p=0, double radius=0)
  : radius(radius){
    setX(x_p);
    setY(y_p);
    if(radius < 0){
      radius = 0;
    }
  }

  double getRadius() const { return radius; }

  void setRadius( double radius) { 
    if(radius>=0)
      this->radius = radius; 
  }
  void print() const {
    cout << "Circle centre = (" << x << "," << y << ") radius = " << radius << endl;
  }
  void move( double dx, double dy){
    x += dx;
    y += dy;
  }
  double getArea(){
    return M_PI * radius * radius;
  }
protected:
  double radius; 
};


class Rectangle : Figure{ 
public:
  Rectangle(double x_p=0, double y_p=0, double width=0, double height=0){
    setX(x_p);
    setY(y_p);
    this->width = (width>0)? width : 0;
    this->height = std::max(0.0, height);
  }
  double getWidth() const { return width; }
  double getHeight() const { return height; }
  
  void setWidth( double width) { this->width = width; }
  void setHeight( double height) { this->height = height; }
  void print() const {
    cout << " Rectangle position = (" << x << "," << y << ") width = "
         << width << " height = " << height << endl;
  }
  void move(double xDistance, double yDistance){
    x+= xDistance;
    y+= yDistance;
  }
  double getArea(){
    return width * height;
  }
protected:
  double width, height; 
};

int main(int argc, char** argv) {

  Circle c(1, 1, 3);
  Rectangle r(0, 1, 5, 6);
  c.print();
  cout << "Area = " << c.getArea() << endl;
  r.print();
  cout << "Area = " << r.getArea() << endl;
  
  return 0;
}
