#include <iostream>
using namespace std;

int main() {
    // Array to store roll numbers of 5 students
    int rollNumbers[5];

    // Input: Taking roll numbers from the user
    cout << "Enter the roll numbers of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    // Output: Displaying the stored roll numbers
    cout << "\n--- Displaying Student Roll Numbers ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Roll No. of Student " << (i + 1) << ": " << rollNumbers[i] << endl;
    }

    return 0;
}
