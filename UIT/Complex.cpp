#include <iostream>
#include <cstdlib>
#include "Complex.hpp"
using namespace std;

Complex::Complex() : real_{ 0.0 }, imaginary_{ 0.0 } {}
Complex::Complex(double real, double imaginary) : real_{ real }, imaginary_{ imaginary } {}
Complex::~Complex() {}

double Complex::getReal(void) { return this->real_; }
double Complex::getImaginary(void) { return this->imaginary_; }
void   Complex::setReal(double real) { this->real_ = real; }
void   Complex::setImaginary(double imaginary) { this->imaginary_ = imaginary; }


Complex Complex::operator+(Complex complex) {
    Complex result;
    result.setReal(this->real_ + complex.getReal());
    result.setImaginary(this->imaginary_ + complex.getImaginary());

    return result;
}

Complex Complex::operator-(Complex complex) {
    Complex result;
    result.setReal(this->real_ - complex.getReal());
    result.setImaginary(this->imaginary_ - complex.getImaginary());

    return result;
}

Complex Complex::operator*(Complex complex) {
    Complex result;
    result.setReal(this->real_ * this->imaginary_ - complex.getReal() * complex.getImaginary());
    result.setImaginary(this->real_ * complex.getImaginary() + this->imaginary_ * complex.getReal());

    return result;
}

Complex Complex::operator/(Complex complex) {
    Complex result;
    result.setReal((this->real_ * this->imaginary_ + result.getReal() * result.getImaginary()) / (this->imaginary_ * this->imaginary_ + result.getImaginary() * result.getImaginary()));
    result.setImaginary((this->imaginary_ * result.getReal() - this->real_ * result.getImaginary()) / (this->imaginary_ * this->imaginary_ + result.getImaginary() * result.getImaginary()));

    return result;
}

void addTwoComplex(void) {
    Complex first, second, result;
    cin >> first >> second;

    result = first + second;
    cout << result;
}

void subtractTwoComplex(void) {
    Complex first, second, result;
    cin >> first >> second;

    result = first + second;
    cout << result;
}

void multiplyTwoComplex(void) {
    Complex first, second, result;
    cin >> first >> second;

    result = first * second;
    cout << result;
}

void divideTwoComplex(void) {
    Complex first, second, result;
    cin >> first >> second;

    result = first / second;
    cout << result;
}

istream& operator>>(istream& in, Complex& complex) {
    string input;
    in >> input;

    return in;
}

ostream& operator<<(ostream& out, Complex& complex) {
    out << complex.getReal() << " + " << complex.getImaginary() << "i";
}

int main() {

    return 0;
}