#include<iostream>
#include"Nextday.hpp"

using namespace std;

Date::Date(void) {
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(string Date) { return this->convertStringtoDate(Date); }

Date::~Date(void);

int Date::getDay(void) { return this->day; }
int Date::getMonth(void) { return this->month; }
int Date::getYear(void) { return this->year; }
void Date::setDay(int Day) { this->day = Day; }
void Date::setMonth(int Month) { this->month = Month; }
void Date::setYear(int Year) { this->year = Year; }


bool Date::convertStringtoDate(std::string Date) {
    size_t pos = Date.find_first_of("/");
    size_t pos2 = Date.find_last_of("/");
    if (pos != string::npos) {
        try {
            this->day = atoi(Date.substr(0, pos).c_str());
            this->month = atoi(Date.substr(pos + 1, pos2).c_str());
            this->year = atoi(Date.substr(pos2 + 1, Date.size()).c_str());
        }
        catch (...) { return false; }
        return (this->day == 0 or this->month == 0 or this->year == 0) ? false : true;
    }
    return false;
}

bool Date::isLeapYear(Date date) { return ((this->year % 4 == 0 and this->year % 100 != 0) or (this->year % 400 == 0)); }


void Date::returnNextDay(Date date) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (this->month >= 1 and this->month <= 12) {
        if (this->day >= 1 and this->day <= daysInMonth[this->month]) {
            if (this->month == 2 and isLeapYear(this->year)) { daysInMonth[1] = 29; }
            else { this->day += daysInMonth[this->month]; }
        }
        else { throw InputFailException(); }
    }
    else { throw InputFailException(); }

    if (this->day < daysInMonth[this->month]) { this->day += 1; }
    else {
        this->day = 1;
        if (this->month < 12) { this->month += 1; }
        else {
            this->month = 1;
            this->year += 1;
        }
    }
    cout << this->day << '/' << this->month << '/' << this->year;
}

istream& operator>>(istream& in, Date& date) {
    string input;
    in >> input;

    if (date.convertStringtoDate(input) == false) { throw InputFailException(); }
    return in;
}

ostream& operator<<(ostream& out, Date& date) {
    out << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();
    return out;
}

void input(void) {
    Date d;

    cout << "Write the date in (dd/mm/yyyy) format: \n";
    try { cin >> d; }
    catch (exception& e) {
        clear_screen();
        cout << e.what();
        pause();
    }
    Date::returnNextDay(d);
    pause();
}


int main() {
    input();
    return 0;
}