#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include"Farm.hpp"

using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

void            Cow::makeSound() const { cout << "Moo" << "\n"; }
int             Cow::giveMilk() const { return Rand(0, 20); }
vector<Cow*>    Cow::giveBirth() const {
    int quantity = Rand(0, 5);
        for (int i = 0; i < quantity; i++) {
            giveBirthCow().push_back(new Cow());
        }
    return giveBirthCow();
}

int main() {

    return 0;
}