#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    stack<int> cancelledOrders;
    int orderNum;

    cout << "Enter 5 cancelled order numbers:\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter order #" << i << ": ";
        cin >> orderNum;
        cancelledOrders.push(orderNum);
    }

    cout << "\n--- Displaying Cancelled Orders (Most Recent First) ---\n";


    while (!cancelledOrders.empty()) {

        cout << "Cancelled Order: " << cancelledOrders.top() << endl;

        cancelledOrders.pop();
    }

    return 0;
}

