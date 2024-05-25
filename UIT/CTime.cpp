#include<iostream>
#include"CTime.hpp"
using namespace std;

CTime::CTime(int H = 0, int M = 0, int S = 0) : h{ H }, m{ M }, s{ S } {}
CTime::~CTime() {}

int CTime::getH() { return this->h; }
int CTime::getM() { return this->m; }
int CTime::getS() { return this->s; }

void CTime::setH(int H) { this->h = H; }
void CTime::setM(int M) { this->m = M; }
void CTime::setS(int S) { this->s = S; }

CTime CTime::operator+(CTime& time) {
    CTime result;
    result.setS(result.getS() + time.getS());
    while (result.getS() >= 60) {
        result.setS(result.getS() - 60);
        result.setM(result.getM() + 1);
    }

    return result;
}

CTime CTime::operator-(CTime& time) {
    CTime result;
    result.setS(result.getS() - time.getS());
    while (result.getS() < 0) {
        result.setS(result.getS() + 60);
        result.setM(result.getM() - 1);
    }

    return result;
}

CTime CTime::operator++() {
    this->s = this->s + 1;
    return *this;
}

CTime CTime::operator--() {
    this->s = this->s - 1;
    return *this;
}

istream& operator>>(istream& in, CTime& time) {
    in >> time.h >> time.m >> time.s;

    return in;
}

ostream& operator<<(ostream& out, CTime& time) {
    while (time.s >= 60) {
        time.setS(time.s - 60);
        time.setM(time.m + 1);
    }

    while (time.m >= 60) {
        time.setM(time.m - 60);
        time.setH(time.h + 1);
    }
    out << time.h << ":" << time.m << ":" << time.s;

    return out;
}

int main() {

    return 0;
}