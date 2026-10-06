#include <iostream>
using namespace std;


void showMenu() {
    int choice;


    cout << "\n===== RESTAURANT MENU =====\n";
    cout << "1. Burger - $5.00\n";
    cout << "2. Pizza - $8.50\n";
    cout << "3. Pasta - $6.00\n";
    cout << "4. Cold Drink - $2.00\n";
    cout << "5. Exit\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;


    switch (choice) {
        case 1:
            cout << "\nYou ordered a Burger! Added $5.00 to your bill.\n";
            break;
        case 2:
            cout << "\nYou ordered a Pizza! Added $8.50 to your bill.\n";
            break;
        case 3:
            cout << "\nYou ordered a Pasta! Added $6.00 to your bill.\n";
            break;
        case 4:
            cout << "\nYou ordered a Cold Drink! Added $2.00 to your bill.\n";
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
