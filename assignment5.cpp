#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() = 0;
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class circle : public shape {
public:
    float radius;
    void draw() { cout << "Drawing Circle" << endl; }
    float area() { return 3.14 * radius * radius; }
    float perimeter() { return 2 * 3.14 * radius; }
};

class rectangle : public shape {
public:
    float edge1, edge2;
    void draw() { cout << "Drawing Rectangle" << endl; }
    float area() { return edge1 * edge2; }
    float perimeter() { return 2 * (edge1 + edge2); }
};

int main() {
    circle c;
    rectangle r;
    shape *s;
    int choice;

    cout << "1.Area of circle 2.Perimeter of circle\n";
    cout << "3.Area of rectangle 4.Perimeter of rectangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter radius: ";
        cin >> c.radius;
        s = &c;
        s->draw();
        cout << "Area = " << s->area() << endl;
        break;
    case 2:
        cout << "Enter radius: ";
        cin >> c.radius;
        s = &c;
        s->draw();
        cout << "Perimeter = " << s->perimeter() << endl;
        break;
    case 3:
        cout << "Enter length and breadth: ";
        cin >> r.edge1 >> r.edge2;
        s = &r;
        s->draw();
        cout << "Area = " << s->area() << endl;
        break;
    case 4:
        cout << "Enter length and breadth: ";
        cin >> r.edge1 >> r.edge2;
        s = &r;
        s->draw();
        cout << "Perimeter = " << s->perimeter() << endl;
        break;
    default:
        cout << "Invalid choice\n";
    }
    return 0;
}
