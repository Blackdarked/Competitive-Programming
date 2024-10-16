#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;
#define nl '\n'

class Player {
private:
    string playerName, playerPosition;
    int playerAge;
    double playerWeight, playerHeight;
public:
    Player(string Name = "", string Position = "", int Age = 0, double Height = 0.0, double Weight = 0.0)
        : playerName(Name), playerPosition(Position), playerAge(Age), playerWeight(Weight), playerHeight(Height)
    {}
    void input() {
        cout << "Enter player's name: ";        cin >> playerName;
        cout << "Enter player's age: ";         cin >> playerAge;
        cout << "Enter player's height: ";      cin >> playerHeight;
        cout << "Enter player's weight: ";      cin >> playerWeight;
        cout << "Enter player's position: ";    cin >> playerPosition;
    }
    void output() const {
        cout << "Player's name: " << playerName << nl
            << "Player's age: " << playerAge << nl
            << "Player's height: " << playerHeight << nl
            << "Player's weight: " << playerWeight << nl
            << "Player's position: " << playerPosition << nl;
    }
    double getHeight() const { return this->playerHeight; }
    friend istream& operator>>(istream& is, Player& p) {
        p.input();
        return is;
    }
    friend ostream& operator<<(ostream& os, const Player& p) {
        p.output();
        return os;
    }
};

class Club {
protected:
    string clubName, foundedDate, coachName;
    vector<Player> players;
    int point, goalDifference;
public:
    Club(string Name = "", string Date = "", string Coach = "")
        : clubName(Name), foundedDate(Date), coachName(Coach), point(0), goalDifference(0) {}
    virtual void input() {
        cout << "Enter club name: ";    cin >> clubName;
        cout << "Enter founded date: "; cin >> foundedDate;
        cout << "Enter coach name: ";   cin >> coachName;
        Player p;
        for (int i = 0; i < 11; i++) {
            cout << "Enter " << (i + 1) << " player: ";
            cin >> p;
            players.push_back(p);
        }
    }
    virtual void output() const {}
    void addMatch(int T1, int T2) {
        point += (T1 > T2) * 3 + (T1 == T2) * 1;
        goalDifference += (T1 - T2);
    }
    string getClubName() const { return this->clubName; }
    int getPoint() const { return this->point; }
    int getGoalDifference() const { return this->goalDifference; }
    vector<Player> getPlayers() const {
        return this->players;
    }
};

bool ClubComp(Club* C1, Club* C2) {
    if (C1->getPoint() == C2->getPoint()) return C1->getGoalDifference() > C2->getGoalDifference();
    return C1->getPoint() > C2->getPoint();
}

class Superior : public Club {
private:
    int titleCount;
    string bestTitle;
public:
    Superior(string Name = "", string Date = "", string Coach = "", int Title = 0, string BestTitle = "")
        : Club(Name, Date, Coach), titleCount(Title), bestTitle(BestTitle) {}
    virtual void input() override {
        Club::input();
        cout << "Enter title count: ";  cin >> titleCount;
        cout << "Best title: ";         cin >> bestTitle;
    }
    virtual void output() const override {
        Club::output();
        cout << "Title count: " << titleCount << nl
            << "Best title: " << bestTitle << nl;
    }
    int getTitleCount() const { return this->titleCount; }
    string getBestTitle() const { return this->bestTitle; }
};

class Inferior : public Club {
public:
    Inferior(string Name = "", string Date = "", string Coach = "")
        : Club(Name, Date, Coach) {}
};

class League {
private:
    map<string, Club*> clubs;
public:
    void input() {
        int numClubs;
        cout << "Enter the number of clubs: "; cin >> numClubs;
        for (int i = 0; i < numClubs; i++) {
            int choice; cout << "Enter club type (1 - Superior | 2 - Inferior): "; cin >> choice;
            Club* club;
            switch (choice) {
            case 1:
                club = new Superior;
                break;
            case 2:
                club = new Inferior;
                break;
            default:
                throw invalid_argument("Option non-available");
                break;
            }
            club->input();
            clubs.insert({ club->getClubName(), club });
            cout << nl;
        }
    }

    void output() const {
        cout << "List of clubs: " << nl;
        for (const auto& c : clubs) {
            c.second->output();
            cout << nl;
        }
    }

    double calculateAverageHeight() const {
        double totalHeight = 0;
        int totalPlayers = 0;
        for (const auto& c : clubs) {
            for (const auto& p : c.second->getPlayers()) {
                totalHeight += p.getHeight();
                ++totalHeight;
            }
        }
        return (totalPlayers > 0) * (totalHeight / totalPlayers);
    }

    void CreateTournament() {
        int rounds;
        cout << "Enter the number of rounds: "; cin >> rounds;
        string t1, t2; int s1, s2;
        for (int i = 0; i < rounds; i++) {
            cout << "Round " << (i + 1) << ": ";
            for (int j = 0; j < (int)clubs.size() >> 1; j++) {
                cout << "Match " << (j + 1) << ": " << nl;
                cout << "Enter the home team: "; cin >> t1;
                cout << "Enter the away team: "; cin >> t2;
                cout << "Enter the home score: "; cin >> s1;
                cout << "Enter the away score: "; cin >> s2;
                clubs[t1]->addMatch(s1, s2);
                clubs[t2]->addMatch(s2, s1);
            }
            cout << nl;
        }
    }

    void Champion() {
        vector<Club*> sortClubs;
        for (const auto& c : clubs) sortClubs.push_back(c.second);
        sort(sortClubs.begin(), sortClubs.end(), ClubComp);
        cout << "The champion is: " << sortClubs.front()->getClubName();
    }
};
