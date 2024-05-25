#ifndef cPhanso_H
#define cPhanso_H

class cPhanso {
private:
    int numerator, denominator;
public:
    cPhanso();
    ~cPhanso();

    int getNumerator(void);
    int getDenominator(void);
    void setNumerator(int Numerator);
    void setDenominator(int Denominator);

    cPhanso operator+(cPhanso cphanso);
    bool convertStringtoFraction(std::string cphansoString);

};

std::istream& operator>>(std::istream& in, cPhanso& cphanso);
std::ostream& operator<<(std::ostream& out, cPhanso& cphanso);

class InputFailException : public std::exception {
public: virtual const char* what() const throw() { return "Invalid input"; }
};

#endif