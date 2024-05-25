#include<iostream>
#include<string>
#include<vector>
#include"Company.hpp"

using namespace std;

Employee::Employee(std::string FullName = "", std::string DOB = "", int Salary = 0) : fullname{ FullName }, dob{ DOB }, salary{ Salary } {}
Employee::~Employee() {}

string  Employee::getFullName(void) { return this->fullname; }
string  Employee::getDOB(void) { return this->dob; }
int     Employee::getSalary(void) { return this->salary; }

void    Employee::setFullName(std::string FullName) { this->fullname = FullName; }
void    Employee::setDOB(std::string DOB) { this->dob = DOB; }
void    Employee::setSalary(int Salary) { this->salary = Salary; }

int     Employee::Salary() { return this->salary = 0; }

istream& operator>>(istream& in, Employee& employee) {
    in >> employee.fullname >> employee.dob >> employee.salary;

    return in;
}
ostream& operator<<(ostream& out, Employee& employee) {
    out << "Fullname: " << employee.fullname << "\n"
        << "Date of Birth: " << employee.dob << "\n"
        << "Salary: " << employee.salary << "\n";
    
    return out;
}

int     Office::getDaysOfWork(void) { return this->daysofwork; }
void    Office::setDaysOfWork(int DaysOfWork) { this->daysofwork = DaysOfWork; }

int     Office::Salary() {
    this->setSalary(this->getDaysOfWork() * 100000);
    return this->getSalary();
}

int     Production::getBaseSalary(void) { return this->basesalary; }
int     Production::getProductCount(void) { return this->productcount; }
void    Production::setBaseSalary(int BaseSalary) { this->productcount = BaseSalary; }
void    Production::setProductCount(int ProductCount) { this->productcount = ProductCount; }

int     Production::Salary() {
    this->setSalary(this->getBaseSalary() + this->getProductCount() * 5000);
    return this->getSalary();
}

int main() {

    return 0;
}