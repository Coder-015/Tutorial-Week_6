#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
    void displayName() { cout << "Name: " << name << endl; }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) { subject = s; }
    void displaySubject() { cout << "Subject: " << subject << endl; }
};

class Professor : public Teacher {
    string dept;
public:
    void setDept(string d) { dept = d; }
    void displayDept() { cout << "Department: " << dept << endl; }
};

int main() {
    Professor p;
    p.setName("Dr. Singh");
    p.setSubject("OOP");
    p.setDept("CSE");
    p.displayName();
    p.displaySubject();
    p.displayDept();
    return 0;
}
