#include<iostream>
#include<string>
#include"Product.hpp"

Product::Product(std::string Name, int Quantity, double Price) : name{ Name }, quantity{ Quantity }, price{ Price } {}
Product::~Product() {}

std::string Product::getName() { return this->name; }
int         Product::getQuantity() { return this->quantity; }
double      Product::getPrice() { return this->price; }

void Product::setName(std::string Name) { this->name = Name; }
void Product::setQuantity(int Quantity) { this->quantity = Quantity; }
void Product::setPrice(double Price) { this->price = Price; }

void Product::read(std::istream&) {
    is >> name >> quantity >> price;
    return is;
}
void Product::write(std::ostream&) const {
    os << "Name: " << name << "\n"
        <<  "Quantity: " << quantity << "\n"
        <<  "Price: " << price << "\n";
    return os;
}
double Product::payment() { return getPrice(); }

std::istream& operator>>(std::istream& is, Product& product) {
    product.read(is);
    return is;
}
std::ostream& operator>>(std::ostream& os, const Product& product) {
    product.write(os);
    return os;
}