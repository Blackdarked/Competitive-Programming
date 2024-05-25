#include<iostream>
#include<cmath>
#include"Point.hpp"

using namespace std;

#define PI 3.141592654

Point::Point() : x_{ 0.0 }, y_{ 0.0 } {}
Point::Point(float x, float y) : x_{ x }, y_{ y } {}
Point::~Point() {}

float   Point::getX(void) const { return this->x_; }
float   Point::getY(void) const { return this->y_; }
void    Point::setX(float x) { this->x_ = x; }
void    Point::setY(float y) { this->y_ = y; }

void    Point::Translate(float dx, float dy) {
    x_ += dx;
    y_ += dy;
}

void    Point::Rotate(float angle) {
    angle = angle * PI / 180;
    float xR = x_ * cos(angle) - y_ * sin(angle), yR = x_ * cos(angle) + y_ * sin(angle);
    x_ = xR;
    y_ = yR;
}

void    Point::ZoomIn(float focalLength) {
    x_ *= focalLength;
    y_ *= focalLength;
}

void    Point::ZoomOut(float focalLength) {
    if (focalLength != 0) {
        x_ *= focalLength;
        y_ *= focalLength;
    }
}

istream& operator<<(istream& in, Point& p) {
    in >> p.x_ >> p.y_;

    return in;
}

ostream& operator>>(ostream& out, const Point& p) {
    out << p.x_ << ' ' << p.y_;

    return out;
}


int main() {

    return 0;
}
