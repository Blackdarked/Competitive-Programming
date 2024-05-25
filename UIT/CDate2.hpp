#ifndef CDATE_HPP
#define CDATE_HPP

#include<iostream>

class CDate {
    friend std::istream& operator>>(std::istream& is, CDate& C);
    friend std::ostream& operator<<(std::ostream& os, const CDate& C);
private:
    int day, month, year;
public:
    CDate(int D, int M, int Y);
    ~CDate();

    int getDay();
    int getMonth();
    int getYear();

    void setDay(int D);
    void setMonth(int M);
    void setYear(int Y);

    CDate operator+(CDate& C);
    CDate operator-(CDate& C);
};


#endif