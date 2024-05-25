#include<iostream>
#include<string>
#include<vector>
#include"Hoancau.hpp"

using namespace std;

Employee::Employee() : id{ "" }, fullname{ "" }, address{ "" }, phonenumber{ "" }, email{ "" }, age{ 0 }, baseincome{ 0 } {}
Employee::Employee(std::string ID, std::string FullName, std::string Address, std::string PhoneNumber, std::string Email, int Age, int BaseIncome) :
    id{ ID }, fullname{ FullName }, address{ Address }, phonenumber{ PhoneNumber }, email{ Email }, age{ Age }, baseincome{ BaseIncome } {}
Employee::~Employee() {}

string  Employee::getID() { return this->id; }
string  Employee::getFullName() { return this->fullname; }
string  Employee::getAddress() { return this->address; }
string  Employee::getPhoneNumber() { return this->phonenumber; }
string  Employee::getEmail() { return this->email; }
int     Employee::getAge() { return this->age; }
int     Employee::getBaseIncome() { return this->baseincome; }

void    Employee::setID(string ID) { this->id = ID; }
void    Employee::setFullName(string FullName) { this->fullname = FullName; }
void    Employee::setAddress(string Address) { this->address = Address; }
void    Employee::setPhoneNumber(string PhoneNumber) { this->phonenumber = PhoneNumber; }
void    Employee::setEmail(string Email) { this->email = Email; }
void    Employee::setAge(int Age) { this->age = Age; }
void    Employee::setBaseIncome(int BaseIncome) { this->baseincome = BaseIncome; }

Developer::Developer() {}
Developer::~Developer() {}

int     Developer::getOTTime() { return this->ottime; }
int     Developer::getDevSalary() { return this->devsalary; }
void    Developer::setOTTime(int OTTime) { this->ottime = OTTime; }
void    Developer::setDevSalary(int DevSalary) { this->devsalary = DevSalary; }

int     Developer::TotalSalary() { return (this->baseincome + this->ottime * 200000); }

istream& operator>>(istream& in, Developer& developer) {
    in >> developer.id >> developer.fullname >> developer.address >> developer.phonenumber >> developer.email >> developer.age >> developer.baseincome;
    return in;
}
ostream& operator<<(ostream& out, const Developer& developer) {
    out << "ID: " << developer.getID() << "\n"
        << "Full Name: " << developer.getFullName() << "\n"
        << "Address: " << developer.getAddress() << "\n"
        << "Phone Number:" << developer.getPhoneNumber() << "\n"
        << "Email: " << developer.getEmail() << "\n"
        << "Age: " << developer.getAge() << "\n"
        << "Base Income: " << developer.getBaseIncome() << "\n"
        << "OT Time:" << developer.getOTTime() << "\n";
    return out;
}

Tester::Tester() {}
Tester::~Tester() {}

int     Tester::getErrCount() { return this->errcount; }
int     Tester::getTestSalary() { return this->testsalary; }
void    Tester::setErrCount(int ErrCount) { this->errcount = ErrCount; }
void    Tester::setTestSalary(int TestSalary) { this->testsalary = TestSalary; }

int     Tester::TotalSalary() { return this->baseincome + this->errcount * 50000; }

istream& operator>>(istream& in, Tester& tester) {
    in >> tester.id >> tester.fullname >> tester.address >> tester.phonenumber >> tester.email >> tester.age >> tester.baseincome >> tester.errcount;
    return in;
}
ostream& operator<<(ostream& out, const Tester& tester) {
    out << "ID: " << tester.getID() << "\n"
        << "Full Name: " << tester.getFullName() << "\n"
        << "Address: " << tester.getAddress() << "\n"
        << "Phone Number: " << tester.getPhoneNumber() << "\n"
        << "Email: " << tester.getEmail() << "\n"
        << "Age: " << tester.getAge() << "\n"
        << "Base Income: " << tester.getBaseIncome() << "\n"
        << "Error Found: " << tester.getErrCount() << "\n";
    return out;
}

vector<Employee*>   Company::get_employees() { return this->employees; }
void                Company::set_employees(vector<Employee*> employees) { this->employees = employees; }

void                Company::add(Employee* employee) { employees.push_back(employee); }
void Company::print() {
    for (auto& i : employees) {
        cout << i;
    }
}
void Company::belowAverage() {
    int Total = 0;
    for (auto& i : employees) {
        Total += i->TotalSalary();
    }
    Total /= employees.size();
    for (auto& i : employees) {
        if (i->TotalSalary() < Total) {
            cout << i;
        }
    }
}

int main() {    

    return 0;
}