#include <iostream>
using namespace std;

class Circle {
public:
    float r;

    Circle() {
        r = 0;
        cout << "Circle default constructor\n";
    }
    Circle(float x) {
        r = x;
        cout << "Circle parametrized constructor\n";
    }
    Circle(const Circle &c) {
        r = c.r;
        cout << "Circle copy constructor\n";
    }
    ~Circle() {
        cout << "Circle destructor\n";
    }
    float area()      { return 3.14 * r * r; }
    float perimeter() { return 2 * 3.14 * r; }
};

class Rectangle {
public:
    float l, b;

    Rectangle() {
        l = 0;
        b = 0;
        cout << "Rectangle default constructor\n";
    }
    Rectangle(float x, float y) {
        l = x;
        b = y;
        cout << "Rectangle parametrized constructor\n";
    }
    Rectangle(const Rectangle &R) {
        l = R.l;
        b = R.b;
        cout << "Rectangle copy constructor\n";
    }
    ~Rectangle() {
        cout << "Rectangle destructor\n";
    }
    float area()      { return l * b; }
    float perimeter() { return 2 * (l + b); }
};

int main() {
    float radius, len, bre;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter length and breadth: ";
    cin >> len >> bre;

    Circle c1;              // default
    Circle c2(radius);      // parametrized
    Circle c3(c2);          // copy

    cout << "Circle c2: area = " << c2.area()
         << ", perimeter = " << c2.perimeter() << endl;
    cout << "Circle c3: area = " << c3.area()
         << ", perimeter = " << c3.perimeter() << endl;

    Rectangle r1;           // default
    Rectangle r2(len, bre); // parametrized
    Rectangle r3(r2);       // copy

    cout << "Rectangle r2: area = " << r2.area()
         << ", perimeter = " << r2.perimeter() << endl;
    cout << "Rectangle r3: area = " << r3.area()
         << ", perimeter = " << r3.perimeter() << endl;

    return 0;
}
