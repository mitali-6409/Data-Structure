#include <iostream>
using namespace std;

int main() {
    // Declare an array to store the roll numbers of 5 students
    int rollNumbers[5];
    int searchRollNo;
    bool isFound = false;

    // Input: Get roll numbers from the user
    cout << "Enter the roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    // Input: Get the roll number to search for
    cout << "\nEnter the roll number you want to search: ";
    cin >> searchRollNo;

    // Process: Linear search through the array
    for (int i = 0; i < 5; i++) {
        if (rollNumbers[i] == searchRollNo) {
            isFound = true;
            break; // Stop looking once found
        }
    }

    // Output: Display the search result
    if (isFound) {
        cout << "Student Found" << endl;
    } else {
        cout << "student Not Found" << endl;
    }

    return 0;
}
