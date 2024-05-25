#pragma once
#ifndef __CTIME_SPAN_HPP
#define __CTIME_SPAN_HPP
#include<iostream>

class CTimeSpan {
private:
    int h, m, s;
public:
    CTimeSpan();
    CTimeSpan(int H, int M, int S);
    ~CTimeSpan();

    long long Total();
    int       getH();
    int       getM();
    int       getS();
    void      setH(int H);
    void      setM(int M);
    void      setS(int S);

    CTimeSpan operator+ (CTimeSpan& span);
    CTimeSpan operator- (CTimeSpan& span);
    bool      operator==(CTimeSpan& span);
    bool      operator!=(CTimeSpan& span);
    bool      operator> (CTimeSpan& span);
    bool      operator>=(CTimeSpan& span);
    bool      operator< (CTimeSpan& span);
    bool      operator<=(CTimeSpan& span);

    friend std::istream& operator>>(std::istream& in, CTimeSpan& span);
    friend std::ostream& operator<<(std::ostream& out, CTimeSpan& span);
};

#endif