#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class User {
public:
    User(string ID, string Name, string Pos);
    ~User();

    string getID();
    string getName();
    string getPos();
    void   setID(string ID);
    void   setName(string Name);
    void   setPos(string Pos);

private:
    string id;
    string name;
    string pos;
};

class Company : public User {
public:
    vector<User*> user;
};

class Work : public User {
public:
    Work();
    ~Work();

    string getID();
    string getName();
    string getDes();
    string getEndDate();
    bool getStatus;
    User getCreator();
    User getWorker();

    void setID(string ID);
    void setName(string Name);
    void setDes(string Des);
    void setEndDate(string EndDate);
    void setStatus(bool Status);
    void setCreator(User Created);
    void setWorker(vector<User*> Worker);

private:
    string id, name, des, enddate;
    bool status;
    User creator;
    vector<User*> worker;
};

class Project : public Work {
public:
    Project();
    ~Project();

    vector<Work*> relateWork;

    string getID();
    string getName();
    string getDes();
    string getInfo();

private:
    string id, name, des, info;
};


class ProjectList : public Project {
public:
    vector<Project*> project;
};


class ListViewer : public Project {
public:
    ListViewer();
    ~ListViewer();

private:

};


class GanttChartViewer : public Project {
public:
    GanttChartViewer();
    ~GanttChartViewer();

private:

};


class PlanViewer : public ListViewer, public GanttChartViewer {
public:
    PlanViewer();
    ~PlanViewer();

    void view(string choice);

private:

};

PlanViewer::PlanViewer()
{
}

PlanViewer::~PlanViewer()
{
}

class Exporter : public PlanViewer {
public:
    Exporter();
    ~Exporter();

    string getUser();
    void setUser(string User);

protected:
    string user;
};

Exporter::Exporter()
{
}

Exporter::~Exporter()
{
}


class AExporter : protected Exporter {
public:
    AExporter();
    ~AExporter();

    void Areset();

private:

};


class BExporter : protected Exporter {
public:
    BExporter();
    ~BExporter();

    void Breset();

};
