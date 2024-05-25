#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
#include "Student2.hpp"
using namespace std;

Student::Student() : FullName{ "" }, MathScore{ 0 }, LiteratureScore{ 0 }, AverageScore{ 0 };
Student::~Student() {}

string Student::getFullName(void) { return this->FullName; }
string Student::getCategory(void) { return this->Category; }
int Student::getMathScore(void) { return this->MathScore; }
int Student::getLiteratureScore(void) { return this->LiteratureScore; }
int Student::getAverageScore(void) { return this->AverageScore; }
void Student::setFullName(std::string FullName) { this->FullName = FullName; }
void Student::setMathScore(int MathScore) { this->MathScore = MathScore; }
void Student::setLiteratureScore(int LiteratureScore) { this->LiteratureScore = LiteratureScore; }
void Student::setAverageScore(int AverageScore) { this->AverageScore = AverageScore; }

Student Student::average(Student student) {
    this->AverageScore = (student.getMathScore() + student.getLiteratureScore()) / 2;

    return student;
}

Student Student::category(Student student) {
    if (student.getAverageScore() >= 0 and student.getAverageScore() <= 5.4) { this->Category = "Yeu"; }
    else if (student.getAverageScore() >= 5.5 and student.getAverageScore() <= 6.9) { this->Category = "TB"; }
    else if (student.getAverageScore() >= 7.0 and student.getAverageScore() <= 8.4) { this->Category = "Kha"; }
    else if (student.getAverageScore() >= 8.5 and student.getAverageScore() <= 10) { this->Category = "Gioi"; }
    else { throw InputFailException; }

    return student;
}

Student Student::print(Student student) {
    cout << student.getFullName() << ' ' << student.getMathScore() << ' ' << student.getMathScore();

    return student;
}


std::istream& operator>>(std::istream& in, Student student) {
    string input;
    in >> input;

    return in;
}
std::ostream& operator<<(std::ostream& out, Student student) {
    out << student.getFullName() << ' ' << student.average() << ' ' << student.category();

    return out;
}

int main() {

}