#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;
    cin.ignore();

    string courseName[100];
    float grade[100], creditHours[100], gradePoints[100];
    float totalCredits = 0, totalGradePoints = 0;

    for (int i = 0; i < numCourses; i++) {
        cout << "\n--- Course " << i + 1 << " ---" << endl;

        cout << "Enter course name: ";
        getline(cin, courseName[i]);

        cout << "Enter grade (0-10): ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> creditHours[i];
        cin.ignore();

        gradePoints[i] = grade[i] * creditHours[i];

        totalCredits     += creditHours[i];
        totalGradePoints += gradePoints[i];
    }

    float semesterGPA = totalGradePoints / totalCredits;
    float cgpa        = semesterGPA;

    cout << "\n============================================================" << endl;
    cout << "               INDIVIDUAL COURSE GRADES                    " << endl;
    cout << "============================================================" << endl;
    cout << left
         << setw(22) << "Course"
         << setw(10) << "Grade"
         << setw(14) << "Credit Hours"
         << setw(14) << "Grade Points" << endl;
    cout << "------------------------------------------------------------" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << left
             << setw(22) << courseName[i]
             << setw(10) << fixed << setprecision(1) << grade[i]
             << setw(14) << creditHours[i]
             << setw(14) << gradePoints[i] << endl;
    }

    cout << "------------------------------------------------------------" << endl;
    cout << "Total Credits     : " << totalCredits << endl;
    cout << "Total Grade Points: " << fixed << setprecision(2) << totalGradePoints << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Semester GPA      : " << fixed << setprecision(2) << semesterGPA << endl;
    cout << "Overall CGPA      : " << fixed << setprecision(2) << cgpa << endl;
    cout << "============================================================" << endl;

    return 0;
}
