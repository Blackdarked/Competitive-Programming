#include<iostream>
#include<string>
#include"Employee2.hpp"

Employee::Employee(std::string FullName, std::string Address, std::string PhoneNumber) : fullname{ FullName }, address{ Address }, phonenumber{ PhoneNumber } {}
Employee::~Employee() {}

std::string Employee::getFullName() { return this->fullname; }
std::string Employee::getAddress() { return this->address; }
std::string Employee::getPhoneNumber() { return this->phonenumber; }

void Employee::setFullname(std::string FullName) { this->fullname = FullName; }
void Employee::setAddress(std::string Address) { this->address = Address; }
void Employee::setPhoneNumber(std::string PhoneNumber) { this->phonenumber = PhoneNumber; }

double Employee::payment() {}

void Employee::read(std::istream&) {
    is >> fullname >> address >> phonenumber;
}

void Employee::write(std::ostream&) const {
    os << "Full Name: " << fullname << "\n"
        << "Address: " << address << "\n"
        << "Phone Number: " << phonenumber << "\n";
}

std::istream& operator>>(std::istream& is, Employee& Employee) {
    Employee.read(is);
    return is;
}

std::ostream& operator>>(std::ostream& os, const Employee& Employee) {
    Employee.write(os);
    return os;
}