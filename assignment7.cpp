#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> grades;
    vector<float>::iterator it;
    int n;
    float g, sum = 0, avg, minG, maxG;

    cout << "How many grades: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> g;
        grades.push_back(g);
    }

    // average
    for (it = grades.begin(); it != grades.end(); it++) {
        sum = sum + *it;
    }
    avg = sum / grades.size();

    // min and max
    minG = grades[0];
    maxG = grades[0];
    for (it = grades.begin(); it != grades.end(); it++) {
        if (*it < minG) minG = *it;
        if (*it > maxG) maxG = *it;
    }

    cout << "Average = " << avg << endl;
    cout << "Minimum = " << minG << endl;
    cout << "Maximum = " << maxG << endl;

    return 0;
}
