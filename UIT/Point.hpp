#pragma once
#ifndef POINT_HPP
#define POINT_HPP

class Point {
private:
    float x_, y_;
public:
    Point();
    Point(float x, float y);
    ~Point();

    float   getX(void) const;
    float   getY(void) const;
    void    setX(float x);
    void    setY(float y);

    void    Translate(float dx, float dy);
    void    Rotate(float angle);
    void    ZoomIn(float focalLength);
    void    ZoomOut(float focalLength);

    friend  std::istream& operator<<(std::istream& in, Point& p);
    friend  std::ostream& operator>>(std::ostream& out, const Point& p);
};

#endif