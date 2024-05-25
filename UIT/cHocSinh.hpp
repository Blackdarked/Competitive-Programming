#ifndef HOCSINH_H
#define HOCSINH_H

class cHocSinh {
private:
    int BirthYear, GPA;
    std::string ID, FullName, gender;

public:
    cHocSinh();
    ~cHocSinh();

    int getBirthYear(void);
    int getGPA(void);
    std::string getID(void);
    std::string getFullName(void);
    std::string getGender(void);
    void setBirthYear(int BirthYear);
    void setGPA(int GPA);
    void setID(std::string ID);
    void setFullName(std::string FullName);
    void setGender(std::string gender);
};
#endif