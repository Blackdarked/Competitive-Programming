#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    std::string FullName, Category;
    int MathScore, LiteratureScore, AverageScore;
public:
    Student();
    ~Student();
    std::string getFullName(void);
    std::string getCategory(void);
    int getMathScore(void);
    int getLiteratureScore(void);
    int getAverageScore(void);
    void setFullName(std::string FullName);
    void setCategory(std::string Category);
    void setMathScore(int MathScore);
    void setLiteratureScore(int LiteratureScore);
    void setAverageScore(int AverageScore);

    Student average(Student student);
    Student category(Student student);
    Student print(Student student);
}

class InputFailException : public std::exception {
    public: virtual const char* what() const throw() { return "Invalid input"; }
};

std::istream& operator>>(std::istream& in, Student student);
std::ostream& operator<<(std::ostream& out, Student student);

#endif