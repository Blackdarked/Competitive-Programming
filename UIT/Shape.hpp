class Shape {
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    virtual void draw() override {}
    virtual void rotate() override {}
    virtual ~Circle() {}
};

