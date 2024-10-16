#include<iostream>
#include<string>
#include<vector>
#include"ProjectManager.hpp"

using namespace std;

User::User(string ID, string Name, string Pos) : id{ ID }, name{ Name }, pos{ Pos } {}
User::~User() {}

string User::getID() { return this->id; }
string User::getName() { return this->name; }
string User::getPos() { return this->pos; }
void   User::setID(string ID) { this->id = ID; }
void   User::setName(string Name) { this->name = Name; }
void   User::setPos(string Pos) { this->pos = Pos; }

Company::Company() {}
Company::~Company() {}

Work::Work() {}
Work::~Work() {}

string Work::getID() { return this->id; }
string Work::getName() { return this->name; }
string Work::getDes() { return this->des; }
string Work::getEndDate() { return this->enddate; }

void Work::setID(string ID) { this->id = ID; }
void Work::setName(string Name) { this->name = Name; }
void Work::setDes(string Des) { this->des = Des; }
void Work::setEndDate(string EndDate) { this->enddate = EndDate; }
void Work::setStatus(bool Status) { this->status = Status; }
void Work::setCreator(User Creator) { this->creator = Creator; }
void Work::setWorker(vector<User*> Worker) {
    for (int i = 0; i < Worker.size(); i++) {
        Worker.push_back(new User());
    }
}

Project::Project(string ID = "", string Name = "", string Des = "", string Info = "") : id{ ID }, name{ Name }, des{ Des }, info{ Info } {}
Project::~Project() {  }

string Project::getID() { return this->id; }
string Project::getName() { return this->name; }
string Project::getDes() { return this->des; }
string Project::getInfo() { return this->info; }

ListViewer::ListViewer() {
    cout << "ListViewer\n" << getID();
    for (int i = 0; i < Project.id; i++) {
        cout << project[i];
    }
}

ListViewer::~ListViewer() {}

GanttChartViewer::GanttChartViewer() {
    cout << "ListViewer\n" << getID();
    for (int i = 0; i < Project.id; i++) {
        cout << project[i];
    }
}

GanttChartViewer::~GanttChartViewer() {}

void PlanViewer::view(string choice) {
    if (choice == "ListViewer") ListViewer();
    else GanttChartViewer();
}

string Exporter::getUser() { return this->user; }
void Exporter::setUser(string User) { this->user = User; }

void AExporter::Areset() {
    string e = getUser() + ".txt";
}

void BExporter::Breset() {
    string e = getUser() + ".txt";
}

int main() {
    int n; cin >> n;
    ProjectList plist;
    cout << "Nhap so luong du an: ";
    for (int i = 0; i < n; i++) {
        plist.project.push_back(new Project());
    }
}