#pragma once
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include<iostream>
#include<string>

class Employee {
protected:
    std::string fullname;
    std::string address;
    std::string phonenumber;

public:
    Employee(std::string FullName, std::string Address, std::string PhoneNumber);
    ~Employee();

    virtual std::string getFullName();
    virtual std::string getAddress();
    virtual std::string getPhoneNumber();

    virtual void setFullname(std::string FullName);
    virtual void setAddress(std::string Address);
    virtual void setPhoneNumber(std::string PhoneNumber);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double payment() = 0.0;

    friend std::istream& operator>>(std::istream& is, Employee& Employee);
    friend std::ostream& operator>>(std::ostream& os, const Employee& Employee);

};
#endif