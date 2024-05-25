#include<iostream>
#include<string>
#include"Employee2.hpp"

class Commission : protected Employee {
private:
    double profit;
    double rate;

public:
    Commission(std::string FullName, std::string Address, std::string PhoneNumber);
    ~Commission();

    double getProfit();
    double getRate();

    void setProfit(double Profit);
    void setRate(double Rate);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double Compayment();

    friend std::istream& operator>>(std::istream& is, Commission& commission);
    friend std::ostream& operator>>(std::ostream& os, const Commission& commission);
};

