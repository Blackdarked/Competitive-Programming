#include<iostream>
#include<string>
#include"Employee2.hpp"

class Hourly : protected Employee {
private:
    double hrscounter;
    double salaryperhrs;

public:
    Hourly(std::string FullName, std::string Address, std::string PhoneNumber);
    ~Hourly();

    double getHrsCounter();
    double getSalaryPerHrs();

    void setHrsCounter(double HrsCounter);
    void setSalaryPerHrs(double SalaryPerHrs);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double Hourpayment();

    friend std::istream& operator>>(std::istream& is, Hourly& hourly);
    friend std::ostream& operator>>(std::ostream& os, const Hourly& hourly);
};

