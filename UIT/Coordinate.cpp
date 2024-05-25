#include <iostream>
#include <cmath>
#include <sstream>
#include <exception>
#include <cstdlib>
#include "Coordinate.hpp"

using namespace std;

Point::Point() {}
Point::Point(int x, int y) : x_{ x }, y_{ y } {}
Point::~Point() {}

double Point::getX(void) { return this->x_; }
double Point::getY(void) { return this->y_; }
void   Point::setX(double X) { this->x_ = X; }
void   Point::setY(double Y) { this->y_ = Y; }

void input(Point& p) {
    int x, y; cin >> x >> y;
    p.setX(x); p.setY(y);
}

double Distance(const Point& p1, const Point& p2) {
    double ans = sqrt((p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (p2.getY() - p2.getY()) * (p2.getY() - p2.getY()));
    return ans;
}

int main() {
    Point p1, p2;
    input(p1); input(p2);
    Distance(p1, p2);
}