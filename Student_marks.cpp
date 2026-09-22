#include <iostream>

using namespace std;

int main() {
    // Array to store the marks of 5 students
    int marks[5];

    // 1. Input marks from the user
    cout << "Enter the marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // 2. Arrange the marks in descending order using Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            // Swap if the current mark is less than the next mark
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // 3. Display the sorted marks from highest to lowest
    cout << "\nMarks from highest to lowest:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Rank " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
