#ifndef FARM_HPP
#define FARM_HPP

#include<string>
#include<vector>

class Animal {
private:
    std::string sound;
public:
    virtual void makeSound() const = 0;
    virtual int giveMilk() const = 0;
    virtual std::vector<Animal*>giveBirth() const = 0;
};

class Farm : public Animal {
public:
    std::vector<Animal*> Animal;
};

class Cow : public Animal {
public:
    Cow();
    ~Cow();

    virtual void makeSound() const;
    virtual int giveMilk() const;
    virtual std::vector<Animal*>giveBirth() const;
};


class Sheep : public Animal {
private:

public:
    Sheep();
    ~Sheep();

    virtual void makeSound() const;
    virtual int giveMilk() const;
    virtual std::vector<Animal*>giveBirth() const;
};

class Goat : public Animal {
private:

public:
    Goat();
    ~Goat();

    virtual void makeSound() const;
    virtual int giveMilk() const;
    virtual std::vector<Animal*>giveBirth() const;
};

#endif