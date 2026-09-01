#include <iostream>
using namespace std;

int main() 
{
    int book[5];
    int searchID;

    cout << "Enter 5 Book ID:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> book[i];
    }

    cout << "\n Enter Book ID to Search";
    cin >> searchID;

    for (int i = 0; i < 5; i++)
    {
    
        if( book [i] == searchID)       
          
            cout << "Book Found!";
            return 0;
        
    }
    cout << "book not found!";
    
    return 0;
    
}
