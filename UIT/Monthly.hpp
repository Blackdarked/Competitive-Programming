#include<iostream>
#include<string>
#include"Employee2.hpp"

class Monthly : protected Employee {
private:
    double salary;

public:
    Monthly(std::string FullName, std::string Address, std::string PhoneNumber);
    ~Monthly();

    double getSalary();

    void setSalary(double Salary);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double Monthpayment();

    friend std::istream& operator>>(std::istream& is, Monthly& monthly);
    friend std::ostream& operator>>(std::ostream& os, const Monthly& monthly);
};
