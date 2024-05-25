#include"CDate.hpp"
using namespace std;

CDate::CDate() {}
CDate::CDate(int D, int H, int M, int S) : d{ D }, h{ H }, m{ M }, s{ S } {}
CDate::~CDate() {}

int  CDate::getD() { return this->d; }
void CDate::setD(int D) { this->d = D; }

CDate CDate::operator+(CDate& date) {
    CDate result;
    result.setD(date.getD() + result.getD());

    return result;
}

CDate CDate::operator-(CDate& date) {
    CDate result;
    result.setD(date.getD() - result.getD());

    return result;
}

CDate CDate::operator--() {
    this->d = this->d - 1;
    return *this;
}

CDate CDate::operator++() {
    this->d = this->d + 1;
    return *this;
}
istream& operator>>(istream& in, CDate& date) {
    in >> date.d;

    return in;
}

ostream& operator<<(ostream& out, CDate& date) {
    out << date.d;

    return out;
}


int main() {

    return 0;
}