#include <iostream>
#include <random>
#include <chrono>
#include <exception>
#include <vector>
#include <cstdlib>
#include "arrPhanSo.hpp"

using namespace std;

bool primeCheck(int c) {
    if (c < 2) return false;
    for (int i = 2; i * i < c; i++) {
        if (c % i == 0) return false;
    }
    return true;
}

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }


arrPhanSo::arrPhanSo() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        pair<int, int> p = make_pair(Rand(0, n), Rand(1, n));
        this->vec.push_back(p);
    }
}

arrPhanSo::~arrPhanSo() {}

int          arrPhanSo::getNumerator() { return this->numerator; }
int          arrPhanSo::getDenominator() { return this->denominator; }
vector<pair<int, int>>  arrPhanSo::getVec() { return this->vec; }
void         arrPhanSo::setNumerator(int Numerator) { this->numerator = Numerator; }
void         arrPhanSo::setDenominator(int Denominator) { this->denominator = Denominator; }
void         arrPhanSo::setVec(vector<pair<int, int>> Vec) { this->vec = Vec; }

pair<int, int>          arrPhanSo::maxNum(arrPhanSo arr) {
    vector<float> farray;
    for (int i = 0; i < this->vec.size(); i++) {
        farray.push_back(this->vec[i].first / this->vec[i].second);
    }

    float mx = INT_MIN;
    int idx = 0;
    for (int i = 0; i < farray.size(); i++) {
        if (farray[i] > mx) {
            mx = farray[i];
            idx = i;
        }
    }

    return this->vec[idx];
}

int         arrPhanSo::isPrime(arrPhanSo arr) {
    int count = 0;
    for (int i = 0; i < this->vec.size(); i++) {
        if (primeCheck(this->vec[i].first)) ++count;
    }

    return count;
}

void        arrPhanSo::sort(arrPhanSo& arr) {
    for (int i = 0; i < this->vec.size() - 1; i++) {
        int j = i - 1;
        float x = this->vec[i].first / this->vec[i].second;
        for (; j >= 0; j--) {
            if ((this->vec[j].first / this->vec[j].second) > x) {
                this->vec[j + 1] = this->vec[j];
            }
        }
        x = this->vec[j + 1].first / this->vec[j + 1].second;
    }
}

istream& operator>>(istream& in, arrPhanSo& arr) {
    for (int i = 0; i < arr.vec.size(); i++) {
        int n, d;
        while (in >> n >> d) {
            pair<int, int> p = make_pair(n, d);
            arr.vec.push_back(p);
        }
    }
    return in;
}


ostream& operator<<(ostream& out, arrPhanSo& arr) {
    for (int i = 0; i < arr.vec.size(); i++) {
        cout << arr.vec[i].first << "/" << arr.vec[i].second << ' ';
    }

    return out;
}

int main() {

    return 0;
}