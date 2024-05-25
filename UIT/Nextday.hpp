#ifndef _DATE_H
#define _DATE_H

class Date {
private:
    int day, month, year;
public:
    Date(void);
    Date(std::string Date);
    ~Date(void);

    int getDay(void);
    int getMonth(void);
    int getYear(void);

    bool isLeapYear(Date date);
    bool convertStringtoDate(std::string Date);
    void returnNextDay(Date date);
};

class InputFailException : public std::exception {
    public: virtual const char* what() const throw {return "Invalid Input";}
}

std::istream& operator>>(std::istream& in, Date& date);
std::ostream& operator<<(std::ostream& out, Date& date);

#endif