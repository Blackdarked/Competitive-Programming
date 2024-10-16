#include<iostream>
using namespace std;

class Money {
private:
    int iEuro, iCent;
public:
    [[nodiscard]] Money(int euro = 0, int cent = 0) : iEuro{ euro }, iCent{ cent } {
        while (iCent >= 100) {
            ++this->iEuro;
            this->iCent -= 100;
        }
    }
    ~Money() {}

    Money& operator++() {
        ++iCent;
        if (iCent >= 100) {
            ++iEuro;
            iCent -= 100;
        }
        return *this;
    }

    Money operator++(int) {
        Money old = *this;
        operator++();
        return old;
    }

    friend istream& operator>>(istream& is, Money& money) {
        is >> money.iEuro >> money.iCent;
    }
};

