#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include"Farm.hpp"

using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

Cow::Cow() {}
Cow::~Cow() {}
void            Cow::makeSound() const { cout << "Moo" << "\n"; }
int             Cow::giveMilk() const { return Rand(0, 20); }
vector<Animal*> Cow::giveBirth() const {
    vector<Animal*> cow;
    int quantity = Rand(0, 5);
    for (int i = 0; i < quantity; i++) {
        cow.push_back(new Cow());
    }
    return cow;
}

Sheep::Sheep() {}
Sheep::~Sheep() {}
void            Sheep::makeSound() const { cout << "Baa" << "\n"; }
int             Sheep::giveMilk() const { return Rand(0, 5); }
vector<Animal*> Sheep::giveBirth() const {
    vector<Animal*> sheep;
    int quantity = Rand(0, 5);
    for (int i = 0; i < quantity; i++) {
        sheep.push_back(new Sheep());
    }
    return sheep;
}

Goat::Goat() {}
Goat::~Goat() {}
void            Goat::makeSound() const { cout << "Bleat" << "\n"; }
int             Goat::giveMilk() const { return Rand(0, 10); }
vector<Animal*> Goat::giveBirth() const {
    vector<Animal*> goat;
    int quantity = Rand(0, 5);
    for (int i = 0; i < quantity; i++) {
        goat.push_back(new Goat());
    }
    return goat;
}

int main() {
    return 0;
}