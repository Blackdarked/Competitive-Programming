#ifndef CARRAY_H
#define CARRAY_H

class cArray {
private:
    int n;
    std::vector<int> vec;
public:
    cArray();
    ~cArray();

    int getN(void) const;
    std::vector<int> getVec(void) const;
    void setN(int n);
    void setVec(std::vector<int> vec);

    int& operator[] (std::size_t idx);
    int minimumOdd(cArray carray);
    int MaximumNegative(cArray carray);
    int count(cArray carray, int x);
    void sortArray(cArray carray);
    bool increasingArray(cArray carray);

    friend std::istream& operator>>(std::istream& in, cArray& carray);
    friend std::ostream& operator<<(std::ostream& out, const cArray& cArray);
};

#endif