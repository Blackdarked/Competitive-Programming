#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include"Candidate.hpp"
using namespace std;


double              Candidate::getMaths(void) const { return this->Maths; }
double              Candidate::getLiterature(void) const { return this->Literature; }
double              Candidate::getEnglish(void) const { return this->English; }
std::string         Candidate::getID(void) const { return this->ID; }
std::string         Candidate::getFullName(void) const { return this->fullName; }
std::string         Candidate::getDateOfBirth(void) const { return this->dateOfBirth; }

void                Candidate::setMaths(double Maths) { this->Maths = Maths; }
void                Candidate::setLiterature(double Literature) { this->Literature = Literature; }
void                Candidate::setEnglish(double English) { this->English = English; }
void                Candidate::setID(std::string ID) { this->ID = ID; }
void                Candidate::setFullName(std::string fullName) { this->fullName = fullName; }
void                Candidate::setDateOfBirth(std::string dateOfBirth) { this->dateOfBirth = dateOfBirth; }

TestCandidate::~TestCandidate() {
    if (this->vec.size() >= 0) {delete[] }
}

int                 TestCandidate::getNum(void) const { return this->num; }
vector<Candidate>   TestCandidate::getCandidate(void) const { return this->vec; }
void                TestCandidate::setNum(int num) const { this->num = num; }
void                TestCandidate::setCandidate(vector<Candidate> vec) const { this->vec = vec; }

void                TestCandidate::input(const int& n) {
    for (int i = 0; i < n; i++) {
        double Maths, Literature, English;
        string ID, fullName, DOB;
        cin >> Maths >> Literature >> English >> ID >> fullName >> DOB;
        this->vec[i].setMaths(Maths);
        this->vec[i].setLiterature(Literature);
        this->vec[i].setEnglish(English);
        this->vec[i].setID(ID);
        this->vec[i].setFullName(fullName);
        this->vec[i].setDateOfBirth(DOB);
    }
}
void                TestCandidate::isGreaterThan15(void) {
    for (int i = 0; i < this->vec.size(); i++) {
        if (this->vec[i].getMaths() + this->vec[i].getLiterature() + this->vec[i].getEnglish() >= 15) {
            cout    << this->vec[i].getID()
                    << this->vec[i].getFullName()
                    << this->vec[i].getEnglish();
        }
    }
}



int main() {

    return 0;
}