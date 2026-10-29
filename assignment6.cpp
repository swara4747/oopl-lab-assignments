#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;
};

int main() {
    vector<Student> students;
    Student s;

    // READ from file
    ifstream fin("input.txt");
    if (!fin) {
        cout << "Cannot open input file\n";
        return 1;
    }
    while (fin >> s.name >> s.roll >> s.marks) {
        students.push_back(s);
    }
    fin.close();

    // show on screen
    cout << "Students read from file:\n";
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].name << " "
             << students[i].roll << " "
             << students[i].marks << endl;
    }

    // WRITE to file
    ofstream fout("output.txt");
    for (int i = 0; i < students.size(); i++) {
        fout << students[i].name << " "
             << students[i].roll << " "
             << students[i].marks << endl;
    }
    fout.close();

    cout << "Data written to output.txt\n";
    return 0;
}
