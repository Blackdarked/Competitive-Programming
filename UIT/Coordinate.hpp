#ifndef CIRCLE_H
#define CIRCLE_H

class Point {
private:
    double x_, y_;

public:
    Point();
    Point(int x, int y);
    ~Point();

    double getX(void);
    double getY(void);
    void setX(double X);
    void setY(double Y);
};

#endif