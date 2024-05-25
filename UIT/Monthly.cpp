#include<iostream>
#include<string>
#include"Monthly.hpp"

Monthly::Monthly(std::string FullName, std::string Address, std::string PhoneNumber) : Employee{ FullName, Address, PhoneNumber } {}
Monthly::~Monthly() {}

double Monthly::getSalary() { return this->salary; }

void Monthly::setSalary(double Salary) { this->salary = Salary; }

void Monthly::read(std::istream&) {
    is >> fullname >> address >> phonenumber >> salary;
}
void Monthly::write(std::ostream&) const {
    os << "Full Name: " << fullname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phonenumber << "\n"
        << "Salary: " << salary << "\n";
}
double Monthly::Monthpayment() { return getSalary(); }

std::istream& operator>>(std::istream& is, Monthly& monthly) {
    monthly.read(is);
    return is;
}
std::ostream& operator>>(std::ostream& os, const Monthly& monthly) {
    monthly.write(os);
    return os;
}