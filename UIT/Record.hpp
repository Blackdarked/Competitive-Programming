#include<iostream>
#include<string>
#include<vector>
#include"Product.hpp"

class Record : protected Product {
private:
    std::string id;
    std::string date;
    std::vector<Product> product;

public:
    Record(std::string ID, std::string Date, std::vector<Product> Product);
    ~Record();

    std::string getID();
    std::string getDate();
    std::vector getProduct();

    void setID(std::string ID);
    void setDate(std::string Date);
    void setProduct(std::vector<Product> Product);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double Recpayment();

    friend std::istream& operator>>(std::istream& is, Record& record);
    friend std::ostream& operator>>(std::ostream& os, const Record& record);
};


