#include<iostream>
#include"CDate2.hpp"

CDate::CDate(int D, int M, int Y) : day{ D }, month{ M }, year{ Y } {}
CDate::~CDate();

int CDate::getDay() { return this->day; }
int CDate::getMonth() { return this->month; }
int CDate::getYear() { return this->year; }

void CDate::setDay(int D) { this->day = D; }
void CDate::setMonth(int M) { this->month = M; }
void CDate::setYear(int Y) { this->year = Y; }

CDate CDate::operator+(CDate& C) {
    CDate res;

    int td = this->day + C.day, tm = this->month, ty = this->year;
    if (this->month == 2) {
        if (this->year % 400 == 0 or (this->year % 4 == 0 and this->year % 100 != 0)) {
            if (td > 29) {
                while (td > 29) { td -= 29; ++tm; }
                while (tm > 12) { tm -= 12; ++ty; }
                res.setDay(td);
                res.setMonth(tm);
                res.setYear(ty);
            }
            else {
                res.setDay(this->day + C.day);
                res.setMonth(this->month);
                res.setYear(this->year);
            }
        }
        else if (this->day + C.day > 28) {
            while (td > 28) { td -= 28; ++tm; }
            while (tm > 12) { tm -= 12; ++ty; }
            res.setDay(td);
            res.setMonth(tm);
            res.setYear(ty);
        }
        else {
            res.setDay(this->day + C.day);
            res.setMonth(this->month);
            res.setYear(this->year);
        }
    }

    else if (this->month == 4 or this->month == 6 or this->month == 9 or this->month == 11) {
        if (this->day + C.day > 30) {
            while (td > 30) { td -= 30; ++tm; }
            while (tm > 12) { tm -= 12; ++ty; }
            res.setDay(td);
            res.setMonth(tm);
            res.setYear(ty);
        }
        else {
            res.setDay(this->day + C.day);
            res.setMonth(this->month);
            res.setYear(this->year);
        }
    }

    else {
        if (this->day + C.day > 31) {
            while (td > 31) { td -= 31; ++tm; }
            while (tm > 12) { tm -= 12; ++ty; }
            res.setDay(td);
            res.setMonth(tm);
            res.setYear(ty);
        }

        else {
            res.setDay(this->day + C.day);
            res.setMonth(this->month);
            res.setYear(this->year);
        }
    }

    return res;
}
CDate CDate::operator-(CDate& C) {
    CDate res;

    int td = this->day - C.day;
    while (td < 0) {
        if (this->month == 0) {
            this->month = 12;
        }
        else if (this->month == 2) {
            if (this->year % 400 == 0 or (this->year % 4 == 0 and this->year % 100 != 0)) this->day = this->day + 29;
            else this->day = this->day + 28;
            this->month = 1;
        }

        else if (this->month == 4 or this->month == 6 or this->month == 9 or this->month == 11) {
            this->day = this->day + 30;
            this->month = this->month - 1;
        }
        else {
            this->day = this->day + 31;
            this->month = this->month - 1;
        }
    }
}

istream& operator>>(istream& is, CDate& C) {
    is >> C.day >> C.month >> C.year;
    return is;
}
ostream& operator<<(ostream& os, const CDate& C) {
    os << C.day << "/" << C.month << "/" << C.year;
    return os;
}

int main() {

}