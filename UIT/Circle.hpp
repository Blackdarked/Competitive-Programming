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


class Circle: public Point {
private:
    Point C_;
    int R_;

public:
    Circle();
    Circle(Point C, int R);
    ~Circle();

    Point getC(void);
    int getR(void);
    void setC(Point C);
    void setR(int R);
}

#endif