#include<iostream>
#include<cmath>
#include"Triangle.hpp"

using namespace std;

Triangle::Triangle() {}
Triangle::Triangle(Point A, Point B, Point C) : A_{ A }, B_{ B }, C_{ C } {}
Triangle::~Triangle() {}

void Triangle::Translate(float dx, float dy) {
    A_.Translate(dx, dy);
    B_.Translate(dx, dy);
    C_.Translate(dx, dy);
}

void Triangle::Rotate(float angle) {
    A_.Rotate(angle);
    B_.Rotate(angle);
    C_.Rotate(angle);
}

void Triangle::ZoomIn(float focalLength) {
    A_.ZoomIn(focalLength);
    B_.ZoomIn(focalLength);
    C_.ZoomIn(focalLength);
}

void Triangle::ZoomOut(float focalLength) {
    A_.ZoomOut(focalLength);
    B_.ZoomOut(focalLength);
    C_.ZoomOut(focalLength);
}

istream& operator>>(istream& in, Triangle& t) {
    float x, y;
    in >> x >> y;
    t.A_.setX(x); t.A_.setY(y);
    in >> x >> y;
    t.B_.setX(x); t.B_.setY(y);
    in >> x >> y;
    t.C_.setX(x); t.C_.setY(y);
    return in;
}

ostream& operator<<(ostream& out, const Triangle& t) {
    out << t.A_.getX() << ' ' << t.A_.getY() << ' '
        << t.B_.getX() << ' ' << t.B_.getY() << ' '
        << t.C_.getX() << ' ' << t.C_.getY();

    return out;
}

int main() {

    return 0;
}