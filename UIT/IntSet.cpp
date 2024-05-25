#include <iostream>
#include <string>
#include <algorithm>
#include "IntSet.hpp"

using namespace std;

IntSet::IntSet() : values{ nullptr }, count{ 0 } {}
IntSet::IntSet(int* ptrArr, int Count) : count{ Count } {
    this->values = new int[count];
    copy(values, values + count, this->values);
    removeDuplicates();
}
IntSet::IntSet(const IntSet& s) : count{ s.count } {
    values = new int[count];
    copy(s.values, s.values + count, values);
}
IntSet::~IntSet() { delete[] values; }

void IntSet::removeDuplicates() {
    if (count <= 1) return;
    sort(values, values + count);
    int uniqueCnt = unique(values, values + count) - values;
    int* uniqueValues = new int[uniqueCnt];
    copy(values, values + count, uniqueValues);
    delete[] values;
    values = uniqueValues;
    count = uniqueCnt;
}

int  IntSet::operator[](int i) const {
    if (i >= 0 and i < count) {
        return values[i];
    }
    throw out_of_range("Out of range");
}

bool IntSet::operator==(const IntSet& s) const {
    if (this->count != s.count) return 0;
    for (int i = 0; i < s.count; i++) {
        if (this->values[i] != s.values[i]) return 0;
    }
    return 1;
}

IntSet& IntSet::operator=(const IntSet& s) {
    if (this != &s) {
        delete[] values;
        count = s.count;
        values = new int[count];
        copy(s.values, s.values + count, values);
    }
    return *this;
}

IntSet IntSet::operator+(const IntSet& s) const {
    int* t = new int[count + s.count];
    copy(values, values + count, t);
    copy(s.values, s.values + s.count, t + count);

    IntSet res(t, count + s.count);
    delete[] t;
    return res;
}

IntSet IntSet::operator-(const IntSet& s) const {
    int* t = new int[count];
    int sz = 0;
    for (int i = 0; i < count; i++) {
        bool f = 0;
        for (int j = 0; j < s.count; j++) {
            if (values[i] == s.values[j]) {
                f = 1;
                break;
            }
        }
        if (!f) t[sz++] = values[i];
    }

    IntSet res(t, sz);
    delete[] t;
    return res;
}

istream& operator>>(istream& is, IntSet& s) {
    is >> s.count;
    s.values = new int[s.count];
    for (int i = 0; i < s.count; i++) {
        is >> s.values[i];
    }
    s.removeDuplicates();
    return is;
}

ostream& operator<<(ostream& os, const IntSet& s) {
    for (int i = 0; i < s.count; i++) {
        os << s.values[i] << ", ";
    }

    return os;
}

int main() {
    int* values = new int[2];
    values[0] = 1;
    values[1] = 1;
    IntSet s1, s2(values, 2), s3; //nếu 2 phần tử giống nhau thì chỉ lưu trữ 1 lần trong tập hợp
    cin >> s2;//nhập lại toàn bộ giá trị của s2
    s3 = s1 + s2; //hợp s1 và s2, union
    s3 = s1 - s2; //phép bù, diff
    cout << s1 << s2[0];
    cout << (s1 == s2);
    return 0;
}