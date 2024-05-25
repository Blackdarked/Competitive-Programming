#include <iostream>
#include <cstdlib>
#include "cHocSinh.hpp"
using namespace std;

cHocSinh::cHocSinh() {}
cHocSinh::~cHocSinh() {}

std::string cHocSinh::getID(void) { return this->ID; }
std::string cHocSinh::getFullName(void) { return this->FullName; }
std::string cHocSinh::getGender(void) { return this->gender; }
int  cHocSinh::getGPA(void) { return this->GPA; }
int  cHocSinh::getBirthYear(void) { return this->BirthYear; }
void cHocSinh::setBirthYear(int BirthYear) { this->BirthYear = BirthYear; }
void cHocSinh::setGPA(int GPA) { this->GPA = GPA; }
void cHocSinh::setID(std::string ID) { this->ID = ID; }
void cHocSinh::setFullName(std::string FullName) { this->FullName = FullName; }
void cHocSinh::setGender(std::string gender) { this->gender = gender; }

void input(cHocSinh& HS1, cHocSinh& HS2) {
    string FullName, Gender, ID;
    int BirthYear, GPA;

    cout << "Nhap thong tin cho HS thu nhat: ";
    cout << "\nNhap ho ten: ";
    cin >> FullName; HS1.setFullName(FullName);
    cout << "\nNhap gioi tinh: ";
    cin >> Gender; HS1.setGender(Gender);
    cout << "\nNhap MSSV: ";
    cin >> ID; HS1.setID(ID);
    cout << "\nNhap nam sinh: ";
    cin >> BirthYear; HS1.setBirthYear(BirthYear);
    cotu << "\nNhap diem trung binh: ";
    cin >> GPA; HS1.setGPA(GPA);

    cout << "\nNhap thong tin cho HS thu hai: ";
    cout << "\nNhap ho ten: ";
    cin >> FullName; HS2.setFullName(FullName);
    cout << "\nNhap gioi tinh: ";
    cin >> Gender; HS2.setGender(Gender);
    cout << "\nNhap MSSV: ";
    cin >> ID; HS2.setID(ID);
    cout << "\nNhap nam sinh: ";
    cin >> BirthYear; HS2.setBirthYear(BirthYear);
    cotu << "\nNhap diem trung binh: ";
    cin >> GPA; HS2.setGPA(GPA);
}

void cmpGPA(const cHocSinh& HS1, const cHocSinh& HS2) const {
    if (HS1.getGPA() < HS2.getGPA()) cout << "Hoc Sinh 1 co diem trung binh cao hon";
    else cout << "Hoc Sinh 2 co diem trung binh cao hon";
}

void cmpBirthYear(const cHocSinh& HS1, const cHocSinh& HS2) const {
    if (HS1.getBirthYear() > HS2.getBirthYear()) "Hoc Sinh 1 co nho tuoi hon";
    else cout << "Hoc Sinh 2 nho tuoi hon";
}

int main() {
    cHocSinh HS1, HS2;
    input(HS1, HS2);
    cmpGPA(HS1, HS2);
    cmpBirthYear(HS1, HS2);
    return 0;
}