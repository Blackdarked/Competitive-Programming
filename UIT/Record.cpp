#include<iostream>
#include<string>
#include<vector>
#include"Record.hpp"

Record::Record(std::string ID, std::string Date, std::vector<Product> Product) : id{ ID }, date{ Date }, product{ Product } {}
Record::~Record() {}

std::string Record::getID() { return this->id; }
std::string Record::getDate() { return this->date; }
std::vector Record::getProduct() { return this->product; }

void Record::setID(std::string ID) { this->id = ID; }
void Record::setDate(std::string Date) { this->date = Date; }
void Record::setProduct(std::vector<Product> Product) { this->product = Product; }

void Record::read(std::istream&) {
    is >> id >> date >> product;
}
void Record::write(std::ostream&) const {
    os << "ID: " << id << "\n"
        << "Date: " << date << "\n"
        << "Product: \n";
    for (auto& i : product) {os << i; }
}
double Record::Recpayment() {
    double res = 0;
    for (auto& i : product) {
        res += i.getPrice();
    }
    return res;
}

friend std::istream& operator>>(std::istream& is, Record& record) {
    record.read(is);
    return is;
}
friend std::ostream& operator>>(std::ostream& os, const Record& record) {
    record.write(os);
    return os;
}