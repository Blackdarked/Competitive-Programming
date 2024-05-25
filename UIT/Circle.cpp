#include <iostream>
#include <sstream>
#include <exception>
#include <cstdlib>
#include "Circle.hpp"

using namespace std;

Point::Point() {}
Point::Point(int x, int y) : x_{ x }, y_{ y } {}
Point::~Point() {}

double Point::getX(void) { return this->x_; }
double Point::getY(void) { return this->y_; }
void   Point::setX(double X) { this->x_ = X; }
void   Point::setY(double Y) { this->y_ = Y; }

Circle::Circle() {}
Circle::Circle(Point C, int R) : C_{ C }, R_{ R } {}
Circle::~Circle() {}

Point Circle::getC(void) { return this->C_; }
int   Circle::getR(void) { return this->R_; }
void  Circle::setC(Point C) { this->C_ = C; }
void  Circle::setR(int R) { this->R_ = R; }

double area(const Circle& C, const int& R) {
    cout << "The area of the circle is: ";
    return 3.1415 * R * R;
}

double circumference(const Circle& C, const int& R) {
    cout << "The circumference of the circle is: ";
    return 2 * 3.1415 * R;
}

int main() {
    int x, y; cin >> x >> y;
    Circle C; C.setX(x); C.setY(y);
    int R; C.setR(R);
    cout << area(C, R) << '\n' << circumference(C, R);

    return 0;
}