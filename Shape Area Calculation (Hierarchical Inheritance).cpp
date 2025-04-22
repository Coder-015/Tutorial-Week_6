#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual float area() = 0;
};

class Rectangle : public Shape {
    float l, b;
public:
    void getData() { l = 5; b = 3; }
    float area() { return l * b; }
};

class Circle : public Shape {
    float r;
public:
    void getData() { r = 4; }
    float area() { return 3.14 * r * r; }
};

int main() {
    Rectangle rect;
    Circle circ;
    rect.getData();
    circ.getData();
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Circle Area: " << circ.area() << endl;
    return 0;
}
