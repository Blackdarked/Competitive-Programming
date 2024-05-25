#pragma once
#ifndef ARRPHANSO_HPP
#define ARRPHANSO_HPP

class arrPhanSo {
private:
    int numerator, denominator;
    std::vector<std::pair<int, int>> vec;

public:
    arrPhanSo();
    ~arrPhanSo();

    int getNumerator();
    int getDenominator();
    std::vector<std::pair<int, int>> getVec();
    void setNumerator(int Numerator);
    void setDenominator(int Denominator);
    void setVec(std::vector<std::pair<int, int>> Vec);

    std::pair<int, int> maxNum(arrPhanSo arr);
    int isPrime(arrPhanSo arr);
    void sort(arrPhanSo& arr);


    friend std::istream& operator>>(std::istream& in, arrPhanSo& arr);
    friend std::ostream& operator<<(std::ostream& out, arrPhanSo& arr);
};


#endif