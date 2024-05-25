#include<iostream>
#include<string>
#include"Commission.hpp"

Commission::Commission(std::string FullName, std::string Address, std::string PhoneNumber) : Employee{ FullName, Address, PhoneNumber } {}
Commission::~Commission() {}

double Commission::getProfit() { return this->profit; }
double Commission::getRate() { return this->rate; }

void Commission::setProfit(double Profit) { this->profit = Profit; }
void Commission::setRate(double Rate) { this->rate = Rate; }

void Commission::read(std::istream&) {
    is >> fullname >> address >> phonenumber >> profit >> rate;
}
void Commission::write(std::ostream&) const {
    os << "Full Name: " << fullname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phonenumber << "\n"
        << "Profit: " << profit << "\n"
        << "Rate: " << rate << "\n";
}
double Commission::Compayment() {
    return (this->profit * this->rate);
}

std::istream& operator>>(std::istream& is, Commission& commission) {
    commission.read(is);
    return is;
}
std::ostream& operator>>(std::ostream& os, const Commission& commission) {
    commission.write(os);
    return os;
}