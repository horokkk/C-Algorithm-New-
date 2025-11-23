#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, grade;
    double credit;
    double scoreSum = 0.0;
    double creditSum = 0.0;

    for (int i = 0; i < 20; i++) {
        cin >> name >> credit >> grade;

        if (grade == "P") continue;
        double score = 0.0;

        if (grade == "A+") score = 4.5;
        else if (grade == "A0") score = 4.0;
        else if (grade == "B+") score = 3.5;
        else if (grade == "B0") score = 3.0;
        else if (grade == "C+") score = 2.5;
        else if (grade == "C0") score = 2.0;
        else if (grade == "D+") score = 1.5;
        else if (grade == "D0") score = 1.0;
        else if (grade == "F") score = 0.0;

        scoreSum += (credit * score);
        creditSum += credit;
    }

    cout << fixed;
    cout.precision(6);
    cout << scoreSum / creditSum;

    return 0;
}