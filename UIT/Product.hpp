#include<iostream>
#include<string>

class Product {
private:
    std::string name;
    int quantity;
    double price;

public:
    Product(std::string Name, int Quantity, double Price);
    ~Product();

    std::string getName();
    int getQuantity();
    double getPrice();

    void setName(std::string Name);
    void setQuantity(int Quantity);
    void setPrice(double Price);

    virtual void read(std::istream&);
    virtual void write(std::ostream&) const;
    virtual double payment();

    friend std::istream& operator>>(std::istream& is, Product& product);
    friend std::ostream& operator>>(std::ostream& os, const Product& product);
};

