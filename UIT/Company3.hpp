#pragma once
#ifndef COMPANY_HPP
#define COMPANY_HPP

#include<vector>
#include"Employee2.hpp"
#include"Commission.hpp"
#include"Monthly.hpp"
#include"Hourly.hpp"
#include"Record.hpp"
#include"Product.hpp"

class Company : protected Employee, protected Record, public Commission, public Monthly, public Hourly, public Product {
    std::vector<Employee*> employee;
    std::vector<Record> record;
public:
    Company();
    ~Company();
    double Totalpayment();
};

#endif