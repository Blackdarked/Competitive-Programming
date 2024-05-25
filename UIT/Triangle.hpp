#ifndef __TRIANGLE_HPP
#define __TRIANGLE_HPP

#include<iostream>
#include"Point.hpp"

class Triangle{
private:
    Point A_, B_, C_;
public:
    Triangle();
    Triangle(Point A = Point(), Point B = Point(), Point C = Point());
    ~Triangle();

    void    Translate(float dx, float dy);
    void    Rotate(float angle);
    void    ZoomIn(float focalLength);
    void    ZoomOut(float focalLength);

    friend  std::istream& operator>>(std::istream& in, Triangle& t);
    friend  std::ostream& operator<<(std::ostream& out, const Triangle& t);
};

#endif