#ifndef FARM_HPP
#define FARM_HPP

#include<string>
#include<vector>

class Animal {
private:
    std::string sound;
public:
    virtual void makeSound() const;
    virtual int giveMilk() const;
    virtual std::vector<Animal*>giveBirth() const;
};

class Farm {
public:
    std::vector<Animal*> Animal;
};

class Cow : public Animal {
public:
    Cow();
    ~Cow();

    void makeSound() const;
    int giveMilk() const;
    std::vector<Cow*>giveBirth() const;
};


class Sheep : public Animal {
private:

public:
    Sheep();
    ~Sheep();

    void makeSound() const;
    int giveMilk() const;
    std::vector<Sheep*>giveBirth() const;
};

class Goat : public Animal {
private:

public:
    Goat();
    ~Goat();

    void makeSound() const;
    int giveMilk() const;
    std::vector<Goat*>giveBirth() const;
};

#endif