#pragma once
#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include<string>
#include<vector>

class I_Printable {
    friend std::istream& operator>>(std::istream& is, I_Printable& obj);
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
    virtual void read(std::istream& is);
    virtual void print(std::ostream& os) const = 0;
};

class Employee : public I_Printable {
public:
    Employee();
    Employee(std::string FullName, std::string DOB, double baseincome, double salary);
    virtual ~Employee() = default;
    virtual void read(std::istream& is) override;
    virtual void print(std::ostream& os) const override;
    virtual void TotalSalary();

protected:
    std::string fullname;
    std::string dob;
    double baseincome = 0;
    double salary = 0;
};

class Management : protected Employee {
public:
    Management();
    Management(std::string FullName, std::string DOB, double baseincome, double salary);
    virtual ~Management() = default;
    virtual void read(std::istream& is) override;
    virtual void print(std::ostream& os) const override;
    virtual void TotalSalary() override;

private:
    double positionrate;
    double extra;
};

class Production : protected Employee {
public:
    Production();
    Production(std::string FullName, std::string DOB, double baseincome, double salary);
    virtual ~Production() = default;
    virtual void read(std::istream& is) override;
    virtual void print(std::ostream& os) const override;
    virtual void TotalSalary() override;

private:
    int product;
};


class Office : protected Employee {
public:
    Office();
    Office(std::string FullName, std::string DOB, double baseincome, double salary);
    virtual ~Office() = default;
    virtual void read(std::istream& is) override;
    virtual void print(std::ostream& os) const override;
    virtual void TotalSalary() override;

private:
    int daysofwork;
    int extra;
};

class Company : protected Employee {
public:
    std::vector<Employee*> employee;
    void CalculateSalary();
    void PrintEmployee();
    void CompanySalary();
    void FindEmployee();
};

#endif // !Employee_HPP
