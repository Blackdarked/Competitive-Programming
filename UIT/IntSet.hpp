#ifndef INTSET_HPP
#define INTSET_HPP

class IntSet {
private:
    int* values;
    int count;

public:
    IntSet();
    IntSet(int* ptrArr, int Count);
    IntSet(const IntSet& s);
    ~IntSet();

    void    removeDuplicates();

    int     operator[](int i) const;
    bool    operator==(const IntSet& s) const;
    IntSet  operator-(const IntSet& s) const;
    IntSet  operator+(const IntSet& s) const;
    IntSet& operator=(const IntSet& s);

    friend std::istream& operator>>(std::istream& is, IntSet& s);
    friend std::ostream& operator<<(std::ostream& os, const IntSet& s);
};

#endif

