
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int numStudents = 3;  
    const int numSubjects = 5;  

    int marks[numStudents][numSubjects];

   
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for Student " << i + 1 << " in 5 subjects: ";
        for (int j = 0; j < numSubjects; j++) {
            cin >> marks[i][j];
        }
    }

    
    int total[numStudents] = {0};
    double subjectAverage[numSubjects] = {0.0};

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            total[i] += marks[i][j];
            subjectAverage[j] += marks[i][j];
        }
    }

   
    for (int i = 0; i < numStudents; i++) {
        cout << "Total marks for Student " << i + 1 << ": " << total[i] << endl;
    }

    for (int j = 0; j < numSubjects; j++) {
        subjectAverage[j] /= numStudents;
        cout << "Average marks for Subject " << j + 1 << ": " << subjectAverage[j] << endl;
    }

    return 0;
}
