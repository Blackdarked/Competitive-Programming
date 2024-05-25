#ifndef CANDIDATE_H
#define CANDIDATE_H

class Candidate {
private:
    double Maths, Literature, English;
    std::string ID, fullName, dateOfBirth;

public:
    Candidate() : Maths{ 0.0 }, Literature{ 0.0 }, English{ 0.0 }, ID{ "" }, fullName{ "" }, dateOfBirth{ "" } {}
    Candidate(double Maths, double Literature, double English, std::string ID, std::string fullName, std::string dateOfBirth) :
        Maths{ Maths }, Literature{ Literature }, English{ English }, ID{ ID }, fullName{ fullName }, dateOfBirth{ DateOfBirth } {}
    ~Candidate() {}

    double getMaths(void);
    double getLiterature(void);
    double getEnglish(void);
    std::string getID(void);
    std::string getFullName(void);
    std::string getDateOfBirth(void);

    void setMaths(double Maths) const;
    void setLiterature(double Literature) const;
    void setEnglish(double English) const;
    void setID(std::string ID) const;
    void setFullName(std::string fullName) const;
    void setDateOfBirth(std::string dateOfBirth) const;
};

class TestCandidate : public Candidate {
private:
    int num;
    vector<Candidate> vec;

public:
    TestCandidate();
    ~TestCandidate();

    virtual int getNum(void) const;
    virtual vector<Candidate> getCandidate(void) const;
    virtual void setNum(int num);
    virtual void setCandidate(vector<Candidate> vec);

    virtual void input(const int& n);
    virtual void isGreaterThan15(void) const;
}


#endif 