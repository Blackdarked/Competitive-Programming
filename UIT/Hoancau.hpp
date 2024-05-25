#ifndef HOANCAU_HPP
#define HOANCAU_HPP

#include<iostream>
#include<string>
#include<vector>

class Employee {
protected:
    std::string id;
    std::string fullname;
    std::string address;
    std::string phonenumber;
    std::string email;
    int         age;
    int         baseincome;

public:
    Employee();
    Employee(std::string ID, std::string FullName, std::string Address, std::string PhoneNumber, std::string Email, int Age, int BaseIncome);
    ~Employee();

    virtual std::string getID();
    virtual std::string getFullName();
    virtual std::string getAddress();
    virtual std::string getPhoneNumber();
    virtual std::string getEmail();
    virtual int         getAge();
    virtual int         getBaseIncome();

    virtual void        setID(std::string ID);
    virtual void        setFullName(std::string FullName);
    virtual void        setAddress(std::string Address);
    virtual void        setPhoneNumber(std::string PhoneNumber);
    virtual void        setEmail(std::string Email);
    virtual void        setAge(int Age);
    virtual void        setBaseIncome(int BaseIncome);

    virtual int         TotalSalary() = 0;
}

class Developer : public Employee {
private:
    int ottime;
    int devsalary;

public:
    Developer();
    ~Developer();

    int getOTTime();
    int getDevSalary();
    void setOTTime(int OTTime);
    void setDevSalary(int DevSalary);

    int TotalSalary() override;

    friend std::istream& operator>>(std::istream& in, Developer& developer);
    friend std::ostream& operator<<(std::ostream& out, const Developer& developer);
}


class Tester : public Employee {
private:
    int errcount;
    int testsalary;
public:
    Tester();
    ~Tester();

    int getErrCount();
    int getTestSalary();
    void setErrCount(int ErrCount);
    void setTestSalary(int TestSalary);

    int TotalSalary() override;

    friend std::istream& operator>>(std::istream& in, Tester& tester);
    friend std::ostream& operator<<(std::ostream& out, const Tester& tester);
}

class Company {
private:
    std::vector<Employee*> employees;

public:
    std::vector<Employee*> get_employees();
    void set_employees(std::vector<Employee*> employees);

    void add(Employee* employee);
    void print();
    void belowAverage();
}

#endif