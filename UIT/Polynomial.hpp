#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include<iostream>

class IO {
    friend std::istream& operator>>(std::istream& is, IO& obj);
    friend std::ostream& operator<<(std::ostream& os, const IO& obj);

public:
    virtual void read(std::istream&);
    virtual void write(std::ostream&) const = 0;
};

class Polynomial {
private:
    std::vector<int> v;

public:
    Polynomial();
    Polynomial(int S);
    Polynomial(Polynomial& p);
    ~Polynomial();

    Polynomial operator+(const Polynomial& P2);
    Polynomial operator-(const Polynomial& P2);
    Polynomial operator*(const Polynomial& P2);

    friend std::istream& operator>>(std::istream& is, Polynomial& P);
    friend std::ostream& operator<<(std::ostream& os, const Polynomial& P);

    void read(std::istream& is);
    void print(std::ostream& os) const;
};

#endif