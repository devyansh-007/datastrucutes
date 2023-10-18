//Take input in 2 Dimensional Array - Marks in 5 Subjects
//Calculate total of every student and average of every subject
#include <iostream>
using namespace std;

int main() {
    const int numStudents = 3;  // You can change the number of students as needed
    const int numSubjects = 5;  // Assuming 5 subjects

    int marks[numStudents][numSubjects];

    // Input marks for each student and each subject
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for Student " << i + 1 << " in 5 subjects: ";
        for (int j = 0; j < numSubjects; j++) {
            cin >> marks[i][j];
        }
    }

    // Calculate total marks for each student and average marks for each subject
    int total[numStudents] = {0};
    double subjectAverage[numSubjects] = {0.0};

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            total[i] += marks[i][j];
            subjectAverage[j] += marks[i][j];
        }
    }

    // Display the marks, total marks, and average marks
    for (int i = 0; i < numStudents; i++) {
        cout << "Total marks for Student " << i + 1 << ": " << total[i] << endl;
    }

    for (int j = 0; j < numSubjects; j++) {
        subjectAverage[j] /= numStudents;
        cout << "Average marks for Subject " << j + 1 << ": " << subjectAverage[j] << endl;
    }

    return 0;
}
