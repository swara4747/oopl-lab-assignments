#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// integer versions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

// Point versions (same names)
Point add(Point p, Point q) { return Point(p.x + q.x, p.y + q.y); }
Point sub(Point p, Point q) { return Point(p.x - q.x, p.y - q.y); }
Point mul(Point p, Point q) { return Point(p.x * q.x, p.y * q.y); }

int main() {
    int a, b, x1, y1, x2, y2;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter x and y of point 1: ";
    cin >> x1 >> y1;
    cout << "Enter x and y of point 2: ";
    cin >> x2 >> y2;

    Point p1(x1, y1), p2(x2, y2);

    cout << "\nInteger results\n";
    cout << "Add: " << add(a, b) << endl;
    cout << "Sub: " << sub(a, b) << endl;
    cout << "Mul: " << mul(a, b) << endl;

    cout << "\nPoint results\n";
    cout << "Add: "; add(p1, p2).display();
    cout << "Sub: "; sub(p1, p2).display();
    cout << "Mul: "; mul(p1, p2).display();

    return 0;
}
