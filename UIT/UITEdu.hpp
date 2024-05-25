#ifndef UITEDU_HPP
#define UITEDU_HPP

#include<string>

// This give me headache ngl: https://stackoverflow.com/questions/9814345/cant-overload-operator-as-member-function

class UITEdu {
protected:
    std::string id;
    std::string fullname;
    std::string address;
    int         totalcredit;
    double      gpa;

public:
    UITEdu(std::string ID, std::string FullName, std::string Address, int TotalCredit, double GPA);
    ~UITEdu();

    virtual std::string getID();
    virtual std::string getFullName();
    virtual std::string getAddress();
    virtual int         getTotalCredit();
    virtual double      getGPA();

    virtual void        setID(std::string ID);
    virtual void        setFullName(std::string FullName);
    virtual void        setAddress(std::string Address);
    virtual void        setTotalCredit(int TotalCredit);
    virtual void        setGPA(double GPA);
};


class UITUniversity : public UITEdu {
private:
    std::string thesisname;
    double thesisscore;

public:
    UITUniversity();
    ~UITUniversity();

    std::string         getThesisName();
    double              getThesisScore();

    void                setThesisName(std::string ThesisName);
    void                setThesisScore(double ThesisScore);

    bool                graduation();

    friend std::istream& operator>>(std::istream& in, UITUniversity& UniStudent);
    friend std::ostream& operator<<(std::ostream& out, const UITUniversity& UniStudent);
};


class UITJuniorCollege : private UITEdu {
private:
    double examscore;

public:
    UITJuniorCollege();
    ~UITJuniorCollege();
        
    double              getExamScore();
    void                setExamScore(double ExamScore);

    bool graduation();

    friend std::istream& operator>>(std::istream& in, UITJuniorCollege& ColStudent);
    friend std::ostream& operator<<(std::ostream& out, const UITJuniorCollege& ColStudent);
};
#endif