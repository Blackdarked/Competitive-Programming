#include <iostream>
#include <exception>
#include <cstdlib>
#include <string>
#include "cPhanso.hpp"

using namespace std;

cPhanso::cPhanso() : numerator{ 0 }, denominator{ 0 } {};
cPhanso::~cPhanso() {}

int cPhanso::getNumerator(void) { return this->numerator; }
int cPhanso::getDenominator(void) { return this->denominator; }
void setNumerator(int Numerator) { this->numerator = Numerator; }
void setDenominator(int Denominator) { this->denominator = Denominator; }

bool Fraction::convertStringtoFraction(string cphansoString) {
    size_t pos = cphansoString.find("/");
    if (pos != string::npos) {
        try {
            this->numerator = atoi(cphansoString.substr(0, pos).c_str());
            this->denominator = atoi(cphansoString.substr(pos + 1, cphansoString.size()).c_str());
        }
        catch (...) { return false; }
        return (this->denominator == 0) ? false : true;
    }

    return false;
}

cPhanso cPhanso::operator+(cPhanso cphanso) {
    cPhanso pAns;
    if (this->denominator == cphanso.getDenominator()) {
        pAns.setNumerator(this->numerator + cphanso.getNumerator());
        pAns.setDenominator(this->denominator);
    }
    else {
        pAns.setNumerator(this->numerator * cphanso.getDenominator() + this->denominator * cphanso.getNumerator());
        pAns.setDenominator(this->denominator * cphanso.getDenominator());
    }

    return pAns;
}

std::istream& operator>>(std::istream& in, cPhanso& cphanso) {
    string input;
    in >> input;

    if (cphanso.convertStringtoFraction(input) == false)
        throw InputFailException();

    return in;
}

std::ostream& operator<<(std::ostream& out, cPhanso& cphanso) {
    out << cphanso.getNumerator() << " / " << cphanso.getDenominator();
    return out;
}

void inputFraction(void) {
    cPhanso p;

    cout << "Nhap phan so: ";
    try { cin >> p; }
    catch (exception& e) {
        cout << e.what();
        return;
    }
}

void printFraction(cPhanso p) {
    cout << p.getNumerator() << '/' << p.getDenominator();
}

void addFraction(void) {
    cPhanso p1, p2, pAns;

    cout << "Nhap phan so thu nhat: "
    try { cin >> p1; }
    catch (exception& e) {
        cout << e.what();
        return;
    }

    cout << "Nhap phan so thu : ";
    try { cin >> p2; }
    catch (exception& e) {
        cout << e.what();
        return;
    }

    pAns = p1 + p2;
    cout << "Tong hai phan so la: " << pAns;
}

int main() {
    return 0;
}