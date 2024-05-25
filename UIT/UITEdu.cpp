#include<iostream>
#include<string>
#include"UITEdu.hpp"

using namespace std;

UITEdu::UITEdu(string ID = "", string FullName = "", string Address = "", int TotalCredit = 0, double GPA = 0.0) {
    this->id = ID;
    this->fullname = FullName;
    this->address = Address;
    this->totalcredit = TotalCredit;
    this->gpa = GPA;
}

UITEdu::~UITEdu() {}

string  UITEdu::getID() { return this->id; }
string  UITEdu::getFullName() { return this->fullname; }
string  UITEdu::getAddress() { return this->address; }
int     UITEdu::getTotalCredit() { return this->totalcredit; }
double  UITEdu::getGPA() { return this->gpa; }

void    UITEdu::setID(string ID) { this->id = ID; }
void    UITEdu::setFullName(string FullName) { this->fullname = FullName; }
void    UITEdu::setAddress(string Address) { this->address = Address; }
void    UITEdu::setTotalCredit(int TotalCredit) { this->totalcredit = TotalCredit; }
void    UITEdu::setGPA(double GPA) { this->gpa = GPA; }

UITUniversity::UITUniversity() {}
UITUniversity::~UITUniversity() {}

string  UITUniversity::getThesisName() { return this->thesisname; }
double  UITUniversity::getThesisScore() { return this->thesisscore; }
void    UITUniversity::setThesisName(string ThesisName) { this->thesisname = ThesisName; }
void    UITUniversity::setThesisScore(double ThesisScore) { this->thesisscore = ThesisScore; }
bool    UITUniversity::graduation() {
    if (getTotalCredit() >= 170 and getGPA() >= 5 and getThesisScore() >= 5) cout << "Eligible to Graduate.\n";
    else cout << "Ineligible to Graduate.\n";

    return 0;
}

istream& operator>>(istream& in, UITUniversity& UniStudent) {
    in >> UniStudent.id >> UniStudent.fullname >> UniStudent.address >> UniStudent.totalcredit >> UniStudent.gpa >> UniStudent.thesisname >> UniStudent.thesisscore;
    return in;  
}
ostream& operator<<(ostream& out, const UITUniversity& UniStudent) {
    out << "ID: " << UniStudent.id << "\n"
        << "FullName: " << UniStudent.fullname << "\n"
        << "Address: " << UniStudent.address << "\n"
        << "Total Credit: " << UniStudent.totalcredit << "\n"
        << "GPA: " << UniStudent.gpa << "\n"
        << "Thesis Name: " << UniStudent.thesisname << "\n"
        << "Thesis Score: " << UniStudent.thesisscore << "\n";
    return out;
}

UITJuniorCollege::UITJuniorCollege() {}
UITJuniorCollege::~UITJuniorCollege() {}

double  UITJuniorCollege::getExamScore() { return this->examscore; }
void    UITJuniorCollege::setExamScore(double ExamScore) { this->examscore = ExamScore; }
bool    UITJuniorCollege::graduation() {
    if (getTotalCredit() >= 120 and getGPA() >= 5 and getExamScore() >= 5) cout << "Eligible to Graduate.\n";
    else cout << "Ineligible to Graduate.\n";

    return 0;
}

istream& operator>>(istream& in, UITJuniorCollege& ColStudent) {
    in >> ColStudent.id >> ColStudent.fullname >> ColStudent.address >> ColStudent.totalcredit >> ColStudent.gpa >> ColStudent.examscore;
    return in;
}
ostream& operator<<(ostream& out, const UITJuniorCollege& ColStudent) {
    out << "ID: " << ColStudent.id << "\n"
        << "FullName: " << ColStudent.fullname << "\n"
        << "Address: " << ColStudent.address << "\n"
        << "Total Credit: " << ColStudent.totalcredit << "\n"
        << "GPA: " << ColStudent.gpa << "\n"
        << "Exam Score: " << ColStudent.examscore << "\n";
    return out;
}

int main() {
    UITUniversity UniStudent; cin >> UniStudent;
    UITJuniorCollege ColStudent; cin >> ColStudent;

    UniStudent.graduation();
    ColStudent.graduation();

    cout << UniStudent;
    cout << ColStudent;
    return 0;
}