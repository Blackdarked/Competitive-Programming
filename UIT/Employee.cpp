#include <iostream>
#include <string>
#include <vector>
#include "Employee.hpp"

using namespace std;

Employee::Employee(void) {
    this->ID = "";
    this->FullName = "";
    this->Department = "";
    this->Salary = 0;
    this->Bonus = 0;
    this->TotalSalaries = 0;
}

Employee::Employee(string ID, string FullName, string Department, int Salary, int Bonus) {
    this->ID = ID;
    this->FullName = FullName;
    this->Department = Department;
    this->Salary = Salary;
    this->Bonus = Bonus;
}

Employee::~Employee(void) {}

string Employee::getID() { return this->ID; }
string Employee::getFullName() { return this->FullName; }
string Employee::getDepartment() { return this->Department; }
int Employee::getSalary() { return this->Salary; }
int Employee::getBonus() { return this->Bonus; }


std::istream& operator>>(std::istream& in, Employee employee) {
}

std::ostream& operator<<(std::ostream& out, Employee employee) {
}

int main() {

}