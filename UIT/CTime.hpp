#pragma once
#ifndef __CTIME_HPP
#define 

#include<iostream>


class CTime{
private:
    int h, m, s;

public:
    CTime(int H, int M, int S);
    ~CTime();

    int getH();
    int getM();
    int getS();

    void setH(int H);
    void setM(int M);
    void setS(int S);

    CTime operator+(CTime& time);
    CTime operator-(CTime& time);
    CTime operator++();
    CTime operator--();

    friend std::istream& operator>>(std::istream& in, CTime& time);
    friend std::ostream& operator<<(std::ostream& out, CTime& time);
};

#endif