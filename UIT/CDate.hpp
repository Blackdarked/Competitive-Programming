#pragma once
#ifndef __CTIME_HPP
#define __CTIME_HPP
#include "CTimeSpan.hpp"

class CDate : public CTimeSpan {
private:
    int d, h, m, s;

public:
    CDate();
    CDate(int D, int H, int M, int S);
    ~CDate();

    int  getD();
    void setD(int D);

    CDate operator+(CDate& date);
    CDate operator-(CDate& date);
    CDate operator--();
    CDate operator++();

    friend std::istream& operator>>(std::istream& in, CDate& date);
    friend std::ostream& operator<<(std::ostream& out, CDate& date);
};



#endif