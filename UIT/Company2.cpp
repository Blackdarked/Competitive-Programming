#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include "Company2.hpp"

using namespace std;

Employee::Employee(string FullName = "", string DOB = "", double BaseIncome = 0.0, double Salary = 0.0)
    : fullname{ FullName }, dob{ DOB }, baseincome{ BaseIncome }, salary{ Salary } {}

Management::Management(string FullName = "", string DOB = "", double BaseIncome = 0.0, double Salary = 0.0)
    : Employee{ FullName, DOB, BaseIncome, Salary } {}

Production::Production(string FullName = "", string DOB = "", double BaseIncome = 0.0, double Salary = 0.0)
    : Employee{ FullName, DOB, BaseIncome, Salary } {}

Office::Office(string FullName = "", string DOB = "", double BaseIncome = 0.0, double Salary = 0.0)
    : Employee{ FullName, DOB, BaseIncome, Salary } {}

istream& operator>>(istream& is, I_Printable& obj) {
    obj.read(is);
    return is;
}

ostream& operator<<(ostream& os, const I_Printable& obj) {
    obj.print(os);
    return os;
}

void Management::TotalSalary() { this->salary = this->baseincome * this->positionrate + this->extra; }
void Production::TotalSalary() { this->salary = this->baseincome + this->product * 2000; }
void Office::TotalSalary() { this->salary = this->baseincome + this->daysofwork * 200000 + this->extra; }

void Employee::read(istream& is) {
    is >> fullname >> dob >> baseincome;
}

void Management::read(istream& is) {
    is >> fullname >> dob >> baseincome;
}

void Production::read(istream& is) {
    is >> fullname >> dob >> baseincome;
}

void Office::read(istream& is) {
    is >> fullname >> dob >> baseincome;
}

void Employee::print(ostream& os) const {
    os << "Fullname: " << fullname << "\n"
        << "DOB: " << dob << "\n"
        << "Salary: " << salary << "\n";
}

void Management::print(ostream& os) const {
    os << "Fullname: " << fullname << "\n"
        << "DOB: " << dob << "\n"
        << "Salary: " << salary << "\n";
}

void Production::print(ostream& os) const {
    os << "Fullname: " << fullname << "\n"
        << "DOB: " << dob << "\n"
        << "Salary: " << salary << "\n";
}

void Office::print(ostream& os) const {
    os << "Fullname: " << fullname << "\n"
        << "DOB: " << dob << "\n"
        << "Salary: " << salary << "\n";
}

void display(const vector<Employee*>& employee) {
    cout << "Employees: \n";
    for (auto E : employee) {
        cout << *E << "\n";
    }
}

void CreateEmployee(istream& is) {
    Employee* e;
    e->read(is);
}

void Company::CalculateSalary() {
    for (auto E : employee) {
        cout << TotalSalary();
    }
}

void Company::PrintEmployee() {
    for (auto E : employee) {
        cout << *E;
    }
}

void Company::CompanySalary() {
    long double sum = 0;
    for (auto E : employee) {
        sum += E->TotalSalary();
    }

    cout << "Company Salary: " << sum << "\n";
}

void Company::FindEmployee() {
    string find;
    cin >> find;
    for (auto E : employee) {
        if (E->fullname == find) {
            cout << "Found\n";
        }
        else {
            cout << "Not Found\n";
        }
    }
}

void clear_screen(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause(void) {
    cin.clear();
    cin.ignore(256, '\n');
    cin.get();
}

void menu() {
    int choice;
    bool exit = 0;

    while (!exit) {
        clear_screen();
        cout << "1: Enter a new employee record\n"
            << "2: Calculate salary\n"
            << "3: Print all the employee records\n"
            << "4: Company salary\n"
            << "5: Find an employee by name\n"
            << "6: Exit\n"
            << "> ";
        cin >> choice;
        switch (choice) {
        case 1:
            CreateEmployee();
            pause();
            break;
        case 2:
            CalculateSalary();
            pause();
            break;
        case 3:
            PrintEmployee();
            pause();
            break;
        case 4:
            CompanySalary();
            pause();
            break;
        case 5:
            FindEmployee();
            pause();
            break;
        case 6:
            exit = 1;
            break;
        default:
            cout << "Invalid input\n";
            pause();
        }
    }
}


int main() {
    clear_screen();
    menu();
    return 0;
}