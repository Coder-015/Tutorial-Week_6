#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void setStudent(string n, int r) { name = n; roll = r; }
};

class SportsPlayer {
protected:
    string sport;
    int rank;
public:
    void setSport(string s, int r) { sport = s; rank = r; }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
        cout << "Sport: " << sport << ", Rank: " << rank << endl;
    }
};

int main() {
    SportStudent ss;
    ss.setStudent("Tushar", 101);
    ss.setSport("Football", 3);
    ss.display();
    return 0;
}
