#include<iostream>
#include<vector>
#include"Polynomial.hpp"

using namespace std;

Polynomial::Polynomial() { this->v.resize(0); }
Polynomial::Polynomial(int S) { this->v.resize(S); }
Polynomial::Polynomial(Polynomial& p) {
    if (p.v == this->v) return;
    else {
        this->v.resize(p.v.size());
        for (int i = 0; i < this->v.size(); i++) {
            this->v[i] = p.v[i];
        }
    }
}
Polynomial::~Polynomial() { delete& v; }

istream& operator>>(istream& is, IO& obj) {
    obj.read(is);
    return is;
}

ostream& operator<<(ostream& os, const IO& obj) {
    obj.write(os);
    return os;
}

Polynomial Polynomial::operator+(const Polynomial& P2) {
    int newSize = max(this->v.size(), P2.v.size());
    Polynomial P3(newSize);

    int i, j, k;
    while (i < this->v.size() and j < P2.v.size()) {
        P3.v[k++] = this->v[i++] + P2.v[j++];
    }

    while (i < this->v.size()) {
        P3.v[k++] = this->v[i++];
    }

    while (j < P2.v.size()) {
        P3.v[k++] = P2.v[j++];
    }

    return P3;
}
Polynomial Polynomial::operator-(const Polynomial& P2) {
    int newSize = max(this->v.size(), P2.v.size());
    Polynomial P3(newSize);

    int i, j, k;
    while (i < this->v.size() and j < P2.v.size()) {
        P3.v[k++] = this->v[i++] - P2.v[j++];
    }

    while (i < this->v.size()) {
        P3.v[k++] = this->v[i++];
    }

    while (j < P2.v.size()) {
        P3.v[k++] = P2.v[j++];
    }

    return P3;
}
Polynomial Polynomial::operator*(const Polynomial& P2) {
    int newSize = this->v.size() * P2.v.size();
    Polynomial P3(newSize);

    for (int i = 0; i < this->v.size(); i++) {
        for (int j = 0; j < P2.v.size(); j++) {
            P3.v[i + j] += this->v[i] * P2.v[j];
        }
    }

    return P3;
}

void Polynomial::read(istream& is) {
    cout << "Enter the amount of numbers: ";
    int n; is >> n; this->v.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element " << i << " with the degree of " << i << " :";
        is >> this->v[i];
    }
}
void Polynomial::print(ostream& os) const {
    for (int i = 0; i < this->v.size(); i++) {
        if (this->v[i] != 0) {
            if (this->v[i] < 0) {
                cout << this->v[i] << i;
            }
            else {
                cout << " + " << this->v[i] << i;
            }
        }
        else continue;
    }
}

istream& operator>>(istream& is, Polynomial& P) {
    P.read(is);
    return is;
}
ostream& operator<<(ostream& os, const Polynomial& P) {
    P.print(os);
    return os;
}

int main() {

    return 0;
}