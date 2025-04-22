#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void setStudent(string n, int r) { name = n; roll = r; }
    void showStudent() { cout << "Name: " << name << ", Roll: " << roll << endl; }
};

class Marks : virtual public Student {
protected:
    int m1, m2, m3;
public:
    void setMarks(int a, int b, int c) { m1 = a; m2 = b; m3 = c; }
    int totalMarks() { return m1 + m2 + m3; }
    void showMarks() {
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Academic: " << totalMarks() << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportMark;
public:
    void setSportMark(int s) { sportMark = s; }
    void showSport() { cout << "Sports Mark: " << sportMark << endl; }
};

class Result : public Marks, public Sports {
public:
    void showResult() {
        int total = totalMarks() + sportMark;
        float avg = total / 4.0;
        showStudent();
        showMarks();
        showSport();
        cout << "Overall Total: " << total << ", Average: " << avg << endl;
    }
};

int main() {
    Result r;
    r.setStudent("Tushar", 104);
    r.setMarks(80, 85, 90);
    r.setSportMark(70);
    r.showResult();
    return 0;
}
