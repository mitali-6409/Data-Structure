#include <iostream>
using namespace std;


void showMenu() {
    int choice;


    cout << "\n===== RESTAURANT MENU =====\n";
    cout << "1. Burger\n";
    cout << "2. Pizza\n";
    cout << "3. Pasta\n";
    cout << "4. Cold Drink\n";
    cout << "5. Exit\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;


    switch (choice) {
        case 1:
            cout << "\nYou selected a Burger!\n";
            break;
        case 2:
            cout << "\nYou selected a Pizza!\n";
            break;
        case 3:
            cout << "\nYou selected a Pasta!\n";
            break;
        case 4:
            cout << "\nYou selected a Cold Drink!\n";
            break;
        case 5:
            cout << "\nThank you for visiting! Exiting the menu...\n";
            return;
        default:
            cout << "\nInvalid choice! Please select a valid option from 1 to 5.\n";
    }


    showMenu();
}

int main() {
    cout << "Welcome to our Restaurant!";


    showMenu();

    return 0;
}
