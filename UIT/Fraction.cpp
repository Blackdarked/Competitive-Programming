#include <iostream>
#include <sstream>
#include <exception>
#include <cstdlib>
#include <string>
#include "Fraction.hpp"

using namespace std;

Fraction::Fraction(void) {
    this->numerator = 0;
    this->denominator = 0;
}
Fraction::~Fraction(void) {}
Fraction::Fraction(string fractionString) { this->convertStringtoFraction(fractionString); }
int Fraction::euclidean(int a, int b) { return b == 0 ? a : this->euclidean(b, a % b); }

int Fraction::get_numerator(void) { return this->numerator; }
int Fraction::get_denominator(void) { return this->denominator; }
void Fraction::set_numerator(int Numerator) { this->numerator = Numerator; }
void Fraction::set_denominator(int Denominator) { this->denominator = Denominator; }

bool Fraction::reduce(void) {
    int gcd(this->euclidean(this->numerator, this->denominator));
    if (gcd > 1) {
        this->numerator /= gcd;
        this->denominator /= gcd;
        return true;
    }
    else { return false; }
}

bool Fraction::convertStringtoFraction(string fractionString) {
    size_t pos = fractionString.find("/");
    if (pos != string::npos) {
        try {
            this->numerator = atoi(fractionString.substr(0, pos).c_str());
            this->denominator = atoi(fractionString.substr(pos + 1, fractionString.size()).c_str());
        }
        catch (...) { return false; }
        return (this->denominator == 0) ? false : true;
    }

    return false;
}

bool Fraction::operator<(Fraction fraction) { return (this->numerator * fraction.get_denominator()) < (this->denominator * fraction.get_numerator()); }
bool Fraction::operator<=(Fraction fraction) { return (this->numerator * fraction.get_denominator()) <= (this->denominator * fraction.get_numerator()); }
bool Fraction::operator>(Fraction fraction) { return (this->numerator * fraction.get_denominator()) > (this->denominator * fraction.get_numerator()); }
bool Fraction::operator>=(Fraction fraction) { return (this->numerator * fraction.get_denominator()) >= (this->denominator * fraction.get_numerator()); }
bool Fraction::operator!=(Fraction fraction) { return (this->numerator * fraction.get_denominator()) != (this->denominator * fraction.get_numerator()); }
bool Fraction::operator==(Fraction fraction) { return (this->numerator * fraction.get_denominator()) == (this->denominator * fraction.get_numerator()); }

Fraction::operator string() {
    stringstream output;
    output << this->get_numerator() << "/" << this->get_denominator();

    return output.str();
}

Fraction Fraction::operator~(void) {
    Fraction result;
    if (this->numerator > this->denominator) { return *this; }
    else {
        result.set_numerator(this->denominator - this->numerator);
        result.set_denominator(this->denominator);
    }
    return result;
}
Fraction Fraction::operator++(void) {
    this->numerator += 1;
    return *this;
}
Fraction Fraction::operator--(void) {
    this->numerator -= 1;
    return *this;
}

Fraction Fraction::operator+(Fraction fraction) {
    Fraction result;
    if (this->denominator == fraction.get_denominator()) {
        result.set_numerator(this->numerator + fraction.get_numerator());
        result.set_denominator(this->denominator);
    }
    else {
        result.set_numerator((this->numerator * fraction.get_denominator()) + (this->denominator * fraction.get_numerator()));
        result.set_denominator(this->denominator * fraction.get_denominator());
    }

    return result;
}

Fraction Fraction::operator+=(Fraction fraction) {
    if (this->denominator == fraction.get_denominator()) {
        this->numerator += fraction.get_numerator();
    }
    else {
        this->numerator = (this->numerator * fraction.get_denominator()) + (this->denominator * fraction.get_numerator());
        this->denominator *= fraction.get_denominator();
    }

    return *this;
}

Fraction Fraction::operator-(Fraction fraction) {
    Fraction result;
    if (this->denominator == fraction.get_denominator()) {
        result.set_numerator(this->numerator - fraction.get_numerator());
        result.set_denominator(this->denominator);
    }
    else {
        result.set_numerator((this->numerator * fraction.get_denominator()) - (this->denominator * fraction.get_numerator()));
        result.set_denominator(this->denominator * fraction.get_denominator());
    }

    return result;
}

Fraction Fraction::operator-=(Fraction fraction) {
    if (this->denominator == fraction.get_denominator()) {
        this->numerator -= fraction.get_numerator();
    }
    else {
        this->numerator = (this->numerator * fraction.get_denominator()) - (this->denominator * fraction.get_numerator());
        this->denominator *= fraction.get_denominator();
    }

    return *this;
}

