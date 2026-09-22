#include <iostream>
#include <string>

using namespace std;

// Maximum capacity for storing students
const int MAX_STUDENTS = 100;

// Structure to hold student information
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Global array and counter to track records
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a student record
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nError: Student database is full (" << MAX_STUDENTS << " max).\n";
        return;
    }

    Student newStudent;
    cout << "\nEnter Roll Number: ";
    cin >> newStudent.rollNo;
    
    // Clear the input buffer to prevent string skipping issues
    cin.ignore(); 
    
    cout << "Enter Student Name: ";
    getline(cin, newStudent.name);
    
    cout << "Enter Marks: ";
    cin >> newStudent.marks;

    // Check if the Roll Number already exists
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == newStudent.rollNo) {
            cout << "\nError: A student with Roll Number " << newStudent.rollNo << " already exists!\n";
            return;
        }
    }

    // Save record to the array
    students[studentCount] = newStudent;
    studentCount++;
    cout << "\nStudent record added successfully!\n";
}

// Function to display all student records
void displayAllStudents() {
    if (studentCount == 0) {
        cout << "\nNo records found. The database is empty.\n";
        return;
    }

    cout << "\n================ ALL STUDENT RECORDS ================\n";
    cout << "Roll No.\tName\t\t\tMarks\n";
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << students[i].rollNo << "\t\t" 
             << students[i].name << "\t\t\t" 
             << students[i].marks << "\n";
    }
    cout << "=====================================================\n";
}

// Function to search for a student using roll number
void searchStudent() {
    if (studentCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int targetRollNo;
    cout << "\nEnter Roll Number to search: ";
    cin >> targetRollNo;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == targetRollNo) {
            cout << "\n--- Student Found ---\n";
            cout << "Roll Number : " << students[i].rollNo << "\n";
            cout << "Name        : " << students[i].name << "\n";
            cout << "Marks       : " << students[i].marks << "\n";
            cout << "---------------------\n";
            return; // Exit function early since match was found
        }
    }

    cout << "\nError: Student with Roll Number " << targetRollNo << " not found.\n";
}

// Main function containing the menu-driven loop
int main() {
    int choice;

    do {
        cout << "\n=== STUDENT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Search Student by Roll No.\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "\nExiting program. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please select an option between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
