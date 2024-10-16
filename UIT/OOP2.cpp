#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Product {
protected:
    string id, title;
    int price;
public:
    Product(string ID = "", string Title = "", int Price = 0)
        : id(ID), title(Title), price(Price) {}
    virtual void input() = 0;
    virtual void output() const = 0;
    virtual int getPrice() const = 0;
    virtual string getType() const = 0;
};

class Picture : public Product {
private:
    int length, width;
    string artist;
public:
    Picture(string ID = "", string Title = "", int Price = 0, int Length = 0, int Width = 0, string Artist = "")
        : Product(ID, Title, Price), length(Length), width(Width) {}

    void input() {
        cout << "Enter Picture ID: ";           cin >> id;
        cout << "\nEnter Picture Title: ";      cin >> title;
        cout << "\nEnter Picture Price: ";      cin >> price;
        cout << "\nEnter Picture Length: ";     cin >> length;
        cout << "\nEnter Picture Width: ";      cin >> width;
        cout << "\nEnter Picture Artist: ";     cin >> artist;
    }

    void output() const {
        cout << "Picture ID: " << id
            << "\nPicture Title: " << title
            << "\nPicture Price: " << price
            << "\nPicture Length: " << length
            << "\nPicture Width: " << width
            << "\nPicture Artist: " << artist;
    }

    int getPrice() const { return this->price; }
    string getType() const { return "Picture"; }
};


class Music : public Product {
private:
    string label, singer;
public:
    Music(string ID = "", string Title = "", int Price = 0, string Label = "", string Singer = "")
        : Product(ID, Title, Price), label(Label), singer(Singer) {}

    void input() {
        cout << "Enter Music ID: ";         cin >> id;
        cout << "\nEnter Music Title: ";    cin >> title;
        cout << "\nEnter Music Price: ";    cin >> price;
        cout << "\nEnter Music Label: ";    cin >> label;
        cout << "\nEnter Music Singer: ";   cin >> singer;
    }

    void output() const {
        cout << "Music ID: " << id
            << "\nMusic Title: " << title
            << "\nMusic Price: " << price
            << "\nMusic Label: " << label
            << "\nMusic Singer: " << singer;
    }

    int getPrice() const { return this->price; }
    string getType() const { return "Music"; }
};

class Customer {
private:
    string id, name, tel;
    int TotalSpend;
public:
    void input() {
        cout << "Enter Customer ID: ";          cin >> id;
        cout << "\nEnter Customer Name: ";      cin >> name;
        cout << "\nEnter Customer Tel: ";       cin >> tel;
    }

    void output() {
        cout << " Customer ID: " << id
            << "\nCustomer Name: " << name
            << "\nCustomer Tel: " << tel;
    }

    string getName() { return this->name; }
    int getTotalSpend() { return this->TotalSpend; }
};

class Record {
protected:
    string id, date;
    Customer customer;
    vector<Product*> list;
    int total;
public:
    void input() {
        cout << "Enter Record ID: ";          cin >> id;
        cout << "\nEnter Record Date: ";      cin >> date;
        cout << "\nEnter the number of products: "; int n; cin >> n;
        for (int i = 0; i < n; i++) {
            list[i]->input();
        }
    }

    void output() {
        cout << "  Record ID: " << id
            << "\n Record Date: " << date
            << "\n Record Product List: ";
        for (const auto& l : list) {
            l->getType();
        }
    }

    int getTotal() { return this->total; }
    vector<Product*> getProductList() { return this->list; }

    int CalculateTotal() {
        for (int i = 0; i < list.size(); i++) {
            total += list[i]->getPrice();
        }
    }
};


int main() {
    
    return 0;
}