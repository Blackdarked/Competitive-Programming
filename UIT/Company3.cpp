#include<iostream>
#include"Company3.hpp"
#include"Employee2.hpp"
#include"Commission.hpp"
#include"Monthly.hpp"
#include"Hourly.hpp"
#include"Record.hpp"
#include"Product.hpp"

Company::Company() {}
Company::~Company() {}

double Company::Totalpayment() {
    return (Compayment() + Monthpayment() + Hourpayment() + Recpayment());
}