Fraction Fraction::operator*(Fraction fraction) {
    Fraction result;
    result.set_numerator(this->numerator * fraction.get_numerator());
    result.set_denominator(this->denominator * fraction.get_denominator());

    return result;
}

Fraction Fraction::operator*=(Fraction fraction) {
    this->numerator *= fraction.get_numerator();
    this->denominator *= fraction.get_denominator();

    return *this;
}

Fraction Fraction::operator/(Fraction fraction) {
    Fraction result;
    result.set_numerator(this->numerator * fraction.get_denominator());
    result.set_denominator(this->denominator * fraction.get_numerator());

    return result;
}

Fraction Fraction::operator/=(Fraction fraction) {
    this->numerator *= fraction.get_denominator();
    this->denominator *= fraction.get_numerator();

    return *this;
}

/* ------------------------------------------------------------------------------------------------------------------------------------- */

istream& operator>>(istream& in, Fraction& fraction) {
    string input;
    in >> input;

    if (fraction.convertStringtoFraction(input) == false) {
        throw InputFailException();
    }

    return in;
}

ostream& operator<<(ostream& out, Fraction& fraction) {
    out << fraction.get_numerator() << " / " << fraction.get_denominator();
    return out;
}

void clear_screen(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause(void) {
    cin.clear();
    cin.ignore(256, '\n');
    cin.get();
}

void reduceFraction(void) {
    Fraction frac;

    cout << "Enter the fraction (x/y): ";
    try { cin >> frac; }
    catch (exception& e) {
        cout << e.what();
        return;
    }

    if (frac.reduce() == true) { cout << "\nReduced form: " << frac; }
    else { cout << "\nReduced form: " << frac; }
}

void addFractions(void) {
    Fraction first, second, result;

    cout << "Enter the first fraction (x/y): ";
    try { cin >> first; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    cout << "Enter the second fraction (x/y): ";
    try { cin >> second; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    result = first + second;
    cout << "\nCalculations: " << first << " + " << second << " = " << result;

    if (result.reduce() == true) { cout << " = " << result; }
}

void subtractFractions(void) {
    Fraction first, second, result;

    cout << "Enter the first fraction (x/y): ";
    try { cin >> first; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    cout << "Enter the second fraction (x/y): ";
    try { cin >> second; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    result = first - second;
    cout << "\nCalculations: " << first << " - " << second << " = " << result;

    if (result.reduce() == true) { cout << " = " << result; }
}

void multiplyFractions(void) {
    Fraction first, second, result;

    cout << "Enter the first fraction (x/y): ";
    try { cin >> first; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    cout << "Enter the second fraction (x/y): ";
    try { cin >> second; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    result = first * second;
    cout << "\nCalculations: " << first << " * " << second << " = " << result;

    if (result.reduce() == true) { cout << " = " << result; }
}

void divideFractions(void) {
    Fraction first, second, result;

    cout << "Enter the first fraction (x/y): ";
    try { cin >> first; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    cout << "Enter the second fraction (x/y): ";
    try { cin >> second; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    result = first / second;
    cout << "\nCalculations: " << first << " / " << second << " = " << result;

    if (result.reduce() == true) { cout << " = " << result; }
}

void compareFractions(void) {
    Fraction first, second;

    cout << "Enter the first fraction (x/y): ";
    try { cin >> first; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    cout << "Enter the second fraction (x/y): ";
    try { cin >> second; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        return;
    }

    if (first < second) { cout << "\nThe larger fraction is: " << second; }
    else { cout << "\nThe larger fraction is: " << first; }
}

int main(void) {
    int choice;
    bool exit = false;

    while (!exit) {
        clear_screen();
        cout << "1: Reduce a fraction\n"
            << "2: Add two fractions\n"
            << "3: Subtract two fractions\n"
            << "4: Multiply two fractions\n"
            << "5: Divide two fractions\n"
            << "6: Compare two fractions\n"
            << "7: Exit\n\n"
            << "> ";
        cin >> choice;
        clear_screen();

        switch (choice) {
        case 1:
            reduceFraction();
            pause();
            break;
        case 2:
            addFractions();
            pause();
            break;
        case 3:
            subtractFractions();
            pause();
            break;
        case 4:
            multiplyFractions();
            pause();
            break;
        case 5:
            divideFractions();
            pause();
            break;
        case 6:
            compareFractions();
            pause();
            break;
        case 7:
            exit = true;
            break;
        default:
            cout << "Invalid Input\n";
            pause();
        }
    }
}