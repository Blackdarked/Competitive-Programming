#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
private:
    double real_, imaginary_;
public:
    Complex();
    Complex(double real, double imaginary);
    ~Complex();

    double getReal(void);
    double getImaginary(void);
    void setReal(double real);
    void setImaginary(double imaginary);

    void createComplex(double real, double imaginary);
    Complex operator+(Complex complex);
    Complex operator-(Complex complex);
    Complex operator*(Complex complex);
    Complex operator/(Complex complex);
};

std::istream& operator>>(std::istream& in, Complex& complex);
std::ostream& operator<<(std::ostream& out, Complex& complex);

#endif