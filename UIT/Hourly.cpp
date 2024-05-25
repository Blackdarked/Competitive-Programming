#include<iostream>
#include<string>
#include"Hourly.hpp"

Hourly::Hourly(std::string FullName, std::string Address, std::string PhoneNumber) : Employee{ FullName, Address, PhoneNumber } {}
Hourly::~Hourly() {}

double Hourly::getHrsCounter() { return this->hrscounter; }
double Hourly::getSalaryPerHrs() { return this->salaryperhrs; }

void Hourly::setHrsCounter(double HrsCounter) { this->hrscounter = HrsCounter; }
void Hourly::setSalaryPerHrs(double SalaryPerHrs) { this->salaryperhrs = SalaryPerHrs; }

void Hourly::read(std::istream&) {
    is >> fullname >> address >> phonenumber >> hrscounter >> salaryperhrs;
}
void Hourly::write(std::ostream&) const {
    os <<"Full Name: " << fullname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phonenumber << "\n"
        << "Work Hours: " << hrscounter << "\n"
        << "Salary Per Hour: " << salaryperhrs << "\n";
}
double Hourly::Hourpayment() { return (getSalaryPerHrs() * getHrsCounter()); }

std::istream& Hourly::operator>>(std::istream& is, Hourly& hourly) {
    hourly.read(is);
    return is;
}
std::ostream& Hourly::operator>>(std::ostream& os, const Hourly& hourly) {
    hourly.write(os);
    return os;
}