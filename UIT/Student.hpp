#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>

class Student {
private:
    std::string FullName;
    int studentID;
    int LiteratureScore;
    int MathematicsScore;
    int PhysicsScore;
    int ChemistryScore;
    
public:
    Student(void);
    Student(std::string FullName, int studentID, int LiteratureScore, int MathematicsScore, int PhysicsScore, int ChemistryScore);
    ~Student(void);

    std::string getFullname();
    void getStudentID();
    void getLiteratureScore();
    void getMathematicsScore();
    void getPhysicsScore();
    void getChemistryScore();

};

std::istream& operator>>(std::istream& in, Student& student);
std::ostream& operator<<(std::ostream& out, Student& student);

#endif