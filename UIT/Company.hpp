#ifndef COMPANY_HPP
#define COMPANY_HPP

class Employee {
private:
    std::string fullname;
    std::string dob;
    int salary;

public:
    Employee(std::string Fullname, std::string DOB, int Salary);
    ~Employee();

    virtual std::string getFullName(void);
    virtual std::string getDOB(void);
    virtual int         getSalary(void);

    void        setFullName(std::string FullName);
    void        setDOB(std::string DOB);
    void        setSalary(int Salary);

    virtual int Salary();

    friend std::istream& operator>>(std::istream& in, Employee& employee);
    friend std::ostream& operator<<(std::ostream& out, Employee& employee);    
};


class Office : public Employee {
private:
    int daysofwork;

public:
    int getDaysOfWork(void);
    void setDaysOfWork(int DaysOfWork);

    int Salary();
};

class Production : public Employee {
private:
    int basesalary;
    int productcount;
    
public:
    int getBaseSalary(void);
    int getProductCount(void);
    void setBaseSalary(int BaseSalary);
    void setProductCount(int ProductCount);

    int Salary();
};
#endif