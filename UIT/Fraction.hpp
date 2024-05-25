#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;
    int euclidean(int a, int b);

public:
    Fraction(void);
    Fraction(std::string fractionString);
    ~Fraction(void);

    int get_numerator(void);
    int get_denominator(void);
    void set_numerator(int Numerator);
    void set_denominator(int Denominator);

    bool reduce(void);
    bool convertStringtoFraction(std::string fractionString);

    bool operator<(Fraction Fraction);
    bool operator<=(Fraction Fraction);
    bool operator>(Fraction Fraction);
    bool operator>=(Fraction Fraction);
    bool operator!=(Fraction Fraction);
    bool operator==(Fraction Fraction);

    Fraction operator+(Fraction Fraction);
    Fraction operator+=(Fraction Fraction);
    Fraction operator-(Fraction Fraction);
    Fraction operator-=(Fraction Fraction);
    Fraction operator*(Fraction Fraction);
    Fraction operator*=(Fraction Fraction);
    Fraction operator/(Fraction Fraction);
    Fraction operator/=(Fraction Fraction);
    Fraction operator~(void);
    Fraction operator++(void);
    Fraction operator--(void);
    operator int();
    operator double();
    operator std::string();
};

class InputFailException : public std::exception {
    public: virtual const char* what() const throw() { return "Invalid input"; }
};

std::istream& operator>>(std::istream& in, Fraction& fraction);
std::ostream& operator<<(std::ostream& out, Fraction& fraction);

#endif