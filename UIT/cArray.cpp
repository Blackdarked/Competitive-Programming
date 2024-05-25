#include <iostream>
#include <random>
#include <chrono>
#include <exception>
#include <vector>
#include <cstdlib>
#include "cArray.hpp"
using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

cArray::cArray() {
    cout << "Enter the number of elements: ";
    cin >> this->n;
    for (int i = 0; i < this->n; i++) {
        this->vec[i] = Rand(0, 999);
    }
}
cArray::~cArray() {}

vector<int> cArray::getVec(void) const { return this->vec; }
void        cArray::setVec(vector<int> vec) { this->vec = vec; }
int         cArray::getN(void) const { return this->n; }
void        cArray::setN(int n) { this->n = n; }

int& cArray::operator[] (std::size_t idx) {
    return vec[idx];
}

int  cArray::minimumOdd(cArray carray) {
    int mn = INT_MAX;
    for (int i = 0; i < carray.getN(); i++) {
        if (this->vec[i] < mn and this->vec[i] & 1) {
            mn = this->vec[i];
        }
    }
    return mn;
}

int  cArray::MaximumNegative(cArray carray) {
    int max = INT_MIN;
    for (int i = 0; i < carray.getN(); i++) {
        if (this->vec[i] < 0 and this->vec[i] > max) max = this->vec[i];
    }

    return max;
}

int  cArray::count(cArray carray, int x) {
    int cnt = 0;
    for (auto& i : carray.getVec()) {
        if (i == x) ++cnt;
    }

    return cnt;
}

void cArray::sortArray(cArray carray) {
    for (int i = 0; i < carray.getN() - 1; i++) {
        int j = i - 1, x = this->vec[i];
        for (; j >= 0; j--) {
            if (this->vec[j] > x) {
                this->vec[j + 1] = this->vec[j];
            }
        }
        this->vec[j + 1] = x;
    }
}

bool cArray::increasingArray(cArray carray) {
    for (int i = 1; i < carray.getN(); i++) {
        if (this->vec[i - 1] < this->vec[i]) return false;
    }
    return true;
}

std::istream& operator>>(std::istream& in, cArray& carray) {
    int t;
    while (in >> t) {
        carray.vec.push_back(t);
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const cArray& carray) {
    for (auto& i : carray.vec) {
        out << carray.vec[i] << ' ';
    }

    return out;
}

int main() {

    return 0;
}