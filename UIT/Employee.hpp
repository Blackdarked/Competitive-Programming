#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee: {
private:
    std::string ID;
    std::string FullName;
    std::string Department;
    int Salary;
    int Bonus;
    int TotalSalaries;

public:
    Employee(void);
    Employee(std::string ID, std::string FullName, std::string Department, int Salary, int Bonus, int TotalSalaries);
    ~Employee(void);

    std::string getID(void);
    std::string getFullName(void);
    std::string getDepartment(void);
    int getSalary(void);
    int getBonus(void);

    void setID(std::string ID);
    void setFullName(std::string FullName);
    void setDepartment(std::string Department);
    void setSalary(int Salary);
    void setBonus(int Bonus);
};

class Company: public Employee {
private:
    std::string Name;
    vector<string> Employee;

public:
    int getTotalSalaries();
    int getLowestPaidEmployees();
    int countEmployees();
    int listEmployess();
};



std::istream& operator>>(std::istream& in, Employee employee);
std::ostream& operator<<(std::ostream& out, Employee employee);

#endif